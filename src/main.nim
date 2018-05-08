import
  random,
  /crew/crew
  
randomize()
let newCrew = generateCrew()
echo newCrew.captain.repr
echo newCrew.communications.repr
echo newCrew.engineer.repr
echo newCrew.medical.repr
echo newCrew.navigation.repr
echo newCrew.science.repr
echo newCrew.tactical.repr

