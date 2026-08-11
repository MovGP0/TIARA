/* Ghidra address: 00b636e0 */
/* Ghidra symbol: FUN_00b636e0 */


void FUN_00b636e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x50);
  puVar3 = auStack_58;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x10);
    local_34 = iVar1 + -1;
    local_1c = 0;
    puVar3 = auStack_58;
    if (-1 < local_34) {
      do {
        local_30 = puVar3;
        local_34 = iVar1;
        plVar4 = (longlong *)
                 FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x50),local_1c);
        (**(code **)(*plVar4 + -0x20))(plVar4,1);
        local_1c = local_1c + 1;
        local_34 = local_34 + -1;
        iVar1 = local_34;
        puVar3 = local_30;
      } while (local_34 != 0);
    }
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x50);
    (**(code **)(*plVar4 + -0x20))(plVar4,1);
    puVar3 = local_30;
  }
  local_30 = puVar3;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x58);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + -0x20))(plVar4,1);
  }
  return;
}

