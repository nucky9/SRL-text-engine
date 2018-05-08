import
  ../types/crewtypes


proc generateCaptain*(baseCrewInfo: BaseCrewInfo): Captain =
  result = Captain(
    baseInfo: baseCrewInfo
  )