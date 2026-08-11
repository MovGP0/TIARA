/* Ghidra address: 0180d9f0 */
/* Ghidra symbol: FUN_0180d9f0 */


undefined8
FUN_0180d9f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int *param_5,
            int *param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  FUN_00414520(param_1);
  *param_6 = *param_5;
  bVar1 = true;
  bVar2 = true;
  iVar5 = 0;
  iVar3 = FUN_00416420(param_2,0);
  if (iVar3 != 0) {
    iVar3 = FUN_00414cc0(param_2);
    if (*param_6 <= iVar3) {
      *param_6 = *param_6 + -1;
      do {
        *param_6 = *param_6 + 1;
        if ((bool)(bVar2 & bVar1)) {
          uVar4 = FUN_00414cc0(param_3);
          FUN_00416430(local_30,param_2,*param_6,uVar4);
          iVar3 = FUN_00416420(local_30[0],param_3);
          if (iVar3 == 0) {
            if (iVar5 == 0) {
              *param_5 = *param_6;
            }
            iVar5 = iVar5 + 1;
          }
          else {
            uVar4 = FUN_00414cc0(param_4);
            FUN_00416430(&local_38,param_2,*param_6,uVar4);
            iVar3 = FUN_00416420(local_38,param_4);
            if (iVar3 == 0) {
              iVar5 = iVar5 + -1;
            }
          }
        }
        if ((bVar1) && (*(short *)(param_2 + -2 + (longlong)*param_6 * 2) == 0x22)) {
          bVar2 = !bVar2;
        }
        if ((bVar2) && (*(short *)(param_2 + -2 + (longlong)*param_6 * 2) == 0x27)) {
          bVar1 = !bVar1;
        }
        if (iVar5 == 0) break;
        iVar3 = FUN_00414cc0(param_2);
      } while (*param_6 < iVar3);
      iVar3 = FUN_00414cc0(param_3);
      iVar5 = FUN_00414cc0(param_3);
      FUN_00416430(param_1,param_2,*param_5 + iVar3,(*param_6 - *param_5) - iVar5);
      if (*param_5 != *param_6) {
        iVar3 = FUN_00414cc0(param_4);
        *param_6 = *param_6 + iVar3 + -1;
      }
    }
  }
  FUN_004145c0(&local_38,2);
  return param_1;
}

