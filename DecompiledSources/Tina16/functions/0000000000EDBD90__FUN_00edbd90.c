/* Ghidra address: 00edbd90 */
/* Ghidra symbol: FUN_00edbd90 */


undefined1 FUN_00edbd90(undefined8 param_1,char param_2,undefined1 param_3)

{
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_21 = 0;
  if (param_2 == 'J') {
    FUN_00416760(&local_10,param_3);
    local_21 = FUN_004170c0(local_10,&DAT_00edbe98,1);
  }
  else if (param_2 == 'M') {
    FUN_00416760(&local_18,param_3);
    local_21 = FUN_004170c0(local_18,L"DGSB",1);
  }
  else if (param_2 == 'Q') {
    FUN_00416760(&local_20,param_3);
    local_21 = FUN_004170c0(local_20,L"CBES",1);
  }
  FUN_00414560(&local_20,3);
  return local_21;
}

