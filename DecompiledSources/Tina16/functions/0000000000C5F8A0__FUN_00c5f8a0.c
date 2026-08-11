/* Ghidra address: 00c5f8a0 */
/* Ghidra symbol: FUN_00c5f8a0 */


ulonglong FUN_00c5f8a0(longlong *param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  cVar1 = *(char *)((longlong)param_1 + 0x2c);
  if (*(char *)((longlong)param_1 + 0x29) != '\0') {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1 == '\0') & 0xffffffff;
}

