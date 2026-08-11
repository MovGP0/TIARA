/* Ghidra address: 00655570 */
/* Ghidra symbol: FUN_00655570 */


undefined8 FUN_00655570(undefined8 param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  
  if ((*param_2 == *param_3) && (param_2[1] == param_3[1])) {
    uVar1 = CONCAT71((uint7)(uint3)((uint)param_2[1] >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

