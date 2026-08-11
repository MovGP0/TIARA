/* Ghidra address: 013326d0 */
/* Ghidra symbol: FUN_013326d0 */


void FUN_013326d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x30))
                        (*(longlong **)(param_1 + 0x138),iVar3);
      uVar4 = FUN_0132daf0(param_2,iVar3);
      *(undefined8 *)(lVar2 + 0x30) = uVar4;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

