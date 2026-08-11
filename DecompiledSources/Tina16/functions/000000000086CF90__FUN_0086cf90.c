/* Ghidra address: 0086cf90 */
/* Ghidra symbol: FUN_0086cf90 */


void FUN_0086cf90(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0086cd70(param_1);
  iVar2 = FUN_0086cd70();
  iVar3 = 0;
  iVar4 = iVar1;
  if (-1 < iVar2 + -1) {
    do {
      iVar4 = iVar3;
      if (param_2 == *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8)) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
      iVar4 = iVar1;
    } while (iVar2 != 0);
  }
  iVar1 = FUN_0086cd70(param_1);
  if (iVar4 < iVar1) {
    iVar1 = FUN_0086cd70(param_1);
    if (iVar4 <= iVar1 + -2) {
      iVar1 = ((iVar1 + -2) - iVar4) + 1;
      do {
        *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(iVar4 + 1) * 8);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar4 = FUN_0086cd70(param_1);
    FUN_00419260(param_1 + 8,&DAT_0086c6e0,1,(longlong)(iVar4 + -1));
  }
  return;
}

