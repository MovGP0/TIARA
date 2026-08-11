/* Ghidra address: 0129f200 */
/* Ghidra symbol: FUN_0129f200 */


undefined8 * FUN_0129f200(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50 [6];
  
  local_50[0] = 0;
  (**(code **)(**(longlong **)(param_3 + 0x18) + 0x288))(*(longlong **)(param_3 + 0x18),local_50);
  FUN_00414ad0(param_1 + 0x50,local_50[0]);
  FUN_01b15380(*(undefined8 *)(param_1 + 0x38),&local_60,*(undefined8 *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x40) = local_60;
  *(undefined8 *)(param_1 + 0x48) = uStack_58;
  FUN_00c44b60(&local_60,param_1 + 0x40,param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = local_60;
  *(undefined8 *)(param_1 + 0x30) = uStack_58;
  *param_2 = *(undefined8 *)(param_1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 0x30);
  FUN_00414480(local_50);
  return param_2;
}

