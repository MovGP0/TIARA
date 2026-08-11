/* Ghidra address: 00806e80 */
/* Ghidra symbol: FUN_00806e80 */


void FUN_00806e80(longlong param_1)

{
  char cVar1;
  undefined1 auStack_28 [32];
  
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    cVar1 = FUN_006265e0();
    if (cVar1 != '\0') {
      FUN_00806d10(auStack_28,param_1);
    }
  }
  return;
}

