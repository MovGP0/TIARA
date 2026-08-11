/* Ghidra address: 01369350 */
/* Ghidra symbol: FUN_01369350 */


void FUN_01369350(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((*(char *)(param_1 + 0x18) != '\0') && (*(char *)(param_1 + 0x3d) != '\0')) &&
     (1 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x10))) {
    uVar3 = FUN_004aeac0(*(longlong *)(param_1 + 0x28),
                         *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1);
    uVar4 = FUN_004aeac0(*(longlong *)(param_1 + 0x28),
                         *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -2);
    uVar1 = FUN_00b959c0(uVar3);
    uVar2 = FUN_00b959c0(uVar4);
    FUN_01367da0(param_1,uVar1,uVar2);
  }
  return;
}

