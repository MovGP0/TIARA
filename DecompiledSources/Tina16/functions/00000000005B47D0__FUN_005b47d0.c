/* Ghidra address: 005b47d0 */
/* Ghidra symbol: FUN_005b47d0 */


void FUN_005b47d0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_20 = param_2;
    iVar1 = FUN_00596a10(*(longlong *)(param_1 + 0x78) + 8,&local_20);
    if (-1 < iVar1) {
      uVar2 = FUN_004113f0(param_2,&PTR_FUN_005aebf0);
      FUN_005b26d0(uVar2,param_3);
    }
  }
  return;
}

