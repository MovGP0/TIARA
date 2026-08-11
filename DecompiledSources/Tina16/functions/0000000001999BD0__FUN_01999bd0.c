/* Ghidra address: 01999bd0 */
/* Ghidra symbol: FUN_01999bd0 */


void FUN_01999bd0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar2);
      FUN_01999940(auStack_38,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

