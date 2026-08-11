/* Ghidra address: 00ebd270 */
/* Ghidra symbol: FUN_00ebd270 */


undefined8 FUN_00ebd270(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0064cf60(DAT_0202eaa8,0x484);
  FUN_0064de00(DAT_0202eaa8[0xd6],local_res10[0]);
  iVar1 = (**(code **)(*DAT_0202eaa8 + 0x2d0))(DAT_0202eaa8);
  if (iVar1 == 1) {
    FUN_0064dd90(DAT_0202eaa8[0xd6],&local_10);
    FUN_00ea9ca0(param_1,local_10);
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

