/* Ghidra address: 01cd4050 */
/* Ghidra symbol: FUN_01cd4050 */


undefined8 FUN_01cd4050(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(double *)(param_1 + 200) <= *(double *)(param_1 + 0xb8) &&
       *(double *)(param_1 + 0xb8) != *(double *)(param_1 + 200)) ||
     (*(double *)(param_1 + 0xc0) <= *(double *)(param_1 + 0xd0) &&
      *(double *)(param_1 + 0xd0) != *(double *)(param_1 + 0xc0))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

