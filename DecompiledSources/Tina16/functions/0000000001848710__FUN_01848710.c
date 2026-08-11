/* Ghidra address: 01848710 */
/* Ghidra symbol: FUN_01848710 */


void FUN_01848710(longlong param_1,int param_2,char param_3,longlong param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  char local_49;
  longlong local_48;
  int local_3c;
  longlong local_38;
  longlong local_30 [2];
  
  local_60 = auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_30[0] = 0;
  puVar1 = auStack_98;
  if ((param_2 <= *(int *)(*(longlong *)(param_1 + 0x98) + 0x10)) &&
     (puVar1 = auStack_98, -1 < param_2)) {
    local_38 = FUN_004aeac0(*(longlong *)(param_1 + 0x98),param_2);
    iVar3 = FUN_01847410(param_1);
    FUN_00419260(local_30,&DAT_018486c0,1,(longlong)iVar3);
    if (param_4 != 0) {
      iVar3 = FUN_01847410();
      local_3c = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar4 = FUN_01847630(param_1,local_3c);
          if (*(char *)(lVar4 + 0xa1) != '\0') {
            plVar5 = (longlong *)FUN_01847630(param_1,local_3c);
            (**(code **)(*plVar5 + 0x10))(plVar5,&local_78);
            FUN_00461840(local_30[0] + (longlong)local_3c * 0x18,&local_78);
          }
          local_3c = local_3c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    iVar3 = *(int *)(local_38 + 0x10);
    local_3c = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_48 = FUN_004aeac0(local_38,local_3c);
        local_49 = *(char *)(*(longlong *)(local_48 + 0x20) + 0xa1);
        if (((param_3 == '\0') ||
            (cVar2 = FUN_004113d0(*(undefined8 *)(local_48 + 0x20),&PTR_FUN_01843af8), cVar2 == '\0'
            )) || (local_49 == '\0')) {
          (**(code **)(**(longlong **)(local_48 + 0x20) + 8))
                    (*(longlong **)(local_48 + 0x20),local_48 + 8);
        }
        FUN_00410f20(local_48);
        local_3c = local_3c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (param_4 != 0) {
      iVar3 = FUN_01847410();
      local_3c = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar4 = FUN_01847630(param_1,local_3c);
          if (*(char *)(lVar4 + 0xa1) != '\0') {
            plVar5 = (longlong *)FUN_0184b520(param_4,local_3c);
            (**(code **)(*plVar5 + 8))(plVar5,local_30[0] + (longlong)local_3c * 0x18);
          }
          local_3c = local_3c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    FUN_00419430(local_30,&DAT_018486c0);
    FUN_00410f20(local_38);
    FUN_004ae870(*(undefined8 *)(param_1 + 0x98),param_2);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  FUN_00460ba0(&local_78);
  FUN_00419430(local_30,&DAT_018486c0);
  return;
}

