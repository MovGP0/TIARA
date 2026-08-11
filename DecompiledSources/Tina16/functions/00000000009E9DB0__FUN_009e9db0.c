/* Ghidra address: 009e9db0 */
/* Ghidra symbol: FUN_009e9db0 */


void FUN_009e9db0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if ((int)param_1[7] != 0) {
    (**(code **)(*param_1 + 0x130))(param_1);
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
    *(undefined4 *)(param_1 + 7) = 0;
    (**(code **)(*param_1 + 0x50))(param_1,0);
    (**(code **)(*param_1 + 0x128))(param_1);
  }
  return;
}

