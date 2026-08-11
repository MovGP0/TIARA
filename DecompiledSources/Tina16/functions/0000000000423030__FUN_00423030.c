/* Ghidra address: 00423030 */
/* Ghidra symbol: FUN_00423030 */


undefined8 * FUN_00423030(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  *param_1 = *param_2;
  param_1[1] = *param_3;
  if (param_4 != '\0') {
    FUN_00423190(param_1);
  }
  return param_1;
}

