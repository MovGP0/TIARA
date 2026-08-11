/* Ghidra address: 0113ed70 */
/* Ghidra symbol: FUN_0113ed70 */


uint FUN_0113ed70(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  for (param_3 = param_3 & 0xff; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = uVar1 * 2 | param_2 & 1;
    param_2 = param_2 >> 1;
  }
  return uVar1;
}

