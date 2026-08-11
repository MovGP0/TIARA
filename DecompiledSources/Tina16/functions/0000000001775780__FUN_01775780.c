/* Ghidra address: 01775780 */
/* Ghidra symbol: FUN_01775780 */


void FUN_01775780(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_01769f90(param_1,param_2);
  FUN_00414ad0(param_2 + 0x130,*(undefined8 *)(param_1 + 0x130));
  FUN_00414ad0(param_2 + 0x138,*(undefined8 *)(param_1 + 0x138));
  FUN_00414ad0(param_2 + 0x140,*(undefined8 *)(param_1 + 0x140));
  (**(code **)(**(longlong **)(param_2 + 0xb0) + 0x90))(*(longlong **)(param_2 + 0xb0));
  (**(code **)(**(longlong **)(param_2 + 0xb0) + 0x10))
            (*(longlong **)(param_2 + 0xb0),*(undefined8 *)(param_1 + 0xb0));
  (**(code **)(**(longlong **)(param_2 + 200) + 0x90))(*(longlong **)(param_2 + 200));
  (**(code **)(**(longlong **)(param_2 + 200) + 0x10))
            (*(longlong **)(param_2 + 200),*(undefined8 *)(param_1 + 200));
  (**(code **)(**(longlong **)(param_2 + 0xd0) + 0x90))(*(longlong **)(param_2 + 0xd0));
  (**(code **)(**(longlong **)(param_2 + 0xd0) + 0x10))
            (*(longlong **)(param_2 + 0xd0),*(undefined8 *)(param_1 + 0xd0));
  (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x90))(*(longlong **)(param_2 + 0xd8));
  (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x10))
            (*(longlong **)(param_2 + 0xd8),*(undefined8 *)(param_1 + 0xd8));
  (**(code **)(**(longlong **)(param_2 + 0xe8) + 0x90))(*(longlong **)(param_2 + 0xe8));
  (**(code **)(**(longlong **)(param_2 + 0xe8) + 0x10))
            (*(longlong **)(param_2 + 0xe8),*(undefined8 *)(param_1 + 0xe8));
  (**(code **)(**(longlong **)(param_2 + 0xf0) + 0x90))(*(longlong **)(param_2 + 0xf0));
  (**(code **)(**(longlong **)(param_2 + 0xf0) + 0x10))
            (*(longlong **)(param_2 + 0xf0),*(undefined8 *)(param_1 + 0xf0));
  FUN_010afec0(*(undefined8 *)(param_2 + 0x110));
  FUN_010b0ed0(*(undefined8 *)(param_2 + 0x110),*(undefined8 *)(param_1 + 0x110));
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_2 + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_1 + 0x108);
  *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_1 + 0x128);
  FUN_00414ad0(param_2 + 0x148,*(undefined8 *)(param_1 + 0x148));
  FUN_00414ad0(param_2 + 0x150,*(undefined8 *)(param_1 + 0x150));
  (**(code **)(**(longlong **)(param_2 + 0x170) + 0x10))(*(longlong **)(param_2 + 0x170));
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x170) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x170),iVar2);
      uVar1 = FUN_0153c310(&DAT_0153c0f8,1,uVar1);
      FUN_004ae7e0(*(undefined8 *)(param_2 + 0x170),uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004b6dc0(*(undefined8 *)(param_2 + 0xf8),0);
  (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x58))
            (*(longlong **)(param_1 + 0xf8),*(undefined8 *)(param_2 + 0xf8));
  FUN_010b3ec0(*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_1 + 0x118));
  (**(code **)(**(longlong **)(param_2 + 0x1a0) + 0x90))(*(longlong **)(param_2 + 0x1a0));
  (**(code **)(**(longlong **)(param_2 + 0x1a0) + 0x10))
            (*(longlong **)(param_2 + 0x1a0),*(undefined8 *)(param_1 + 0x1a0));
  return;
}

