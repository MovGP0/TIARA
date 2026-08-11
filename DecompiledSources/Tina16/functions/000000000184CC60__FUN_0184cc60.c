/* Ghidra address: 0184cc60 */
/* Ghidra symbol: FUN_0184cc60 */


void FUN_0184cc60(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_0184ccf0(param_1);
  (**(code **)**(undefined8 **)(param_1 + 0x128))(*(undefined8 **)(param_1 + 0x128));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x30))
                        (*(longlong **)(param_1 + 0x140),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x90))(*(longlong **)(param_1 + 0x140));
  return;
}

