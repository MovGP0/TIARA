/* Ghidra address: 01d2dd00 */
/* Ghidra symbol: FUN_01d2dd00 */


undefined8 FUN_01d2dd00(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_28 = (int)*param_1;
  if ((((param_2 < local_28) || (local_20 = (int)param_1[1], local_20 < param_2)) ||
      (local_24 = (int)((ulonglong)*param_1 >> 0x20), param_3 < local_24)) ||
     (local_1c = (int)((ulonglong)param_1[1] >> 0x20), local_1c < param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

