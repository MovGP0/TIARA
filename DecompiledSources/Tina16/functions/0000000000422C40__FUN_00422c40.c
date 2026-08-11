/* Ghidra address: 00422c40 */
/* Ghidra symbol: FUN_00422c40 */


undefined8 FUN_00422c40(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = CONCAT71((uint7)(uint3)((uint)param_1[1] >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

