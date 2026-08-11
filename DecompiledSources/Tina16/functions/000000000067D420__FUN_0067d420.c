/* Ghidra address: 0067d420 */
/* Ghidra symbol: FUN_0067d420 */


ulonglong FUN_0067d420(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x78)) {
    if (*(longlong *)(param_1 + 0xe8) != 0) goto LAB_0067d440;
  }
  uVar1 = 0;
LAB_0067d440:
  return uVar1 & 0xffffffff;
}

