import
  ../types/crewtypes


proc generateEngineeringOfficer*(baseCrewInfo: BaseCrewInfo): EngineeringOfficer =
  result = EngineeringOfficer(
    baseInfo: baseCrewInfo
  )