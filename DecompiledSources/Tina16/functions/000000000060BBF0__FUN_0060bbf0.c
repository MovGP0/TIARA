/* Ghidra address: 0060bbf0 */
/* Ghidra symbol: FUN_0060bbf0 */


void FUN_0060bbf0(longlong *param_1,byte param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  ushort local_72;
  undefined4 local_70;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  longlong local_38;
  char local_29;
  
  local_b0 = auStack_d8;
  bVar2 = FUN_00609f90(param_1);
  if (param_2 != bVar2) {
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0xf8))(param_1,1);
    }
    else if (param_2 == 8) {
      FUN_005ffe20(PTR_PTR_02002740);
    }
    else {
      FUN_0040d200(&local_a0,0x68,0);
      lVar1 = param_1[0xc];
      uVar3 = *(undefined8 *)(lVar1 + 0x40);
      local_98 = *(undefined8 *)(lVar1 + 0x48);
      uStack_90 = *(undefined8 *)(lVar1 + 0x50);
      local_29 = '\0';
      local_88 = 0;
      local_80 = 0x28;
      local_a0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_7c = local_a0._4_4_;
      local_78 = (undefined4)local_98;
      local_74 = 1;
      local_72 = (ushort)(byte)(&DAT_01dee831)[param_2];
      local_38 = *(longlong *)(lVar1 + 0x20);
      local_a0 = uVar3;
      if (param_2 == 2) {
        local_38 = DAT_02011fa0;
      }
      else if (param_2 == 3) {
        uVar3 = thunk_FUN_040ef593(0);
        local_a8 = FUN_005fffe0(uVar3);
        local_38 = thunk_FUN_041d714e(local_a8);
        local_29 = '\x01';
        thunk_FUN_041a9b5c(0,local_a8);
      }
      else if (param_2 == 5) {
        local_70 = 3;
        local_58 = 0xf800;
        local_54 = 0x7e0;
        local_50 = 0x1f;
      }
      uVar3 = (**(code **)(*param_1 + 0xe8))(param_1);
      FUN_00608f90(param_1,uVar3,local_38,&local_a0);
      *(bool *)((longlong)param_1 + 0x3a) = local_38 != 0;
      if (local_29 != '\0') {
        thunk_FUN_0416f828(local_38);
      }
      (**(code **)(*param_1 + 0x20))(param_1,param_1);
    }
  }
  return;
}

