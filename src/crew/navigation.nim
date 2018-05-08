import
  crew,
  ../types/crewtypes


proc generateNavigationOfficer*(baseCrewInfo: BaseCrewInfo): NavigationOfficer =
  result = NavigationOfficer(
    baseInfo: baseCrewInfo
  )