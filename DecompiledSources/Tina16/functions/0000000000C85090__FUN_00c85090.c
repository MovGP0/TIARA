/* Ghidra address: 00c85090 */
/* Ghidra symbol: FUN_00c85090 */


void FUN_00c85090(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = FUN_00c83020();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_00c83030(param_1,iVar4);
      iVar2 = FUN_004170c0(L"id_component",*(undefined8 *)(lVar3 + 0x18),1);
      if (0 < iVar2) {
        FUN_00414480(lVar3 + 0x20);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x90))(*(longlong **)(param_1 + 0x18));
  return;
}

