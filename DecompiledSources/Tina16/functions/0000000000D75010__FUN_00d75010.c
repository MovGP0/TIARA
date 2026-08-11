/* Ghidra address: 00d75010 */
/* Ghidra symbol: FUN_00d75010 */


void FUN_00d75010(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_40;
  longlong local_38;
  undefined1 local_29;
  undefined4 local_28;
  int local_24;
  longlong *local_20;
  
  local_50 = auStack_78;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_40 = *(longlong *)(param_1 + 8);
    FUN_00d574e0(param_2,*(undefined8 *)(local_40 + 0x78));
    FUN_00d574e0(param_2,*(undefined8 *)(local_40 + 0x88));
    FUN_00d574e0(param_2,*(undefined8 *)(local_40 + 0x90));
    FUN_00d574e0(param_2,*(undefined8 *)(local_40 + 0x98));
    FUN_00d574e0(param_2,*(undefined8 *)(local_40 + 0x80));
    FUN_004b89e0(param_2,local_40 + 0xa8,1);
    FUN_004b89e0(param_2,local_40 + 0xa9,1);
    FUN_00d574e0(param_2,*(undefined8 *)(local_40 + 0xb0));
    local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    (**(code **)(**(longlong **)(local_40 + 0xa0) + 0x110))
              (*(longlong **)(local_40 + 0xa0),local_20);
    local_38 = (**(code **)*local_20)(local_20);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
    if (local_38 != 0) {
      (**(code **)(*local_20 + 0x58))(local_20,param_2);
    }
    FUN_00410f20(local_20);
    local_28 = *(undefined4 *)(*(longlong *)(local_40 + 0xc0) + 0x10);
    (**(code **)(*param_2 + 0x20))(param_2,&local_28,4);
    iVar4 = *(int *)(*(longlong *)(local_40 + 0xc0) + 0x10);
    local_24 = 0;
    if (-1 < iVar4 + -1) {
      do {
        plVar1 = (longlong *)FUN_00d5a2a0(*(undefined8 *)(local_40 + 0xc0),local_24);
        (**(code **)(*plVar1 + 200))(plVar1,param_2);
        lVar2 = FUN_00d5a2a0(*(undefined8 *)(local_40 + 0xc0),local_24);
        local_29 = *(char *)(lVar2 + 0x58) == '\x01';
        (**(code **)(*param_2 + 0x20))(param_2,&local_29,1);
        lVar2 = FUN_00d5a2a0(*(undefined8 *)(local_40 + 0xc0),local_24);
        local_29 = *(char *)(lVar2 + 0x68) == '\x01';
        (**(code **)(*param_2 + 0x20))(param_2,&local_29,1);
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_28 = *(undefined4 *)(*(longlong *)(local_40 + 0xb8) + 0x10);
    (**(code **)(*param_2 + 0x20))(param_2,&local_28,4);
    iVar4 = *(int *)(*(longlong *)(local_40 + 0xb8) + 0x10);
    local_24 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar3 = FUN_00d74900(local_40,local_24);
        FUN_00d756c0(param_2,uVar3);
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    (**(code **)(**(longlong **)(local_40 + 200) + 0x28))(*(longlong **)(local_40 + 200),param_2);
    (**(code **)(**(longlong **)(local_40 + 0xd0) + 0x28))(*(longlong **)(local_40 + 0xd0),param_2);
    (**(code **)(**(longlong **)(local_40 + 0xd8) + 0x28))(*(longlong **)(local_40 + 0xd8),param_2);
  }
  return;
}

