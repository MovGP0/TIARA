/* Ghidra address: 01367230 */
/* Ghidra symbol: FUN_01367230 */


ulonglong FUN_01367230(longlong *param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  cVar1 = *(char *)((longlong)param_1 + 0x24);
  (**(code **)(*param_1 + 8))(param_1);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1 == '\0') & 0xffffffff;
}

