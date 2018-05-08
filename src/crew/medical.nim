import
  crew,
  ../types/crewtypes


proc generateMedicalOfficer*(baseCrewInfo: BaseCrewInfo): MedicalOfficer =
  result = MedicalOfficer(
    baseInfo: baseCrewInfo
  )