/* Ghidra address: 00d06a20 */
/* Ghidra symbol: FUN_00d06a20 */


void FUN_00d06a20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  wchar_t *local_70;
  undefined *local_68;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_34;
  longlong local_30;
  int local_20;
  char local_19;
  
  local_40 = auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar2 = *(longlong **)(lVar1 + 0x130);
  puVar3 = auStack_98;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x48))
              (plVar2,*(undefined8 *)(lVar1 + 0x150),*(undefined8 *)(lVar1 + 0x148));
    puVar3 = local_40;
  }
  local_40 = puVar3;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10));
  FUN_00ce2330(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x218),
               *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  if (param_2 != 0) {
    FUN_00d02150(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
  }
  cVar4 = FUN_00cb0ad0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x100));
  local_19 = cVar4 == '\0';
  if ((bool)local_19) {
    FUN_00cb0bf0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x100));
  }
  lVar1 = *(longlong *)(param_1 + 8);
  local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x148);
  local_70 = L" HTTP/";
  local_68 = (&PTR_DAT_01eb2cc8)[*(byte *)(lVar1 + 0x1f8)];
  FUN_00416cd0(&local_48,5,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x150),&DAT_00d06d48);
  plVar2 = *(longlong **)(lVar1 + 0x100);
  (**(code **)(*plVar2 + 0x150))(plVar2,local_48,0);
  iVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x28))();
  local_20 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50,local_20);
      local_30 = local_50;
      local_34 = 0;
      if (local_50 != 0) {
        local_34 = *(int *)(local_50 + -4);
      }
      if (0 < local_34) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18);
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_58,local_20);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x100);
        (**(code **)(*plVar2 + 0x150))(plVar2,local_58,0);
      }
      local_20 = local_20 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x100);
  (**(code **)(*plVar2 + 0x150))(plVar2,0,0);
  if (local_19 != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x100);
    (**(code **)(*plVar2 + 0x1b8))(plVar2);
  }
  FUN_00414560(&local_58,3);
  return;
}

