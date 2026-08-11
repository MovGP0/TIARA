/* Ghidra address: 00423060 */
/* Ghidra symbol: FUN_00423060 */


undefined8 * FUN_00423060(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_3 != '\0') {
    FUN_00423190(param_1);
  }
  return param_1;
}

