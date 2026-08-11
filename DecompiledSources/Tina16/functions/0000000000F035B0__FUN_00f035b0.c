/* Ghidra address: 00f035b0 */
/* Ghidra symbol: FUN_00f035b0 */


void FUN_00f035b0(longlong param_1,char param_2)

{
  char cVar1;
  
  if ((*(ushort *)(param_1 + 0x4f) & 0x200) == 0) {
    cVar1 = FUN_00f02f30(param_1);
    if (param_2 == cVar1) goto LAB_00f035e2;
  }
  *(char *)(param_1 + 0x30) = param_2;
  *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) | 0x200;
LAB_00f035e2:
  FUN_004b1830(param_1,0);
  return;
}

