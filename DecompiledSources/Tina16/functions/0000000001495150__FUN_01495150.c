/* Ghidra address: 01495150 */
/* Ghidra symbol: FUN_01495150 */


void FUN_01495150(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  *(int *)(param_1 + 0x904) = *(int *)(param_1 + 0x904) + 1;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0);
  if (iVar1 < *(int *)(param_1 + 0x904) + 1) {
    FUN_00848a70(*(longlong *)(param_1 + 0x700),iVar1 + 1);
  }
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x700),0,*(undefined4 *)(param_1 + 0x904),local_res10);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x700),1,*(undefined4 *)(param_1 + 0x904),local_res18);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x700),2,*(undefined4 *)(param_1 + 0x904),local_res20);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x700),3,*(undefined4 *)(param_1 + 0x904),param_5);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x700),4,*(undefined4 *)(param_1 + 0x904),param_6);
  FUN_00414560(&local_res10,5);
  return;
}

