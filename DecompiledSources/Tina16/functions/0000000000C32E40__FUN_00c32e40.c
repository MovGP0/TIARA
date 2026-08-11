/* Ghidra address: 00c32e40 */
/* Ghidra symbol: FUN_00c32e40 */


int FUN_00c32e40(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar1 = FUN_00c24700(*(undefined8 *)(param_1 + 0x58));
  iVar2 = FUN_00c1aa10();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = FUN_00c2fce0(*(undefined8 *)(param_1 + 0x50),iVar5);
      iVar3 = FUN_00c29e60(uVar4);
      if (iVar1 < iVar3) {
        uVar4 = FUN_00c2fce0(*(undefined8 *)(param_1 + 0x50),iVar5);
        iVar1 = FUN_00c29e60(uVar4);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar1;
}

