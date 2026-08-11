/* Ghidra address: 00af6fb0 */
/* Ghidra symbol: FUN_00af6fb0 */


undefined8 FUN_00af6fb0(longlong param_1,int param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 *local_30;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  longlong *local_10;
  
  local_30 = auStack_78;
  local_18 = 0;
  uStack_14 = 0;
  if (0 < param_2) {
    local_10 = (longlong *)FUN_00aa5de0(&PTR_FUN_00a90568,1,*(undefined8 *)(param_1 + 0x8b0));
    local_1c = 0;
    local_58 = 300;
    local_50 = 0;
    local_48 = &local_18;
    local_40 = &local_1c;
    uStack_14 = (**(code **)(*local_10 + 0x30))
                          (local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x490),0,
                           param_2);
    FUN_00410f20(local_10);
  }
  return CONCAT44(uStack_14,local_18);
}

