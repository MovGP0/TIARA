/* Ghidra address: 01b10a90 */
/* Ghidra symbol: FUN_01b10a90 */


undefined8 FUN_01b10a90(undefined8 param_1,double *param_2,double *param_3)

{
  undefined8 uVar1;
  
  if (*param_2 == *param_3) {
    uVar1 = 0;
  }
  else if (*param_3 < *param_2 || *param_3 == *param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

