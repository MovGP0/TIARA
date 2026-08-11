/* Ghidra address: 01331bf0 */
/* Ghidra symbol: FUN_01331bf0 */


void FUN_01331bf0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
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
  return;
}

