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

type
  BaseCrewInfo* = object
    firstName*: string
    lastName*: string
    experience*: int
    level*: int
    personalityType*: PersonalityType

  Captain* = ref object
    baseInfo*: BaseCrewInfo
    captainAbility*: int
    specialAbility*: SpecialAbility
    secondaryAbilities*: seq[tuple[ability: SecondaryAbility, value: int]]

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
    courseSettings*: int
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