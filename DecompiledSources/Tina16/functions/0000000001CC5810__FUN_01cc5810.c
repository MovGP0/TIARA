/* Ghidra address: 01cc5810 */
/* Ghidra symbol: FUN_01cc5810 */


uint FUN_01cc5810(void)

{
  int iVar1;
  int in_R9D;
  double dVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  
  iVar1 = 0;
  do {
    local_1c = (uint)(iVar1 + in_R9D) >> 1;
    dVar2 = (double)FUN_01cc57d0(auStack_48);
    if (dVar2 < 0.0) {
      in_R9D = local_1c - 1;
    }
    else {
      iVar1 = local_1c + 1;
    }
  } while (iVar1 <= in_R9D);
  return (uint)(iVar1 + in_R9D) >> 1;
}

