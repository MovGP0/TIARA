/* Ghidra address: 010f9780 */
/* Ghidra symbol: FUN_010f9780 */


void FUN_010f9780(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_010e3d20(param_1);
  FUN_0040af10(*(double *)(param_1 + 0x8b8) * 4.0);
  uVar2 = FUN_0040c770();
  FUN_007438b0(*(undefined8 *)(param_1 + 0xb40),uVar2);
  FUN_0064e140(param_1,0xfff5);
  lVar1 = *(longlong *)(param_1 + 0x920);
  if (lVar1 == 0) {
    *(undefined4 *)(param_1 + 0x9cc) = 0x18;
  }
  else if (*(char *)(param_1 + 0x990) == '\n') {
    *(undefined4 *)(param_1 + 0x9cc) = *(undefined4 *)(lVar1 + 0x9c);
  }
  else {
    iVar3 = FUN_0040c770((double)*(int *)(lVar1 + 0x9c) * 2.4);
    iVar4 = FUN_0040c770((double)*(int *)(*(longlong *)(param_1 + 0x7e0) + 0x9c) * 0.3);
    *(int *)(param_1 + 0x9cc) = iVar3 + iVar4;
  }
  if (*(longlong *)(param_1 + 0x9b0) != 0) {
    FUN_010e7600(*(longlong *)(param_1 + 0x9b0),*(undefined4 *)(param_1 + 0x9cc));
  }
  FUN_0064e140(param_1,0);
  return;
}

