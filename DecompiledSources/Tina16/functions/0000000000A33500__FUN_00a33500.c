/* Ghidra address: 00a33500 */
/* Ghidra symbol: FUN_00a33500 */


undefined1
FUN_00a33500(undefined8 param_1,int param_2,undefined4 param_3,longlong *param_4,int *param_5,
            undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_171;
  undefined8 local_170 [2];
  undefined1 local_160 [256];
  undefined8 local_60;
  int local_58;
  undefined1 *local_50;
  int local_48;
  uint local_44;
  undefined8 local_40;
  
  local_170[0] = 0;
  local_171 = 1;
  *param_5 = 0;
  FUN_0040d200(&local_60,0x58,0);
  FUN_006293e0(&local_60,param_3,*(undefined8 *)PTR_PTR_020023e0,0x58);
  local_60 = param_1;
  local_58 = param_2;
  do {
    while( true ) {
      if (local_58 == 0) {
        FUN_006297a0(&local_60);
        goto LAB_00a3368b;
      }
      if (local_48 == 0) {
        local_50 = local_160;
        local_48 = 0x100;
      }
      iVar1 = FUN_0062a930(&local_60,4);
      if ((iVar1 != 1) && (iVar1 != 0)) break;
      *param_5 = *param_5 + local_44;
      if (*param_4 == 0) {
        lVar2 = FUN_004095c0((longlong)*param_5);
        *param_4 = lVar2;
      }
      else {
        FUN_00409620(param_4,(longlong)*param_5);
      }
      FUN_00409a70(local_160,(*param_4 + (longlong)*param_5) - (ulonglong)local_44);
    }
  } while (-1 < iVar1);
  local_171 = 0;
  FUN_00415430(local_170,local_40,0);
  FUN_00416880(param_6,local_170[0]);
  FUN_006297a0(&local_60);
LAB_00a3368b:
  FUN_004144d0(local_170);
  return local_171;
}

