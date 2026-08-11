/* Ghidra address: 0068be20 */
/* Ghidra symbol: FUN_0068be20 */


void FUN_0068be20(longlong param_1,char param_2,undefined8 param_3)

{
  bool bVar1;
  
  if (*(byte *)(param_1 + 0x4cc) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (*(byte *)(param_1 + 0x4cc) & 0x1f)
            & 0x18U) != 0;
  }
  else {
    bVar1 = false;
  }
  if ((!bVar1) && (*(char *)(param_1 + 0x4ce) != param_2)) {
    *(char *)(param_1 + 0x4ce) = param_2;
    FUN_00655b90(param_1);
  }
  return;
}

