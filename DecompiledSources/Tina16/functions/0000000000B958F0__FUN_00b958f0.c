/* Ghidra address: 00b958f0 */
/* Ghidra symbol: FUN_00b958f0 */


undefined8 FUN_00b958f0(int *param_1)

{
  undefined8 uVar1;
  
  if ((*param_1 == param_1[2]) && (param_1[1] == param_1[3])) {
    uVar1 = CONCAT71((uint7)(uint3)((uint)param_1[1] >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

