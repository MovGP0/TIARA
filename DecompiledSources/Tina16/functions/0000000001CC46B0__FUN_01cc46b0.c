/* Ghidra address: 01cc46b0 */
/* Ghidra symbol: FUN_01cc46b0 */


void FUN_01cc46b0(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_res18[0] = param_3;
  FUN_01cc4120(param_1,local_res18,8);
  uVar2 = FUN_01d347d0(lVar1,*(int *)(lVar1 + 0x450) + param_2);
  FUN_01cc1510(uVar2,0,local_res18[0]);
  return;
}

