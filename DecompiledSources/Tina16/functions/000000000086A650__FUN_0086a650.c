/* Ghidra address: 0086a650 */
/* Ghidra symbol: FUN_0086a650 */


undefined4 FUN_0086a650(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong *local_48;
  undefined4 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_48 = (longlong *)0x0;
  local_30 = *param_2;
  uStack_28 = param_2[1];
  uStack_20 = param_2[2];
  FUN_0046bd60(&local_30);
  FUN_008687d0(param_1,&local_48);
  uVar1 = (**(code **)(*local_48 + 0x210))(local_48,&local_30);
  FUN_0041d630(uVar1);
  local_40 = 0;
  FUN_0041b800(&local_48);
  FUN_00460ba0(&local_30);
  return local_40;
}

