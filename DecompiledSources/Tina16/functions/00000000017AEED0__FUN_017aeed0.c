/* Ghidra address: 017aeed0 */
/* Ghidra symbol: FUN_017aeed0 */


void FUN_017aeed0(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 1;
  while( true ) {
    iVar1 = 0;
    if (*param_1 != 0) {
      iVar1 = *(int *)(*param_1 + -4);
    }
    if (iVar1 < (int)uVar2) break;
    if (*(short *)(*param_1 + -2 + uVar2 * 2) == 0x7e) {
      FUN_00416e20(param_1,uVar2,1);
    }
    else {
      uVar2 = (ulonglong)(byte)((char)uVar2 + 1);
    }
  }
  return;
}

