/* Ghidra address: 00a39570 */
/* Ghidra symbol: FUN_00a39570 */


void FUN_00a39570(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00a3c2b0(param_1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x160) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00a33e20(*(undefined8 *)(param_1 + 0x160),iVar2);
      FUN_00410f20(uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00a339b0(*(undefined8 *)(param_1 + 0x160),0);
  return;
}

