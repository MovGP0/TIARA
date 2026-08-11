/* Ghidra address: 0135ac00 */
/* Ghidra symbol: FUN_0135ac00 */


void FUN_0135ac00(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar3);
      FUN_004095f0(uVar2);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),iVar3,0);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8));
  FUN_0135a470(DAT_02108120);
  return;
}

