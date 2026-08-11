/* Ghidra address: 00ce45c0 */
/* Ghidra symbol: FUN_00ce45c0 */


void FUN_00ce45c0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_008acad0(param_2,param_1[3],local_20);
  iVar1 = (**(code **)(*(longlong *)param_1[3] + 0x28))((longlong *)param_1[3]);
  if (0 < iVar1) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  if (local_20[0] != 0) {
    FUN_00414ad0(param_1 + 4,local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

