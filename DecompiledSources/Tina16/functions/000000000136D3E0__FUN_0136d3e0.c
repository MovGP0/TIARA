/* Ghidra address: 0136d3e0 */
/* Ghidra symbol: FUN_0136d3e0 */


void FUN_0136d3e0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (((*(longlong *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x24) != '\0')) &&
     (*(longlong *)(param_1 + 0x10) != 0)) {
    plVar2 = (longlong *)FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8));
    FUN_01a9a440(plVar2,0xb);
    uVar1 = FUN_01a99be0(plVar2);
    (**(code **)(*plVar2 + 0xf0))(plVar2,1);
    (**(code **)(*plVar2 + 0xe8))(plVar2,0);
    if (1 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
      puVar3 = (undefined4 *)FUN_004aeac0(*(longlong *)(param_1 + 0x18),0);
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),0);
      (**(code **)(*plVar2 + 0x40))(plVar2,*puVar3,*(undefined4 *)(lVar4 + 4));
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + -1;
      iVar5 = 1;
      if (0 < iVar6) {
        do {
          puVar3 = (undefined4 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar5);
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar5);
          (**(code **)(*plVar2 + 0x48))(plVar2,*puVar3,*(undefined4 *)(lVar4 + 4));
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    (**(code **)(*plVar2 + 0xf0))(plVar2,uVar1);
    (**(code **)(*plVar2 + 0xe8))(plVar2,0);
  }
  return;
}

