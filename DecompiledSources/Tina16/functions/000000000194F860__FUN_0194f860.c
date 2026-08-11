/* Ghidra address: 0194f860 */
/* Ghidra symbol: FUN_0194f860 */


void FUN_0194f860(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_00414ad0(param_3 + 0xf8,*(undefined8 *)(param_2 + 0xf8));
  *(undefined8 *)(param_3 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  iVar1 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x30))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x20))
                        (*(longlong **)(param_2 + 0x80),iVar4);
      uVar3 = (**(code **)(**(longlong **)(param_3 + 0x80) + 0x20))
                        (*(longlong **)(param_3 + 0x80),iVar4);
      FUN_0194f860(param_1,uVar2,uVar3);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

