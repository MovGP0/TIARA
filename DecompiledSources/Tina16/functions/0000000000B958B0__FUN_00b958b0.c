/* Ghidra address: 00b958b0 */
/* Ghidra symbol: FUN_00b958b0 */


undefined8 FUN_00b958b0(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int local_10;
  int iStack_c;
  
  uVar1 = *param_2;
  local_10 = (int)uVar1;
  if ((((local_10 < *param_1) || (param_1[2] < local_10)) ||
      (iStack_c = (int)((ulonglong)uVar1 >> 0x20), iStack_c < param_1[1])) ||
     (param_1[3] < iStack_c)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((uint7)(uint3)((ulonglong)uVar1 >> 0x28),1);
  }
  return uVar1;
}

