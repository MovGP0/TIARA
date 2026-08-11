/* Ghidra address: 00b60e70 */
/* Ghidra symbol: FUN_00b60e70 */


void FUN_00b60e70(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  int local_88;
  int local_80;
  int local_78;
  int local_70;
  undefined1 *local_60;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  longlong local_28;
  longlong *local_20;
  
  local_60 = auStack_b8;
  local_28 = FUN_00b41f60(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xa0),
                          *(undefined4 *)(param_1 + 0x2c));
  local_2c = *(int *)(local_28 + 0x38) + -1;
  if (local_2c < 0) {
LAB_00b60eea:
    uVar4 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
    FUN_004134c0(uVar4);
  }
  else {
    iVar1 = FUN_00b41f50(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xa0));
    if (iVar1 <= local_2c) goto LAB_00b60eea;
  }
  iVar1 = *(int *)(local_28 + 8);
  if (-1 < iVar1) {
    iVar2 = FUN_00b59a10(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8));
    if (iVar1 < iVar2) goto LAB_00b60f46;
  }
  uVar4 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
  FUN_004134c0(uVar4);
LAB_00b60f46:
  lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                       *(undefined4 *)(local_28 + 8));
  uVar4 = FUN_00b52ce0(*(undefined8 *)(lVar5 + 0x18),*(undefined2 *)(local_28 + 0xc));
  uVar3 = FUN_00b51ae0(uVar4);
  local_30 = FUN_00b413c0(*(undefined4 *)(local_28 + 0x10),uVar3);
  lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                       *(undefined4 *)(local_28 + 8));
  uVar4 = FUN_00b52ce0(*(undefined8 *)(lVar5 + 0x18),*(undefined2 *)(local_28 + 0x1c));
  uVar3 = FUN_00b51ae0(uVar4);
  local_34 = FUN_00b413c0(*(undefined4 *)(local_28 + 0x20),uVar3);
  lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                       *(undefined4 *)(local_28 + 8));
  uVar4 = FUN_00b53830(*(undefined8 *)(lVar5 + 0x20),*(undefined2 *)(local_28 + 0x14));
  uVar3 = FUN_00b50950(uVar4);
  local_38 = FUN_00b41430(*(undefined4 *)(local_28 + 0x18),uVar3);
  lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                       *(undefined4 *)(local_28 + 8));
  uVar4 = FUN_00b53830(*(undefined8 *)(lVar5 + 0x20),*(undefined2 *)(local_28 + 0x24));
  uVar3 = FUN_00b50950(uVar4);
  local_3c = FUN_00b41430(*(undefined4 *)(local_28 + 0x28),uVar3);
  local_40 = local_34 - local_30;
  local_48 = *(int *)(local_28 + 0xc);
  iVar1 = *(int *)(local_28 + 0x1c) + -1;
  if (local_48 <= iVar1) {
    iVar1 = (iVar1 - local_48) + 1;
    do {
      lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                           *(undefined4 *)(local_28 + 8));
      uVar4 = FUN_00b52ce0(*(undefined8 *)(lVar5 + 0x18),(undefined2)local_48);
      iVar2 = FUN_00b51ae0(uVar4);
      local_40 = local_40 + iVar2;
      local_48 = local_48 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_44 = local_3c - local_38;
  local_4c = *(int *)(local_28 + 0x14);
  iVar1 = *(int *)(local_28 + 0x24) + -1;
  if (local_4c <= iVar1) {
    iVar1 = (iVar1 - local_4c) + 1;
    do {
      lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                           *(undefined4 *)(local_28 + 8));
      uVar4 = FUN_00b53830(*(undefined8 *)(lVar5 + 0x20),(undefined2)local_4c);
      iVar2 = FUN_00b50950(uVar4);
      local_44 = local_44 + iVar2;
      local_4c = local_4c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (local_40 < 1) {
    local_40 = 1;
  }
  if (local_44 < 1) {
    local_44 = 1;
  }
  lVar5 = FUN_00b41f30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xa0),local_2c);
  FUN_004b6dc0(*(undefined8 *)(lVar5 + 8),0);
  local_20 = (longlong *)FUN_00410e60(&LAB_00b251f8,1);
  lVar5 = FUN_00b41f30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xa0),local_2c);
  lVar6 = FUN_00b41f30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xa0),local_2c);
  uVar4 = (**(code **)**(undefined8 **)(lVar6 + 8))(*(undefined8 **)(lVar6 + 8));
  FUN_004b8ba0(local_20,*(undefined8 *)(lVar5 + 8),uVar4);
  lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                       *(undefined4 *)(local_28 + 8));
  uVar3 = (**(code **)*local_20)(local_20);
  local_98 = *(undefined4 *)(local_28 + 0xc);
  local_90 = *(undefined4 *)(local_28 + 0x14);
  local_88 = local_30;
  local_80 = local_38;
  local_78 = local_40;
  local_70 = local_44;
  FUN_00b58640(*(undefined8 *)(lVar5 + 0x50),local_20,0,uVar3);
  (**(code **)(*local_20 + -0x20))(local_20,1);
  return;
}

