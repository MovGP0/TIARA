/* Ghidra address: 01431ea0 */
/* Ghidra symbol: FUN_01431ea0 */


void FUN_01431ea0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_004095f0(*(undefined8 *)(lVar1 + 8));
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  uVar3 = FUN_00409570((longlong)(iVar2 * 2 + 1));
  *(undefined8 *)(lVar1 + 8) = uVar3;
  FUN_00415dd0(&local_20,param_2,0);
  FUN_004425e0(uVar3,local_20);
  FUN_004144d0(&local_20);
  return;
}

