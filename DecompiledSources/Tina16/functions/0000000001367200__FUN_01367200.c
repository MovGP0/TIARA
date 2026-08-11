/* Ghidra address: 01367200 */
/* Ghidra symbol: FUN_01367200 */


ulonglong FUN_01367200(longlong *param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  cVar1 = *(char *)((longlong)param_1 + 0x24);
  if (*(char *)((longlong)param_1 + 0x21) != '\0') {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1 == '\0') & 0xffffffff;
}

