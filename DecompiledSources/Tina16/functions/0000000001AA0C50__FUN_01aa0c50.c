/* Ghidra address: 01aa0c50 */
/* Ghidra symbol: FUN_01aa0c50 */


undefined8 FUN_01aa0c50(undefined8 param_1,int param_2)

{
  undefined1 local_118;
  char local_117;
  undefined1 local_110 [256];
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 < 10) {
    FUN_0043f750(&local_10,param_2);
    FUN_00416910(local_110,local_10,0xff);
    FUN_00415020(param_1,local_110,0x50);
  }
  else {
    local_118 = 1;
    local_117 = (char)param_2 + '7';
    FUN_00415020(param_1,&local_118,0x50);
  }
  FUN_00414480(&local_10);
  return param_1;
}

