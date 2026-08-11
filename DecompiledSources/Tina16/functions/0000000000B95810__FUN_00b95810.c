/* Ghidra address: 00b95810 */
/* Ghidra symbol: FUN_00b95810 */


undefined8 FUN_00b95810(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_28 = (int)*param_2;
  if ((((*param_1 == local_28) &&
       (local_24 = (int)((ulonglong)*param_2 >> 0x20), param_1[1] == local_24)) &&
      (local_20 = (int)param_2[1], param_1[2] == local_20)) &&
     (local_1c = (int)((ulonglong)param_2[1] >> 0x20), param_1[3] == local_1c)) {
    uVar1 = CONCAT71((uint7)(uint3)((uint)param_1[3] >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

