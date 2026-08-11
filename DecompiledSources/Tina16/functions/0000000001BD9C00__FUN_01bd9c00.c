/* Ghidra address: 01bd9c00 */
/* Ghidra symbol: FUN_01bd9c00 */


undefined4
FUN_01bd9c00(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_3;
  uStack_38 = param_3[1];
  uStack_30 = param_3[2];
  FUN_0046bd60(&local_40);
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  FUN_00460ba0(&local_40);
  return 0x80020003;
}

