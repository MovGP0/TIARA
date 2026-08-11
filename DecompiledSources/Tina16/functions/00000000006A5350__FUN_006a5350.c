/* Ghidra address: 006a5350 */
/* Ghidra symbol: FUN_006a5350 */


undefined8 FUN_006a5350(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_50 = auStack_78;
  local_20 = 0;
  (**(code **)(*param_1 + 0x30))(param_1);
  local_38 = thunk_FUN_0413b85d(DAT_020123f2);
  if ((local_38 != 0) && (local_40 = thunk_FUN_0416a623(local_38), local_40 != 0)) {
    local_30 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    uVar1 = thunk_FUN_0420b4c4(local_38);
    FUN_004b89e0(local_30,local_40,uVar1);
    FUN_004b6dc0(local_30,0);
    local_28 = FUN_004baeb0(&PTR_FUN_0047f878,1,local_30,0x100);
    *(undefined8 *)(local_28 + 0x58) = param_3;
    local_20 = FUN_004c1530(local_28,0);
    if (param_2 != 0) {
      FUN_004d29f0(param_2,local_20);
    }
    FUN_00410f20(local_28);
    FUN_00410f20(local_30);
    thunk_FUN_04172795(local_38);
    (**(code **)(*param_1 + 0x28))(param_1);
    return local_20;
  }
  FUN_006a5530(0,local_50);
  return local_20;
}

