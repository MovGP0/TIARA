/* Ghidra address: 010afb50 */
/* Ghidra symbol: FUN_010afb50 */


void FUN_010afb50(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40));
  iVar4 = *(int *)(*(longlong *)(param_2 + 0x40) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x40),iVar3);
      uVar2 = FUN_010ae440(&DAT_010a8868,1,0,0,0);
      FUN_010ae910(uVar2,uVar1);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x40),uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

