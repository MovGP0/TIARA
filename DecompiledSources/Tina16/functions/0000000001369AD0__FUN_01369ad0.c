/* Ghidra address: 01369ad0 */
/* Ghidra symbol: FUN_01369ad0 */


void FUN_01369ad0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  if ((*(char *)(param_1 + 0x28) != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
    plVar2 = (longlong *)FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8));
    FUN_01a9a440(plVar2,0x14);
    uVar1 = FUN_01a99be0(plVar2);
    (**(code **)(*plVar2 + 0xf0))(plVar2,1);
    (**(code **)(*plVar2 + 0xe0))(plVar2,2);
    (**(code **)(*plVar2 + 0x58))
              (plVar2,*(int *)(param_1 + 0x18) + -5,*(int *)(param_1 + 0x1c) + -5,
               *(int *)(param_1 + 0x18) + 5,*(int *)(param_1 + 0x1c) + 5);
    (**(code **)(*plVar2 + 0x40))
              (plVar2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    (**(code **)(*plVar2 + 0x48))
              (plVar2,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    (**(code **)(*plVar2 + 0xe0))(plVar2,0);
    (**(code **)(*plVar2 + 0xf0))(plVar2,uVar1);
  }
  return;
}

