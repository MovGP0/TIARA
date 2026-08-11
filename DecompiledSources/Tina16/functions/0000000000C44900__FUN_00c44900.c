/* Ghidra address: 00c44900 */
/* Ghidra symbol: FUN_00c44900 */


undefined8 * FUN_00c44900(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  uVar1 = FUN_00c44590(&local_38);
  *param_1 = uVar1;
  uVar1 = FUN_00c445d0(&local_38);
  param_1[1] = uVar1;
  return param_1;
}

