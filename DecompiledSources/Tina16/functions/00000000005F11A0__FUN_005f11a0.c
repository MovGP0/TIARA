/* Ghidra address: 005f11a0 */
/* Ghidra symbol: FUN_005f11a0 */


char FUN_005f11a0(undefined4 param_1,undefined8 param_2)

{
  char local_11;
  undefined8 local_10;
  
  local_10 = 0;
  local_11 = FUN_004a3290(param_1,param_2,&DAT_01dec168,0x93);
  if (local_11 == '\0') {
    FUN_0043fba0(&local_10,param_1,8);
    FUN_00416ba0(param_2,&DAT_005f1244,local_10);
    local_11 = '\x01';
  }
  FUN_00414480(&local_10);
  return local_11;
}

