/* Ghidra address: 012e5760 */
/* Ghidra symbol: FUN_012e5760 */


undefined8 FUN_012e5760(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(double *)(param_1 + 0x18) <= *(double *)(param_1 + 0x20)) ||
     (*(double *)(param_1 + 0x18) <= 0.0 && *(double *)(param_1 + 0x18) != 0.0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

