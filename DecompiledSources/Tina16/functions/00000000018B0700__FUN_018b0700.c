/* Ghidra address: 018b0700 */
/* Ghidra symbol: FUN_018b0700 */


void FUN_018b0700(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_0064d120(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0064d0b0(param_1);
    if (iVar1 != 0) goto LAB_018b073b;
  }
  FUN_007fdf10(param_1,0x247);
  FUN_007fded0(param_1,0x323);
LAB_018b073b:
  iVar1 = FUN_0064d0b0(param_1);
  lVar3 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x490),0);
  uVar2 = FUN_0040c770((double)(iVar1 - *(int *)(lVar3 + 0x20)) / 2.0);
  uVar4 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x490),1);
  FUN_006d8600(uVar4,uVar2);
  uVar4 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x490),2);
  FUN_006d8600(uVar4,uVar2);
  return;
}

