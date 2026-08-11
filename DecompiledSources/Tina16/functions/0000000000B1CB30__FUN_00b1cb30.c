/* Ghidra address: 00b1cb30 */
/* Ghidra symbol: FUN_00b1cb30 */


undefined8 FUN_00b1cb30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [6];
  
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_50[0] = 0;
  FUN_004144d0(param_2);
  dVar4 = (double)FUN_0040af40(param_3);
  if (dVar4 != 0.0) {
    iVar1 = FUN_00417250(&DAT_00b1cdb8,param_4,1);
    if (iVar1 == 0) {
      FUN_00416880(local_50,param_4);
      iVar1 = FUN_0043fc00(local_50[0]);
    }
    else {
      iVar1 = 2;
      iVar2 = FUN_00415a60(param_4,&DAT_00b1cdb8);
      if (iVar2 == 0) {
        iVar2 = 9;
      }
      else {
        iVar2 = FUN_00415a60(param_4,&DAT_00b1cdc8);
        if (iVar2 == 0) {
          iVar2 = 99;
        }
        else {
          iVar2 = FUN_00415a60(param_4,&DAT_00b1cdd8);
          if (iVar2 == 0) {
            iVar2 = 999;
          }
          else {
            iVar2 = 9;
          }
        }
      }
      dVar6 = dVar4 * 2.0;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        lVar3 = FUN_0040c770(dVar4 * (double)iVar2);
        dVar5 = (double)FUN_0040c850(dVar4 - (double)lVar3 / (double)iVar2);
        if (dVar5 <= dVar6) {
          dVar6 = dVar5;
          iVar1 = iVar2;
        }
      }
    }
    iVar2 = FUN_0040c770(dVar4 * (double)iVar1);
    if (iVar2 == 0) {
      FUN_004144d0(param_2);
    }
    else {
      FUN_0043f750(&local_58,iVar2);
      FUN_00415dd0(&local_60,local_58,0);
      FUN_0043f750(&local_68,iVar1);
      FUN_00415dd0(&local_70,local_68,0);
      FUN_00415980(param_2,3,local_60,&DAT_00b1cde8,local_70);
    }
  }
  FUN_004144d0(&local_70);
  FUN_00414480(&local_68);
  FUN_004144d0(&local_60);
  FUN_00414560(&local_58,2);
  return param_2;
}

