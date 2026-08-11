/* Ghidra address: 0095f460 */
/* Ghidra symbol: FUN_0095f460 */


void FUN_0095f460(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))
                        (*(longlong **)(param_1 + 0x28),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))(*(longlong **)(param_1 + 0x28));
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x30))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                        (*(longlong **)(param_1 + 0x30),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30));
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x38))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
                        (*(longlong **)(param_1 + 0x38),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))(*(longlong **)(param_1 + 0x38));
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x40))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))
                        (*(longlong **)(param_1 + 0x40),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))(*(longlong **)(param_1 + 0x40));
  return;
}

