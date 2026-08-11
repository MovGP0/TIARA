/* Ghidra address: 013335a0 */
/* Ghidra symbol: FUN_013335a0 */


undefined8 FUN_013335a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0xf1) = 0;
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x30))
                          (*(longlong **)(param_1 + 0x130),iVar3);
        uVar2 = FUN_004113f0(uVar2,&DAT_0132f938);
        FUN_00410f20(uVar2);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x90))(*(longlong **)(param_1 + 0x130));
  }
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x90))(*(longlong **)(param_1 + 0x138));
  FUN_01330ba0(*(undefined8 *)(param_1 + 0x140));
  *(undefined2 *)(param_1 + 0x18) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = 0;
  FUN_00410f20(uVar2);
  return 1;
}

