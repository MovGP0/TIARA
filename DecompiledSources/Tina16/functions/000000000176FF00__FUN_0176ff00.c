/* Ghidra address: 0176ff00 */
/* Ghidra symbol: FUN_0176ff00 */


void FUN_0176ff00(longlong param_1,char param_2,undefined2 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 *local_38;
  undefined8 *local_30 [2];
  longlong local_20;
  
  local_38 = (undefined8 *)0x0;
  local_30[0] = (undefined8 *)0x0;
  if (param_2 == '\0') goto LAB_0177059d;
  if ((*(char *)(param_1 + 0x111) == '\0') ||
     (((*(char *)(param_1 + 0x112) != '\0' && (param_2 != *(char *)(param_1 + 0x130))) ||
      (*(longlong *)(param_1 + 8) == 0)))) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*puVar1)(puVar1);
      FUN_00418590(uVar5,&DAT_01984da0);
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x120) + 0x10);
      iVar7 = 0;
      if (-1 < iVar8 + -1) {
        do {
          lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x120),iVar7);
          *(undefined1 *)(*(longlong *)(lVar6 + 0x1a8) + 0x111) = 0;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    cVar3 = FUN_01995310(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x38),&local_20);
    if (cVar3 == '\0') {
LAB_0177010e:
      bVar9 = false;
    }
    else {
      cVar3 = FUN_0176fd40(param_1,*(undefined8 *)(local_20 + 0x1a8));
      if (cVar3 == '\0') goto LAB_0177010e;
      (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))(*(longlong **)(param_1 + 0xb0),local_30)
      ;
      puVar1 = local_30[0];
      plVar2 = *(longlong **)(*(longlong *)(local_20 + 0x1a8) + 0xb0);
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      if (puVar1 == local_38) {
        bVar9 = true;
      }
      else if ((puVar1 == (undefined8 *)0x0) || (local_38 == (undefined8 *)0x0)) {
        bVar9 = false;
      }
      else {
        iVar8 = FUN_0043e420(puVar1,local_38);
        bVar9 = iVar8 == 0;
      }
    }
    if ((bVar9) && (*(char *)(param_1 + 0x116) == '\0')) {
      *PTR_DAT_020044b8 = 0;
      lVar6 = FUN_0198d3a0(*(undefined8 *)(*(longlong *)(local_20 + 0x1a8) + 8),1,0);
      *(longlong *)(param_1 + 8) = lVar6;
      *(undefined1 *)(lVar6 + 0x490) = 1;
      *PTR_DAT_020044b8 = 0;
      FUN_01995400(*(undefined8 *)(param_1 + 8));
      uVar4 = FUN_019954a0(*(undefined8 *)(*(longlong *)(local_20 + 0x1a8) + 8));
      FUN_01995490(*(undefined8 *)(param_1 + 8),uVar4);
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x90))(*(longlong **)(param_1 + 0xd0));
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))
                (*(longlong **)(param_1 + 0xd0),
                 *(undefined8 *)(*(longlong *)(local_20 + 0x1a8) + 0xd0));
      *(undefined1 *)(param_1 + 0x112) = *(undefined1 *)(*(longlong *)(local_20 + 0x1a8) + 0x112);
      *(undefined1 *)(param_1 + 0x113) = *(undefined1 *)(*(longlong *)(local_20 + 0x1a8) + 0x113);
      *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)(*(longlong *)(local_20 + 0x1a8) + 0x114);
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(*(longlong *)(local_20 + 0x1a8) + 100);
      FUN_0199b3c0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                   *(undefined8 *)(param_1 + 0x18));
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(local_20 + 0x1a8) + 0x120),
                   *(undefined8 *)(param_1 + 0x10));
      (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))
                (*(longlong **)(param_1 + 0xe0),
                 *(undefined8 *)(*(longlong *)(local_20 + 0x1a8) + 0xe0));
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))
                (*(longlong **)(param_1 + 0xe8),
                 *(undefined8 *)(*(longlong *)(local_20 + 0x1a8) + 0xe8));
      FUN_0176ce10(param_1);
      *(longlong *)(param_1 + 0x128) = local_20;
    }
    else {
      lVar6 = FUN_014e4f70(0,&PTR_FUN_014db5f8,1);
      *(longlong *)(param_1 + 8) = lVar6;
      *(undefined1 *)(lVar6 + 0x490) = 1;
      FUN_00ee4600(0,*(undefined8 *)(param_1 + 0xb0),lVar6,*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
                   *(undefined4 *)(param_1 + 100),*(undefined8 *)(param_1 + 0xf8),
                   *(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x110),
                   *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xd8),param_2,
                   *(undefined1 *)(param_1 + 0x116),*(undefined8 *)(param_1 + 0xf0),0,
                   *(undefined8 *)(param_1 + 0xd0),param_1 + 0x112,param_1 + 0x113,param_1 + 0x114);
      if ((*(char *)(param_1 + 0x116) == '\0') || (param_2 == '\x06')) {
        (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x90))(*(longlong **)(param_1 + 0xe0));
        (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x88))
                  (*(longlong **)(param_1 + 0xe0),
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xe70) + 0xa50));
        (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x90))(*(longlong **)(param_1 + 0xe8));
        FUN_016cedb0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xe70),
                     *(undefined8 *)(param_1 + 0xe8));
      }
    }
    if (param_2 != '\x0f') {
      *(undefined1 *)(param_1 + 0x111) = 1;
    }
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 100);
  }
  else {
    FUN_0199b3c0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
    FUN_0176ce10(param_1);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 100);
  }
  *(char *)(param_1 + 0x130) = param_2;
  FUN_0176a3c0(param_1,*(undefined8 *)(param_1 + 0x10),param_3);
LAB_0177059d:
  FUN_00414560(&local_38,2);
  return;
}

