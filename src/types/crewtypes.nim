# enums
type
  SpecialAbility* = enum
    asNone
  
  SecondaryAbility* = enum
    saEngineering,
    saScience,
    saWeapons,
    saHelm,
    saMedical,
    saCommunications

  PersonalityType* = enum
    ptA,
    ptB,
    ptC,
    ptD,
    ptE
  
  Gender* = enum
    male,
    female

type
  BaseCrewInfo* = object
    gender*: Gender 
    firstName*: string
    lastName*: string
    experience*: int
    level*: int
    personalityType*: PersonalityType
    personalityModifiers*: seq[tuple[personality: PersonalityType, modifier: int]]
  
  PersonalityModifier* = tuple[
    personality: PersonalityType,
    modifier: int
  ]

  Captain* = ref object
    baseInfo*: BaseCrewInfo
    captainAbility*: int
    secondaryAbility*: tuple[ability: SecondaryAbility, level: int]
    specialAbility*: SpecialAbility
    personalityModifiers*: seq[PersonalityModifier] 

  CommunicationsOfficer* = ref object
    baseInfo*: BaseCrewInfo
    diplomacy*: int
    linguisticAbility*: int
    specialAbility*: SpecialAbility

  EngineeringOfficer* = ref object
    baseInfo*: BaseCrewInfo
    powerManagement*: int
    Repair*: int
    shipImprovements*: int
    specialAbility*: SpecialAbility 

  MedicalOfficer* = ref object
    baseInfo*: BaseCrewInfo
    surgicalAbility*: int
    diseaseAnalysis*: int
    scienceBonus*: int
    specialAbility*: SpecialAbility

  NavigationOfficer* = ref object
    baseInfo*: BaseCrewInfo
    maneuvering*: int
    coursePlotting*: int
    sublightSpeedModifier*: int
    specialAbility*: SpecialAbility

  ScienceOfficer* = ref object
    baseInfo*: BaseCrewInfo
    exploration*: int
    problemSolving*: int
    specialAbility*: SpecialAbility

  TacticalOfficer* = ref object
    baseInfo*: BaseCrewInfo
    targetting*: int
    shieldModulation*: int
    security*: int
    specialAbility*: SpecialAbility

  ShipCrew* = ref object
    captain*: Captain
    communications*: CommunicationsOfficer
    engineer*: EngineeringOfficer
    medical*: MedicalOfficer
    navigation*: NavigationOfficer
    science*: ScienceOfficer
    tactical*: TacticalOfficer

const
  personalityModifiers* = [(3, -3), (13, -2), (33, -1), (67, 0), (87, 1), (97, 2), (100, 3)]
  abilityLevels* =[(15, 6), (30, 7), (70, 8), (85, 9), (100, 10)]