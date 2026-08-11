/* Ghidra address: 0072b530 */
/* Ghidra symbol: FUN_0072b530 */


void FUN_0072b530(longlong param_1)

{
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_34 = *(int *)(param_1 + 0xe0);
  if (local_34 != 0) {
    FUN_0080dac0(*(undefined8 *)PTR_DAT_02004030,local_34);
  }
  return;
}

