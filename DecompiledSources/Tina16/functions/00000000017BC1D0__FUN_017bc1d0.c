/* Ghidra address: 017bc1d0 */
/* Ghidra symbol: FUN_017bc1d0 */


void FUN_017bc1d0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
      (**(code **)(*plVar1 + 0x178))(plVar1,4,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar3);
      (**(code **)(*plVar1 + 0x178))(plVar1,4,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_017bb280(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

