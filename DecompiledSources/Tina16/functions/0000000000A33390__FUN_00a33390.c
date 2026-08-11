/* Ghidra address: 00a33390 */
/* Ghidra symbol: FUN_00a33390 */


undefined1
FUN_00a33390(undefined8 param_1,undefined4 param_2,longlong *param_3,uint *param_4,
            undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_81;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  int local_58;
  uint local_54;
  undefined8 local_50;
  
  local_80[0] = 0;
  local_81 = 1;
  *param_4 = 0;
  FUN_0040d200(&local_70,0x58,0,param_4,param_1);
  FUN_0062d9a0(&local_70,*(undefined8 *)PTR_PTR_020023e0,0x58);
  local_70 = param_1;
  local_68 = param_2;
  while( true ) {
    if (local_58 == 0) {
      *param_4 = *param_4 + 0x100;
      if (*param_3 == 0) {
        lVar2 = FUN_004095c0((longlong)(int)*param_4);
        *param_3 = lVar2;
      }
      else {
        FUN_00409620(param_3,(longlong)(int)*param_4);
      }
      local_60 = *param_3 + (ulonglong)local_54;
      local_58 = 0x100;
    }
    iVar1 = FUN_0062db10(&local_70,0);
    if (iVar1 == 1) {
      *param_4 = local_54;
      FUN_00409620(param_3);
    }
    if (iVar1 < 0) break;
    if (iVar1 == 1) {
      FUN_00630390(&local_70);
LAB_00a334c5:
      FUN_004144d0(local_80);
      return local_81;
    }
  }
  local_81 = 0;
  FUN_00415430(local_80,local_50,0);
  FUN_00416880(param_5,local_80[0]);
  FUN_00630390(&local_70);
  goto LAB_00a334c5;
}

