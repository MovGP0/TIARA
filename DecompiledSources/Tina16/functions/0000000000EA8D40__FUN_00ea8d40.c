/* Ghidra address: 00ea8d40 */
/* Ghidra symbol: FUN_00ea8d40 */


undefined8 FUN_00ea8d40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_30 = auStack_58;
  local_28 = *param_4;
  uStack_20 = param_4[1];
  FUN_00ea4ee0(*(undefined8 *)(param_1 + 0x20),param_3);
  *(undefined8 *)(param_1 + 8) = local_28;
  *(undefined8 *)(param_1 + 0x10) = uStack_20;
  local_38 = *(longlong *)(param_1 + 0x20);
  *(longlong *)(local_38 + 0x48) = param_1;
  *(code **)(local_38 + 0x40) = FUN_00ea7ea0;
  FUN_00ea4c90(local_38);
  FUN_00ea47c0(*(undefined8 *)(param_1 + 0x20),param_2);
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_2;
}

