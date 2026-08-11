/* Ghidra address: 018c17e0 */
/* Ghidra symbol: FUN_018c17e0 */


void FUN_018c17e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34;
  
  local_40 = auStack_68;
  puVar3 = auStack_68;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x108) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xa8) + 0x108))
              (*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x110),
               *(undefined8 *)(param_1 + 0xa8));
    puVar3 = local_40;
  }
  local_40 = puVar3;
  cVar4 = FUN_0197b6e0(*(undefined8 *)(param_1 + 0xa8));
  if (cVar4 != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20) + 0x210);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x298))(plVar1);
      FUN_0064e770(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20) + 0x210));
    }
    if (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xc1) == '\0') {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20);
      if (*(char *)(*(longlong *)(lVar2 + 0x1a8) + 0x20) == '\0') {
        if (*(longlong *)(lVar2 + 0x408) != 0) {
          (**(code **)(lVar2 + 0x408))(*(undefined8 *)(lVar2 + 0x410),lVar2,1,0);
        }
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x20);
      (**(code **)(*plVar1 + 600))(plVar1,1);
    }
    iVar5 = (**(code **)**(undefined8 **)(param_1 + 0xa0))();
    local_34 = 0;
    if (-1 < iVar5 + -1) {
      do {
        FUN_018c1220(param_1,local_34);
        if (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20) + 0x1a8) +
                     0x20) == '\0') {
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        }
        local_34 = local_34 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20) + 0x210);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
      FUN_0064e770(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20) + 0x210));
    }
    if (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xc1) == '\0') {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20);
      if (*(char *)(*(longlong *)(lVar2 + 0x1a8) + 0x20) == '\0') {
        if (*(longlong *)(lVar2 + 0x428) != 0) {
          (**(code **)(lVar2 + 0x428))(*(undefined8 *)(lVar2 + 0x430),lVar2,1,0);
        }
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x20);
      (**(code **)(*plVar1 + 0x268))(plVar1,1);
    }
    FUN_0197b6a0(*(undefined8 *)(param_1 + 0xa8));
  }
  return;
}

