/* Ghidra address: 00635c00 */
/* Ghidra symbol: FUN_00635c00 */


void FUN_00635c00(longlong param_1,byte param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  
  local_20 = *param_3;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) + 0x2c);
    FUN_005fd6d0(*(longlong *)(param_1 + 0x78),1);
    if (param_2 < 2) {
      local_20._0_4_ = (int)local_20 - param_4;
      FUN_00635b00(auStack_48);
      local_20._0_4_ = (int)local_20 + 1;
      FUN_00635b00(auStack_48);
      local_20._0_4_ = (int)local_20 + 3;
      FUN_00635b00(auStack_48);
      local_20 = CONCAT44(local_20._4_4_,(int)local_20 + 1);
      FUN_00635b00(auStack_48);
    }
    else if ((byte)(param_2 - 2) < 2) {
      local_20._4_4_ = local_20._4_4_ - param_4;
      FUN_00635b00(auStack_48);
      local_20._4_4_ = local_20._4_4_ + 1;
      FUN_00635b00(auStack_48);
      local_20._4_4_ = local_20._4_4_ + 3;
      FUN_00635b00(auStack_48);
      local_20 = CONCAT44(local_20._4_4_ + 1,(int)local_20);
      FUN_00635b00(auStack_48);
    }
    FUN_005fd6d0(*(undefined8 *)(param_1 + 0x78),uVar1);
  }
  return;
}

