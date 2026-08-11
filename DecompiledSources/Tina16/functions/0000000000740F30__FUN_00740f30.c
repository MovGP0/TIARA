/* Ghidra address: 00740f30 */
/* Ghidra symbol: FUN_00740f30 */


void FUN_00740f30(longlong param_1)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 8);
  uStack_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 4);
  local_28 = **(int **)(param_1 + 0x38);
  uStack_24 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0xc);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),*(undefined4 *)(param_1 + 0x40)
              );
  local_40 = CONCAT44(uStack_24,local_28);
  local_38 = **(undefined8 **)(param_1 + 0x38);
  local_30 = CONCAT44(uStack_1c,local_20);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe0))(*(longlong **)(param_1 + 0x30),&local_40,2);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),*(undefined4 *)(param_1 + 0x48)
              );
  local_28 = local_28 + -1;
  local_40 = CONCAT44(uStack_1c,local_20);
  local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8);
  local_30 = CONCAT44(uStack_24,local_28);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe0))(*(longlong **)(param_1 + 0x30),&local_40,2);
  return;
}

