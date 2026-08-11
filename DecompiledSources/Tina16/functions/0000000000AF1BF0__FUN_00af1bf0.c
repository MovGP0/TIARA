/* Ghidra address: 00af1bf0 */
/* Ghidra symbol: FUN_00af1bf0 */


undefined8 FUN_00af1bf0(undefined8 param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  
  if ((((*param_2 == *param_3) && (param_2[2] == param_3[2])) && (param_2[1] == param_3[1])) &&
     (param_2[3] == param_3[3])) {
    uVar1 = CONCAT71((uint7)(uint3)((uint)param_2[3] >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

