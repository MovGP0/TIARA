/* Ghidra address: 018c80c0 */
/* Ghidra symbol: FUN_018c80c0 */


void FUN_018c80c0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int local_5c;
  int local_50;
  bool local_49;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  plVar1 = *(longlong **)(param_1 + 0xe0);
  iVar6 = *(int *)(*(longlong *)(param_3 + 0x208) + 0x10);
  local_5c = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_3 + 0x208),local_5c);
      if (*(char *)(lVar4 + 0x250) != '\0') {
        FUN_00414480(lVar4 + 0x248);
        iVar2 = (**(code **)(*plVar1 + 0x28))();
        local_50 = 0;
        if (-1 < iVar2 + -1) {
          do {
            (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,local_50);
            uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,local_50);
            FUN_0043f750(&local_38,uVar3);
            FUN_00416cd0(lVar4 + 0x248,5,*(undefined8 *)(lVar4 + 0x248),local_30,&LAB_018c8418,
                         local_38,&LAB_018c8418);
            local_50 = local_50 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_0043f750(&local_40,*(undefined4 *)(lVar4 + 0x22c));
        FUN_00416cd0(lVar4 + 0x248,4,*(undefined8 *)(lVar4 + 0x248),*(undefined8 *)(lVar4 + 0x10),
                     &LAB_018c8418,local_40);
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 400);
        iVar2 = (**(code **)(*plVar5 + 0xb0))(plVar5,*(undefined8 *)(lVar4 + 0x248));
        local_49 = iVar2 != -1;
        if (*(char *)(lVar4 + 0x251) != '\0') {
          local_49 = !local_49;
        }
        plVar5 = *(longlong **)(lVar4 + 0x1a8);
        if ((plVar5 != (longlong *)0x0) && (*(char *)(param_3 + 0x253) == '\0')) {
          (**(code **)(*plVar5 + 0xf8))(plVar5,local_49);
        }
        local_50 = local_5c + 1;
        iVar2 = *(int *)(*(longlong *)(param_3 + 0x208) + 0x10) + -1;
        if (local_50 <= iVar2) {
          iVar2 = (iVar2 - local_50) + 1;
          do {
            plVar5 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_3 + 0x208),local_50);
            (**(code **)(*plVar5 + 0xf8))(plVar5,local_49);
            plVar5 = (longlong *)plVar5[0x43];
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0xf8))(plVar5,local_49);
            }
            local_50 = local_50 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        (**(code **)(*param_2 + 0xf8))(param_2,local_49);
        if ((*(char *)(lVar4 + 0x252) == '\0') && (*(longlong *)(lVar4 + 0x218) != 0)) {
          (**(code **)(**(longlong **)(lVar4 + 0x218) + 0xf8))
                    (*(longlong **)(lVar4 + 0x218),local_49);
        }
        if (local_49 == false) break;
      }
      local_5c = local_5c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_40,3);
  return;
}

