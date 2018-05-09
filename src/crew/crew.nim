import
  os,
  parsecsv,
  streams,
  random,
  ../types/crewtypes,
  captain,
  communications,
  engineer,
  medical,
  navigation,
  science,
  tactical

const
  maleNamesFile = "../assets/names/maleNames.csv"
  femaleNamesFile = "../assets/names/femaleNames.csv"
  lastNamesFile = "../assets/names/lastNames.csv"


proc generateGender(): Gender =
  let randomRoll = rand(0..1)
  if randomRoll == 0:
    return female
  else:
    return male


proc generateFirstName(gender: Gender): string =
  var
    p: CsvParser
    nameFile: string
  if gender == male:
    nameFile = maleNamesFile
  else:
    nameFile = femaleNamesFile

  p.open(nameFile)
  var numRows = 0
  while p.readRow():
    inc numRows
  p.close()
  p.open(nameFile)
  let randomRow = rand(0..<numRows)
  var i = 0
  while p.readRow():
    if i == (randomRow):
      return p.row[0]
    else:
      inc i

  p.close()


proc generateLastName(): string =
  var
    p: CsvParser

  p.open(lastNamesFile)
  var numRows = 0
  while p.readRow():
    inc numRows
  p.close()
  p.open(lastNamesFile)
  let randomRow = rand(0..<numRows)
  var i = 0
  while p.readRow():
    if i == (randomRow):
      return p.row[0]
    else:
      inc i

  p.close()


proc generatePersonalityModifiers(): seq[PersonalityModifier] =
  result = @[]
  for personality in PersonalityType:
    var
      modifier: int
      newPersonalityModifier: PersonalityModifier
    
    let randomRoll = rand(0..100)
    for entry in personalityModifiers:
      if randomRoll <= entry[0]:
        modifier = entry[1]
        break
    newPersonalityModifier.personality = personality
    newPersonalityModifier.modifier = modifier

    result.add(newPersonalityModifier)
         

proc generatePersonalityType(): PersonalityType =
  let personalities = @[ptA, ptB, ptC, ptD, ptE]
  return rand(personalities)


proc generateBaseCrewInfo*(): BaseCrewInfo =
  let gender = generateGender()
  result = BaseCrewInfo(
    gender: gender,
    firstName: generateFirstName(gender),
    lastName: generateLastName(),
    experience: 0,
    level: 1,
    personalityType: generatePersonalityType(),
    personalityModifiers: generatePersonalityModifiers()
  )


proc generateCrew*(): ShipCrew =
  result = ShipCrew(
    captain: generateCaptain(generateBaseCrewInfo()),
    communications: generateCommunicationsOfficer(generateBaseCrewInfo()),
    engineer: generateEngineeringOfficer(generateBaseCrewInfo()),
    medical: generateMedicalOfficer(generateBaseCrewInfo()),
    navigation: generateNavigationOfficer(generateBaseCrewInfo()),
    science: generateScienceOfficer(generateBaseCrewInfo()),
    tactical: generateTacticalOfficer(generateBaseCrewInfo()),
  )


