/* Ghidra address: 00b17e20 */
/* Ghidra symbol: FUN_00b17e20 */


void FUN_00b17e20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))(*(longlong **)(param_1 + 0x10),0);
    if (iVar1 != 0) {
      uVar2 = FUN_00b17000(&PTR_FUN_00b16d88,1,7);
      FUN_004134c0(uVar2);
    }
  }
  return;
}

