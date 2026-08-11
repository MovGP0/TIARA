/* Ghidra address: 00f605f0 */
/* Ghidra symbol: FUN_00f605f0 */


undefined8 *
FUN_00f605f0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *param_1 = CONCAT44(param_3,param_2);
  param_1[1] = CONCAT44(param_5,param_4);
  return param_1;
}

