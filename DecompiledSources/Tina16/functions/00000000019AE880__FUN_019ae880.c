/* Ghidra address: 019ae880 */
/* Ghidra symbol: FUN_019ae880 */


undefined8 FUN_019ae880(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  else if (*param_2 < *param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

