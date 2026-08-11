/* Ghidra address: 00845780 */
/* Ghidra symbol: FUN_00845780 */


void FUN_00845780(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  bool bVar4;
  uint in_stack_ffffffffffffffd8;
  
  if (*(byte *)(param_1 + 0x3e) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_1 + 0x3e) & 0x1f) &
            10U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if (*(int *)(*(longlong *)(param_1 + 0xd0) + 0x4a4) == 1) {
      iVar1 = FUN_00848220(*(undefined8 *)(param_1 + 0xd0),0);
      iVar2 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0xd0));
      iVar1 = iVar1 - iVar2;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
      thunk_FUN_04182059(uVar3,0,0,iVar1,0xffffffff);
    }
    else {
      FUN_008456d0(param_1,param_1 + 0x48,param_1 + 0x40,*(longlong *)(param_1 + 0xd0) + 0x4e8,
                   in_stack_ffffffffffffffd8 & 0xffff0000,
                   *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x4bc));
    }
  }
  return;
}

