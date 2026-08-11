/* Ghidra address: 01bd9fb0 */
/* Ghidra symbol: FUN_01bd9fb0 */


undefined4 FUN_01bd9fb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_2;
  uStack_38 = param_2[1];
  uStack_30 = param_2[2];
  FUN_0046bd60(&local_40);
  *param_3 = 0;
  FUN_00460ba0(&local_40);
  return 0x80020003;
}

