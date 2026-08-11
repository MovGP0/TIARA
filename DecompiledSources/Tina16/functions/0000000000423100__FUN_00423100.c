/* Ghidra address: 00423100 */
/* Ghidra symbol: FUN_00423100 */


undefined8 FUN_00423100(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[2] == param_2[2])) && (param_1[1] == param_2[1])) &&
     (param_1[3] == param_2[3])) {
    uVar1 = CONCAT71((uint7)(uint3)((uint)param_1[3] >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

