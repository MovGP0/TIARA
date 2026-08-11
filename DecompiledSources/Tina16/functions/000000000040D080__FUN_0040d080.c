/* Ghidra address: 0040d080 */
/* Ghidra symbol: FUN_0040d080 */


ulonglong FUN_0040d080(undefined8 *param_1,undefined8 param_2,int param_3,int *param_4,uint param_5,
                      code *param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint local_2c [3];
  
  if ((*(ushort *)(param_1 + 1) & param_5) == param_5) {
    iVar1 = (*param_6)(*param_1,param_2,param_3 * *(int *)((longlong)param_1 + 0xc),local_2c,0);
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_03ce33a6();
      FUN_00409930(uVar2);
      uVar3 = 0;
    }
    else {
      uVar3 = (ulonglong)local_2c[0] / (ulonglong)*(uint *)((longlong)param_1 + 0xc);
      if (param_4 == (int *)0x0) {
        if ((int)uVar3 != param_3) {
          FUN_00409930(param_7,(ulonglong)local_2c[0] %
                               (ulonglong)*(uint *)((longlong)param_1 + 0xc));
          uVar3 = 0;
        }
      }
      else {
        *param_4 = (int)uVar3;
      }
    }
  }
  else {
    FUN_00409930(0x67);
    uVar3 = 0;
  }
  return uVar3;
}

