/* Ghidra address: 01aa0e50 */
/* Ghidra symbol: FUN_01aa0e50 */


undefined8 FUN_01aa0e50(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined8 local_88;
  undefined1 local_80 [96];
  undefined8 local_20 [2];
  
  local_88 = 0;
  local_20[0] = 0;
  FUN_00414480(local_20);
  do {
    lVar1 = (longlong)param_2;
    param_2 = param_2 / 0x10;
    FUN_01aa0c50(local_80,lVar1 % 0x10 & 0xffffffff);
    FUN_004169a0(&local_88,local_80);
    FUN_00416ba0(local_20,local_88,local_20[0]);
  } while (param_2 != 0);
  FUN_00414ad0(param_1,local_20[0]);
  FUN_00414480(&local_88);
  FUN_00414480(local_20);
  return param_1;
}

