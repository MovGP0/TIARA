/* Ghidra address: 00a71700 */
/* Ghidra symbol: FUN_00a71700 */


uint FUN_00a71700(undefined8 param_1,undefined8 param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  longlong local_38;
  uint local_2c [3];
  
  local_38 = 0;
  *param_5 = 0;
  param_5[1] = 0;
  local_2c[0] = 0;
  uVar2 = local_2c[0];
  if ((0 < param_4) && (param_3 != 0)) {
    if (*PTR_DAT_02004eb0 == '\0') {
      FUN_00419260(&local_38,&DAT_00a716c8,1,(longlong)(int)param_3);
      iVar1 = thunk_FUN_04193722(param_1,param_2,param_3,param_4,local_2c,local_38,param_5);
      uVar2 = local_2c[0];
      if (iVar1 != 0) {
        if ((int)local_2c[0] < 1) {
          *param_5 = 0;
        }
        else {
          *param_5 = *(int *)(local_38 + (longlong)(int)(local_2c[0] - 1) * 4);
        }
      }
    }
    else {
      iVar1 = 0;
      uVar2 = param_3;
      if (-1 < (int)param_3) {
        do {
          thunk_FUN_0418ae1a(param_1,param_2,uVar2,param_5);
          if (*param_5 < param_4) {
            iVar1 = uVar2 + 1;
          }
          else {
            param_3 = uVar2 - 1;
          }
        } while ((*param_5 != param_4) && (uVar2 = iVar1 + param_3 >> 1, iVar1 <= (int)param_3));
      }
    }
  }
  local_2c[0] = uVar2;
  FUN_00419430(&local_38,&DAT_00a716c8);
  return local_2c[0];
}

