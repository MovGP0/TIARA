/* Ghidra address: 00c34d80 */
/* Ghidra symbol: FUN_00c34d80 */


void FUN_00c34d80(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00c34e10(param_1);
  FUN_00c34de0(param_1);
  iVar2 = FUN_00c1aa10();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_00c2fce0(*(undefined8 *)(param_1 + 0x50),iVar3);
      FUN_00c28b70(uVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

