/* Ghidra address: 01367c40 */
/* Ghidra symbol: FUN_01367c40 */


void FUN_01367c40(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  short local_3c;
  short sStack_3a;
  
  if ((*(char *)(param_1 + 0x18) != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
    plVar3 = (longlong *)FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8));
    FUN_01a9a440(plVar3,0xb);
    uVar1 = FUN_01a99be0(plVar3);
    (**(code **)(*plVar3 + 0xf0))(plVar3,1);
    if (*(char *)(param_1 + 0x21) == '\0') {
      (**(code **)(*plVar3 + 0xe8))(plVar3,0);
    }
    else {
      (**(code **)(*plVar3 + 0xe8))(plVar3,2);
    }
    if (1 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x10)) {
      uVar4 = FUN_004aeac0(*(longlong *)(param_1 + 0x28),0);
      uVar2 = FUN_00b959c0(uVar4);
      local_3c = (short)uVar2;
      sStack_3a = (short)((uint)uVar2 >> 0x10);
      (**(code **)(*plVar3 + 0x40))(plVar3,(longlong)local_3c,(longlong)sStack_3a);
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1;
      iVar5 = 1;
      if (0 < iVar6) {
        do {
          uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar5);
          uVar2 = FUN_00b959c0(uVar4);
          local_3c = (short)uVar2;
          sStack_3a = (short)((uint)uVar2 >> 0x10);
          (**(code **)(*plVar3 + 0x48))(plVar3,(longlong)local_3c,(longlong)sStack_3a);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    (**(code **)(*plVar3 + 0xf0))(plVar3,uVar1);
    (**(code **)(*plVar3 + 0xe8))(plVar3,0);
  }
  return;
}

