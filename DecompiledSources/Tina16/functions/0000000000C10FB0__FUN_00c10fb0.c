/* Ghidra address: 00c10fb0 */
/* Ghidra symbol: FUN_00c10fb0 */


undefined8 FUN_00c10fb0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x5f8) == 0) {
    if (*(char *)(param_1 + 0x498) == '\0') {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8));
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8));
      uVar3 = FUN_00c11030(param_1,uVar1);
    }
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x28))
                        (*(longlong **)(param_1 + 0x5f8));
    }
  }
  return uVar3;
}

