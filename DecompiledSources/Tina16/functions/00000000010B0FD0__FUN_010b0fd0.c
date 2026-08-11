/* Ghidra address: 010b0fd0 */
/* Ghidra symbol: FUN_010b0fd0 */


void FUN_010b0fd0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      FUN_00410f20(uVar1);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18));
  iVar4 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x18),iVar3);
      uVar2 = FUN_010ae9e0(&DAT_010a8e80,1);
      FUN_010af970(uVar2,uVar1);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

