/* Ghidra address: 00dbf980 */
/* Ghidra symbol: FUN_00dbf980 */


void FUN_00dbf980(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  iVar4 = *(int *)(lVar1 + 0x708);
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      uVar2 = FUN_017dcc40(param_1,*(longlong *)(lVar1 + 0x700) + -8 + (longlong)iVar3 * 8,param_3,0
                          );
      *(undefined8 *)(*(longlong *)(lVar1 + 0x6f8) + -8 + (longlong)iVar3 * 8) = uVar2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

