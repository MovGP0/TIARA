/* Ghidra address: 0043e030 */
/* Ghidra symbol: FUN_0043e030 */


undefined8 FUN_0043e030(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    uVar1 = CONCAT71((uint7)(uint3)((uint)param_1[3] >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

