/* Ghidra address: 01b10d30 */
/* Ghidra symbol: FUN_01b10d30 */


uint FUN_01b10d30(longlong param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  do {
    local_1c = (uint)(iVar1 + iVar2) >> 1;
    dVar3 = (double)FUN_01b10d10(auStack_48);
    if (dVar3 <= 0.0) {
      iVar2 = local_1c - 1;
    }
    else {
      iVar1 = local_1c + 1;
    }
  } while (iVar1 <= iVar2);
  return (uint)(iVar1 + iVar2) >> 1;
}

