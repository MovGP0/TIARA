/* Ghidra address: 004231e0 */
/* Ghidra symbol: FUN_004231e0 */


undefined8 FUN_004231e0(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_2 < *param_1) || (param_1[2] <= *param_2)) || (param_2[1] < param_1[1])) ||
     (param_1[3] <= param_2[1])) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((uint7)(uint3)((uint)param_2[1] >> 8),1);
  }
  return uVar1;
}

