/* Ghidra address: 0199cde0 */
/* Ghidra symbol: FUN_0199cde0 */


void FUN_0199cde0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  
  FUN_0199dd30(param_1,0,1);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_0199ca70(auStack_38,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

