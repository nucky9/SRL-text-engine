import
  ../types/crewtypes


proc generateCommunicationsOfficer*(baseCrewInfo: BaseCrewInfo): CommunicationsOfficer =
  result = CommunicationsOfficer(
    baseInfo: baseCrewInfo
  )