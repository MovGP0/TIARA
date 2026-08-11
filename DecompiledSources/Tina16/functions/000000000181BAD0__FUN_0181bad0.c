/* Ghidra address: 0181bad0 */
/* Ghidra symbol: FUN_0181bad0 */


void FUN_0181bad0(longlong *param_1,undefined4 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_1c;
  
  local_50 = auStack_78;
  if (param_1[0xd8] == 0) {
    lVar2 = FUN_00410e60(&DAT_01819700,1);
    param_1[0xd8] = lVar2;
    *(undefined4 *)(lVar2 + 8) = 0;
    uVar1 = FUN_0042a200(param_2[2]);
    local_40 = (uint)uVar1;
    if (*(char *)((longlong)param_1 + 0x6b4) == '\0') {
      *(uint *)(param_1 + 0xd7) = local_40;
      FUN_0181bd40(0,local_50);
    }
    else {
      if (*(uint *)(param_1 + 0xd6) != local_40) {
        (**(code **)(*param_1 + 0x2e0))(param_1);
      }
      FUN_008042b0(param_1,param_2);
      if ((*(uint *)(param_1 + 0xd6) != local_40) && ((int)param_1[0xd7] == 0)) {
        (**(code **)(*param_1 + 0x350))(param_1,local_40);
        *(uint *)(param_1 + 0xd6) = local_40;
        (**(code **)(*param_1 + 0x338))(param_1);
        FUN_0181b950(auStack_78,param_1);
        (**(code **)(*param_1 + 0x2e8))(param_1);
        (**(code **)(*param_1 + 0x2f0))(param_1);
      }
      lVar2 = param_1[0xd8];
      local_1c = *(int *)(lVar2 + 8);
      local_2c = *(int *)(lVar2 + 0x10);
      local_38 = *(undefined4 *)(lVar2 + 0x1c);
      local_3c = *(undefined4 *)(lVar2 + 0x18);
      local_34 = *(undefined4 *)(lVar2 + 0x20);
      local_30 = *(undefined4 *)(lVar2 + 0x24);
      FUN_00452320(param_1 + 0xd8);
      if (local_1c == 0x2e0) {
        uVar3 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar3,0x2e0,(longlong)local_2c,&local_3c);
      }
    }
  }
  else {
    *(undefined4 *)(param_1[0xd8] + 8) = *param_2;
    *(undefined8 *)(param_1[0xd8] + 0x10) = *(undefined8 *)(param_2 + 2);
    lVar2 = param_1[0xd8];
    *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(*(longlong *)(param_2 + 4) + 4);
    *(undefined4 *)(lVar2 + 0x18) = **(undefined4 **)(param_2 + 4);
    *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(*(longlong *)(param_2 + 4) + 0xc);
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(*(longlong *)(param_2 + 4) + 8);
  }
  return;
}

