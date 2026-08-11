/* Ghidra address: 00abe6b0 */
/* Ghidra symbol: FUN_00abe6b0 */


longlong FUN_00abe6b0(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,undefined8 param_6)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong local_res8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined1 *local_50;
  longlong local_40;
  longlong *local_30;
  int local_24;
  undefined8 local_20;
  
  local_50 = auStack_88;
  local_res8 = param_1;
  puVar2 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_50;
  }
  local_50 = puVar2;
  local_68 = param_5;
  local_60 = param_6;
  FUN_00ac2090(local_res8,0,param_3,param_4);
  *(undefined1 *)(local_res8 + 0xa8) = 4;
  *(undefined1 *)(local_res8 + 0x60) = 0;
  local_20 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0);
  uVar5 = FUN_00a78060(&PTR_FUN_00a6cf08,1,local_20);
  *(undefined8 *)(local_res8 + 0x1a0) = uVar5;
  local_30 = *(longlong **)(local_res8 + 0x1a0);
  FUN_0064cb30(local_30,0xfffff060);
  FUN_0064cb90(local_30,0xfffff060);
  (**(code **)(*local_30 + 0x130))(local_30,local_20);
  FUN_006e6860(local_30,100);
  FUN_006e6a70(local_30,1);
  FUN_0064cc50(local_30,0x14);
  FUN_0064cbf0(local_30,100);
  FUN_0064dbe0(local_30,1);
  (**(code **)(*local_30 + 0x148))
            (local_30,*(undefined1 *)(*(longlong *)(local_res8 + 0x18) + 0x90));
  if ((*(char *)(local_res8 + 0xbc) == '\0') && (0 < *(int *)(local_res8 + 0xdc))) {
    FUN_0064cbf0(*(undefined8 *)(local_res8 + 0x1a0),*(undefined4 *)(local_res8 + 0xdc));
  }
  if ((*(char *)(local_res8 + 0xbd) == '\0') && (0 < *(int *)(local_res8 + 0xe0))) {
    FUN_0064cc50(*(undefined8 *)(local_res8 + 0x1a0),*(undefined4 *)(local_res8 + 0xe0));
  }
  iVar6 = *(int *)(param_5 + 0x10);
  local_24 = 0;
  if (-1 < iVar6 + -1) {
    do {
      local_40 = FUN_004aeac0(param_5,local_24);
      bVar1 = *(byte *)(local_40 + 8);
      if (bVar1 < 0x32) {
        if (bVar1 == 0x31) {
          uVar4 = FUN_0043fc50(*(undefined8 *)(local_40 + 0x28),0);
          FUN_006e6840(*(undefined8 *)(local_res8 + 0x1a0),uVar4);
        }
        else if (bVar1 == 0x1f) {
          iVar3 = FUN_0043fc50(*(undefined8 *)(local_40 + 0x28),100);
          (**(code **)(**(longlong **)(local_res8 + 0x1a0) + 0x268))
                    (*(longlong **)(local_res8 + 0x1a0),(double)iVar3);
        }
        else if (bVar1 == 0x2a) {
          iVar3 = FUN_0043fc50(*(undefined8 *)(local_40 + 0x28),0);
          (**(code **)(**(longlong **)(local_res8 + 0x1a0) + 0x260))
                    (*(longlong **)(local_res8 + 0x1a0),(double)iVar3);
        }
        else if (bVar1 == 0x2d) {
          uVar4 = FUN_0043fc50(*(undefined8 *)(local_40 + 0x28),100);
          FUN_006e6860(*(undefined8 *)(local_res8 + 0x1a0),uVar4);
        }
      }
      else if (bVar1 == 0x3d) {
        iVar3 = FUN_0043fc50(*(undefined8 *)(local_40 + 0x28),0x32);
        (**(code **)(**(longlong **)(local_res8 + 0x1a0) + 0x270))
                  (*(longlong **)(local_res8 + 0x1a0),(double)iVar3);
      }
      else if (bVar1 == 0x5a) {
        uVar4 = FUN_0043fc50(*(undefined8 *)(local_40 + 0x28),0);
        FUN_00a78170(*(undefined8 *)(local_res8 + 0x1a0),uVar4);
      }
      local_24 = local_24 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(local_res8 + 400) = *(undefined4 *)(*(longlong *)(local_res8 + 0x1a0) + 0x98);
  *(undefined4 *)(local_res8 + 0x194) = *(undefined4 *)(*(longlong *)(local_res8 + 0x1a0) + 0x9c);
  FUN_006e6ab0(*(undefined8 *)(local_res8 + 0x1a0),0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

