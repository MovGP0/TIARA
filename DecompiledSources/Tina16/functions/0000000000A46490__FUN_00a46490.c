/* Ghidra address: 00a46490 */
/* Ghidra symbol: FUN_00a46490 */


void FUN_00a46490(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,longlong *param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_50 = auStack_c8;
  if (param_6 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_6 + 0xe8))(param_6);
    if (lVar1 != 0) {
      local_28 = FUN_005ffa40(param_1);
      uVar2 = (**(code **)(*param_6 + 0xe8))(param_6);
      FUN_00601800(uVar2,&local_3c,&local_40);
      local_38 = FUN_004095c0(local_3c);
      local_20 = FUN_00a463d0(auStack_c8,local_40);
      local_30 = thunk_FUN_0418f5de(local_28,*(undefined8 *)PTR_DAT_020036e8,0);
      uVar2 = (**(code **)(*param_6 + 0xe8))(param_6);
      lVar1 = local_38;
      FUN_00601960(uVar2,*(undefined8 *)PTR_DAT_020036e8,local_38,*(undefined8 *)(local_20 + 8));
      thunk_FUN_03a5de49(local_28);
      local_48 = lVar1;
      local_a8 = param_5;
      local_a0 = 0;
      local_98 = 0;
      local_90 = *(undefined4 *)(lVar1 + 4);
      local_88 = *(undefined4 *)(lVar1 + 8);
      local_80 = *(undefined8 *)(local_20 + 8);
      local_78 = lVar1;
      local_70 = 0;
      local_68 = 0xcc0020;
      thunk_FUN_03cc01a5(local_28,param_2,param_3,param_4);
      FUN_00a46440(auStack_c8,local_20);
      thunk_FUN_0418f5de(local_28,local_30,0);
      FUN_004095f0(local_38,local_3c);
    }
  }
  return;
}

