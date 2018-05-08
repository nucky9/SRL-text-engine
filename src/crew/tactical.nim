import
  crew,
  ../types/crewtypes


proc generateTacticalOfficer*(baseCrewInfo: BaseCrewInfo): TacticalOfficer =
  result = TacticalOfficer(
    baseInfo: baseCrewInfo
  )