/* Ghidra address: 018bfe60 */
/* Ghidra symbol: FUN_018bfe60 */


void FUN_018bfe60(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_68 [47];
  char local_39;
  longlong *local_30;
  
  uVar6 = FUN_0188d920();
  local_30 = (longlong *)FUN_0188d190(uVar6);
  FUN_01977630(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x20),0);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x20);
  (**(code **)(*plVar2 + 600))(plVar2,2);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x20);
  if (*(longlong *)(*(longlong *)(lVar3 + 0x240) + 0x38) == 0) {
    FUN_00414ad0(local_30 + 0x18,*(undefined8 *)(lVar3 + 0x1c0));
  }
  else {
    FUN_00414ad0(local_30 + 0x18,
                 *(undefined8 *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x20) + 0x240) + 0x38
                  ));
  }
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x20) + 0x228);
  if (*(int *)(lVar3 + 8) < 1) {
    *(undefined4 *)(lVar3 + 8) = 1;
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  if (iVar4 == 0) {
    uVar5 = (**(code **)**(undefined8 **)(param_1 + 0xd0))(*(undefined8 **)(param_1 + 0xd0));
    *(undefined4 *)(param_1 + 0x9c) = uVar5;
  }
  else {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0x9c) = uVar5;
  }
  local_39 = '\0';
  *(undefined1 *)(param_1 + 0x77) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x20) + 0x228);
  if (*(char *)(lVar3 + 0xc) != '\0') {
    iVar4 = *(int *)(lVar3 + 8);
    iVar7 = 0;
    if (-1 < iVar4 + -1) {
      do {
        *(int *)(param_1 + 0x98) = iVar7 + 1;
        cVar1 = *(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x20) + 0x228)
                         + 0x28);
        if (cVar1 == '\0') {
LAB_018c001a:
          FUN_018bf7c0(auStack_68);
        }
        else if (cVar1 == '\x01') {
          FUN_018bf870(auStack_68);
        }
        else if (cVar1 == '\x02') {
          FUN_018bf910(auStack_68);
        }
        else if (cVar1 == '\x03') goto LAB_018c001a;
        if (*(char *)(param_1 + 0x76) != '\0') {
          *(undefined1 *)(param_1 + 0x76) = 0;
          (**(code **)(*local_30 + 0x20))(local_30);
          (**(code **)(*local_30 + 0x38))(local_30);
        }
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x20) + 0x288) != '\0') break;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    goto LAB_018c00c8;
  }
  cVar1 = *(char *)(lVar3 + 0x28);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      FUN_018bf870(auStack_68);
      goto LAB_018c00c8;
    }
    if (cVar1 == '\x02') {
      FUN_018bf910(auStack_68);
      goto LAB_018c00c8;
    }
    if (cVar1 != '\x03') goto LAB_018c00c8;
  }
  FUN_018bf7c0(auStack_68);
LAB_018c00c8:
  if (local_39 != '\0') {
    (**(code **)(*local_30 + 0x30))(local_30);
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x20);
  (**(code **)(*plVar2 + 0x268))(plVar2,2);
  return;
}

