/* Ghidra address: 004c7140 */
/* Ghidra symbol: FUN_004c7140 */


ulonglong FUN_004c7140(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 8)) {
    if (param_2 == param_3) goto LAB_004c715b;
  }
  uVar1 = 0;
LAB_004c715b:
  return uVar1 & 0xffffffff;
}

