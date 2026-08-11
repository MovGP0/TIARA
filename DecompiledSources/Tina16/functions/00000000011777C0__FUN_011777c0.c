/* Ghidra address: 011777c0 */
/* Ghidra symbol: FUN_011777c0 */


int FUN_011777c0(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == '\x01') {
    (**(code **)(*param_2 + 0xf8))
              (param_2,0,0,*(int *)PTR_DAT_02002380 + -1,*(int *)PTR_DAT_02002270 + -1);
    iVar2 = *(int *)(*param_1 + 0x10);
    iVar1 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*param_2 + 0xf8))
                  (param_2,*(int *)*param_1 - iVar1,*(int *)(*param_1 + 4) - iVar1,
                   *(int *)(*param_1 + 8) + iVar1,*(int *)(*param_1 + 0xc) + iVar1);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  iVar2 = FUN_011778a0(param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 * 10 + 1;
  }
  return iVar2;
}

