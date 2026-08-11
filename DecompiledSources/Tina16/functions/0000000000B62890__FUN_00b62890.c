/* Ghidra address: 00b62890 */
/* Ghidra symbol: FUN_00b62890 */


void FUN_00b62890(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined2 local_68;
  int local_54;
  undefined1 *local_50;
  int local_3c;
  int local_38;
  int local_34;
  longlong *local_30;
  longlong *local_28;
  
  local_50 = auStack_88;
  iVar2 = FUN_00b59a10();
  local_34 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
      FUN_00b28800(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18),
                   *(undefined8 *)(lVar4 + 0x38));
      local_34 = local_34 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00b28d50(*(undefined8 *)(param_1 + 0x78));
  local_28 = (longlong *)FUN_00410e60(&PTR_FUN_00472dd0,1);
  FUN_00b62660(auStack_88);
  local_54 = (int)local_28[2] + -1;
  local_3c = 0;
  iVar2 = (int)local_28[2];
  if (-1 < local_54) {
    do {
      local_54 = iVar2;
      local_34 = FUN_004aeac0(local_28,local_3c);
      FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
      iVar2 = FUN_00b573b0();
      local_38 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
          local_30 = (longlong *)FUN_00b57390(*(undefined8 *)(lVar4 + 0x28),local_38);
          iVar3 = FUN_00416420(local_30[3],0);
          if (iVar3 != 0) {
            local_68 = (undefined2)local_34;
            FUN_00b28730(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18),local_30[3],local_30,
                         0);
          }
          local_38 = local_38 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
      cVar1 = FUN_00b54290(*(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x10));
      if (cVar1 == '\0') {
        lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
        local_68 = (undefined2)local_34;
        FUN_00b28730(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18),0,
                     *(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x10),7);
      }
      uVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
      local_30 = (longlong *)FUN_00b54080(&DAT_00b48580,1,uVar5);
      lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
      if ((*(int *)(*(longlong *)(lVar4 + 0x40) + 0x18) != -1) &&
         (lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34),
         *(int *)(*(longlong *)(lVar4 + 0x40) + 0x1c) != -1)) {
        lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
        lVar6 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
        local_68 = CONCAT11(local_68._1_1_,0xff);
        FUN_00b22230(local_30,*(undefined2 *)(*(longlong *)(lVar4 + 0x40) + 0x18),
                     *(undefined2 *)(*(longlong *)(lVar6 + 0x40) + 0x1c));
      }
      lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
      if (*(int *)(*(longlong *)(lVar4 + 0x40) + 0x20) != -1) {
        lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
        if (*(int *)(*(longlong *)(lVar4 + 0x40) + 0x24) != -1) {
          FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
          lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_34);
          local_68 = CONCAT11(local_68._1_1_,*(undefined1 *)(*(longlong *)(lVar4 + 0x40) + 0x24));
          FUN_00b22230(local_30,0,0xffffffff);
        }
      }
      cVar1 = FUN_00b54290(local_30);
      if (cVar1 == '\0') {
        local_68 = (undefined2)local_34;
        FUN_00b28730(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18),0,local_30,8);
      }
      (**(code **)(*local_30 + -0x20))(local_30,1);
      local_3c = local_3c + 1;
      local_54 = local_54 + -1;
      iVar2 = local_54;
    } while (local_54 != 0);
  }
  (**(code **)(*local_28 + -0x20))(local_28,1);
  FUN_00b62440(auStack_88);
  return;
}

