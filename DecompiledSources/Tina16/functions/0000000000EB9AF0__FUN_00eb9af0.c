/* Ghidra address: 00eb9af0 */
/* Ghidra symbol: FUN_00eb9af0 */


void FUN_00eb9af0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))(*(longlong **)(param_1 + 0x10));
  return;
}

