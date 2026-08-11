/* Ghidra address: 014c9ed0 */
/* Ghidra symbol: FUN_014c9ed0 */


int FUN_014c9ed0(longlong param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x2d8);
  iVar2 = 1;
  if (0 < iVar4) {
    do {
      uVar1 = FUN_01d03160(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar2 * 8) + 0x128));
      if (uVar1 == param_2) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar3;
}

