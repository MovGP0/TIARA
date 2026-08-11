/* Ghidra address: 00b41bc0 */
/* Ghidra symbol: FUN_00b41bc0 */


void FUN_00b41bc0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  if (iVar4 <= iVar1) {
    iVar4 = (iVar1 - iVar4) + 1;
    do {
      FUN_004ae7e0(*(undefined8 *)(param_1 + 8),0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar1);
  if (lVar2 == 0) {
    uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    FUN_004aedb0(*(undefined8 *)(param_1 + 8),iVar1,uVar3);
  }
  uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar1);
  FUN_004ae7e0(uVar3,param_2);
  lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar1);
  iVar4 = (iVar1 + 1) * 0x400 + *(int *)(lVar2 + 0x10);
  *(int *)(param_2 + 0x30) = iVar4;
  lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar1);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(lVar2 + 0x10);
  if (*(int *)(param_1 + 0x10) < iVar4) {
    *(int *)(param_1 + 0x10) = iVar4;
  }
  if (*(int *)(param_1 + 0x14) < iVar1) {
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return;
}

