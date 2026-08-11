/* Ghidra address: 01ceac00 */
/* Ghidra symbol: FUN_01ceac00 */


void FUN_01ceac00(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),iVar3 + -1);
      FUN_01ab6ac0(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

