/* Ghidra address: 00abe060 */
/* Ghidra symbol: FUN_00abe060 */


longlong FUN_00abe060(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong local_res8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined1 *local_50;
  longlong local_40;
  longlong *local_30;
  char local_25;
  int local_24;
  undefined8 local_20;
  
  local_50 = auStack_88;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  local_68 = param_5;
  local_60 = param_6;
  FUN_00ac2090(local_res8,0,param_3,param_4);
  local_25 = '\0';
  *(undefined1 *)(local_res8 + 0xa8) = 4;
  *(undefined1 *)(local_res8 + 0x60) = 0;
  local_20 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0);
  uVar3 = FUN_006e6120(&PTR_FUN_006bbb78,1,local_20);
  *(undefined8 *)(local_res8 + 0x1a0) = uVar3;
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
  iVar4 = *(int *)(param_5 + 0x10);
  local_24 = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_40 = FUN_004aeac0(param_5,local_24);
      if (*(char *)(local_40 + 8) == '-') {
        uVar2 = FUN_0043fc50(*(undefined8 *)(local_40 + 0x28),100);
        FUN_006e6860(*(undefined8 *)(local_res8 + 0x1a0),uVar2);
      }
      else if (*(char *)(local_40 + 8) == 'Z') {
        uVar2 = FUN_0043fc50(*(undefined8 *)(local_40 + 0x28),0);
        FUN_006e6920(*(undefined8 *)(local_res8 + 0x1a0),uVar2);
        local_25 = '\x01';
      }
      local_24 = local_24 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(local_res8 + 400) = *(undefined4 *)(*(longlong *)(local_res8 + 0x1a0) + 0x98);
  *(undefined4 *)(local_res8 + 0x194) = *(undefined4 *)(*(longlong *)(local_res8 + 0x1a0) + 0x9c);
  if (local_25 == '\0') {
    FUN_006e6ab0(*(undefined8 *)(local_res8 + 0x1a0),1);
  }
  else {
    FUN_006e6ab0(*(undefined8 *)(local_res8 + 0x1a0),0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

