/* Ghidra address: 0081b080 */
/* Ghidra symbol: FUN_0081b080 */


undefined8 FUN_0081b080(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3[1] < param_2[1]) {
    param_3[1] = param_2[1];
  }
  iVar1 = param_2[3];
  if (iVar1 < param_3[3]) {
    param_3[3] = iVar1;
  }
  if (*param_3 < *param_2) {
    *param_3 = *param_2;
  }
  if (iVar1 < param_3[3]) {
    param_3[3] = iVar1;
  }
  if ((param_3[3] < param_3[1]) || (param_3[2] < *param_3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)*param_3 >> 8),1);
  }
  return uVar2;
}

