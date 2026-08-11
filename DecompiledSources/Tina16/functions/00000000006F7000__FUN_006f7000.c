/* Ghidra address: 006f7000 */
/* Ghidra symbol: FUN_006f7000 */


void FUN_006f7000(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar2 = FUN_006f6fe0(param_1);
    iVar1 = (**(code **)(*param_1 + 0x2b0))();
    if (-1 < iVar1 + -1) {
      do {
        if (lVar2 != 0) {
          FUN_006ef2d0(lVar2,3,0);
          lVar2 = FUN_006f71f0(param_1,lVar2,4,0x10);
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    FUN_006ef2d0(param_2,3,1);
  }
  return;
}

