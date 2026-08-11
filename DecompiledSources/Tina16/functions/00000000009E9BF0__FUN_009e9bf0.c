/* Ghidra address: 009e9bf0 */
/* Ghidra symbol: FUN_009e9bf0 */


void FUN_009e9bf0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if ((char)param_1[0xd] != '\0') {
    iVar3 = (int)param_1[7];
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = (**(code **)(*param_1 + 0x30))(param_1,iVar2);
        if (lVar1 != 0) {
          FUN_00410f20(lVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_009e6fc0(param_1,param_2 & 0xfffffffc);
  *(undefined4 *)(param_1 + 7) = 0;
  (**(code **)(*param_1 + 0x50))(param_1,0);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

