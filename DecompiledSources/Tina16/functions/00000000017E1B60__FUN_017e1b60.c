/* Ghidra address: 017e1b60 */
/* Ghidra symbol: FUN_017e1b60 */


bool FUN_017e1b60(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  char local_2b8 [664];
  
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  bVar1 = false;
  do {
    if (iVar3 < 0) {
      return bVar1;
    }
    uVar2 = FUN_00b94e60(param_1,iVar3);
    FUN_013b49d0(param_1,uVar2,local_2b8);
    if (local_2b8[0] == '\x06') {
      bVar1 = true;
    }
    else {
      iVar3 = iVar3 + -1;
    }
  } while (!bVar1);
  return bVar1;
}

