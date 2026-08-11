/* Ghidra address: 01b8c390 */
/* Ghidra symbol: FUN_01b8c390 */


void FUN_01b8c390(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x10))(*(longlong **)(param_1 + 0x3a0));
  (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x10))(*(longlong **)(param_1 + 0x3b8));
  *(undefined1 *)(param_1 + 0x3c2) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x90))(*(longlong **)(param_1 + 0x3c8));
  (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x90))(*(longlong **)(param_1 + 0x3d0));
  (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x10))(*(longlong **)(param_1 + 0x3b0));
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x3a8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x3a8),iVar2);
      uVar1 = FUN_01b817c0(&DAT_01b7f810,1,uVar1);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x3b0),uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x10))(*(longlong **)(param_1 + 0x3a8));
  return;
}

