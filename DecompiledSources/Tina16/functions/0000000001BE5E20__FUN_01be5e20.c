/* Ghidra address: 01be5e20 */
/* Ghidra symbol: FUN_01be5e20 */


void FUN_01be5e20(longlong *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_38;
  longlong *local_30;
  int local_24;
  
  local_40 = auStack_68;
  *(undefined1 *)((longlong)param_1 + 0x591) = 1;
  *(short *)(param_1 + 99) = (short)param_1[99] + 1;
  puVar1 = auStack_68;
  local_30 = param_1;
  if (param_1[0xce] != 0) {
    FUN_0064dbe0(param_1[0xce],0);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  (**(code **)(*param_1 + 0x438))(param_1);
  FUN_01be2a50(param_1,param_2);
  local_38 = FUN_01c019a0(param_1);
  iVar5 = *(int *)(*(longlong *)(local_38 + 0x10) + 0x10);
  local_24 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_01c019a0(param_1);
      lVar4 = FUN_01bfb960(uVar3,local_24);
      if (*(char *)(lVar4 + 0x58) != '\0') {
        uVar3 = FUN_01c019a0(param_1);
        lVar4 = FUN_01bfb960(uVar3,local_24);
        cVar2 = FUN_004113d0(*(undefined8 *)(lVar4 + 0x80),&PTR_FUN_01bdf860);
        if (cVar2 != '\0') {
          uVar3 = FUN_01c019a0(param_1);
          lVar4 = FUN_01bfb960(uVar3,local_24);
          (**(code **)(*param_1 + 0x420))(param_1,*(undefined8 *)(lVar4 + 0x80));
          uVar3 = FUN_01c019a0(param_1);
          lVar4 = FUN_01bfb960(uVar3,local_24);
          (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x260))(*(longlong **)(lVar4 + 0x80));
        }
      }
      local_24 = local_24 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00654410(param_1);
  lVar4 = param_1[0xb6];
  if (lVar4 != 0) {
    (**(code **)(*param_1 + 0x440))(param_1,*(undefined8 *)(lVar4 + 8),lVar4);
  }
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar3,0x85,1,0);
  (**(code **)(*param_1 + 0x428))(param_1);
  return;
}

