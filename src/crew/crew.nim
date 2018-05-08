import
  random,
  ../types/crewtypes,
  captain,
  communications,
  engineer,
  medical,
  navigation,
  science,
  tactical



proc generateFirstName(): string =
  result = "James"


proc generateLastName(): string =
  result = "Kirk"

proc generatePersonalityType(): PersonalityType =
  let personalities = @[ptA, ptB, ptC, ptD, ptE]
  return rand(personalities)


proc generateBaseCrewInfo*(): BaseCrewInfo =
  result = BaseCrewInfo(
    firstName: generateFirstName(),
    lastName: generateLastName(),
    experience: 0,
    level: 1,
    personalityType: generatePersonalityType()
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


