/* Ghidra address: 00536090 */
/* Ghidra symbol: FUN_00536090 */


undefined8 * FUN_00536090(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0041b800(param_1 + 1);
  param_1[1] = PTR_PTR_01dd79f8;
  return param_1;
}

