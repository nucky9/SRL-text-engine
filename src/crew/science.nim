import
  crew,
  ../types/crewtypes


proc generateScienceOfficer*(baseCrewInfo: BaseCrewInfo): ScienceOfficer =
  result = ScienceOfficer(
    baseInfo: baseCrewInfo
  )