/* Ghidra address: 007e8d80 */
/* Ghidra symbol: FUN_007e8d80 */


longlong * FUN_007e8d80(longlong *param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  FUN_00414ad0(param_1);
  iVar4 = 1;
  while( true ) {
    iVar3 = 0;
    if (*param_1 != 0) {
      iVar3 = *(int *)(*param_1 + -4);
    }
    if (iVar3 < iVar4) break;
    uVar1 = *(ushort *)(*param_1 + -2 + (longlong)iVar4 * 2);
    if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
      if (*(short *)(*param_1 + -2 + (longlong)iVar4 * 2) == 0x26) {
        if (PTR_DAT_02005bd0[0xc] == '\0') {
          bVar2 = false;
        }
        else {
          if (iVar4 < 2) {
            bVar2 = false;
          }
          else {
            iVar3 = 0;
            if (*param_1 != 0) {
              iVar3 = *(int *)(*param_1 + -4);
            }
            bVar2 = 1 < iVar3 - iVar4;
          }
          if (((bVar2) && (*(short *)(*param_1 + -2 + (longlong)(iVar4 + -1) * 2) == 0x28)) &&
             (*(short *)(*param_1 + -2 + (longlong)(iVar4 + 2) * 2) == 0x29)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
        }
        if (bVar2) {
          FUN_00416e20(param_1,iVar4 + -1,4);
        }
        else {
          FUN_00416e20(param_1,iVar4,1);
        }
      }
    }
    else {
      iVar4 = iVar4 + 1;
    }
    iVar4 = iVar4 + 1;
  }
  return param_1;
}

