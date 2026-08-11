/* Ghidra address: 01b48d40 */
/* Ghidra symbol: FUN_01b48d40 */


undefined8 FUN_01b48d40(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res20;
  undefined8 local_40 [2];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_40[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414520(param_2);
  if (-1 < param_3) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,0);
    if (param_3 < iVar1) {
      FUN_01d3a8c0(*(undefined8 *)PTR_DAT_020036c8,&local_28,(int)param_1[4] + param_3,local_res20);
      FUN_00b0d1f0(local_40,local_28,&DAT_01b4903c,&DAT_01b49044);
      FUN_00414be0(&local_28,local_40[0]);
      iVar1 = FUN_00417170(&DAT_01b49044,local_28,1);
      uVar2 = 0;
      if (local_28 != 0) {
        uVar2 = *(uint *)(local_28 + -4) >> 1;
      }
      FUN_00416430(&local_30,local_28,iVar1 + 1,uVar2);
      iVar1 = FUN_00417170(&DAT_01b4904c,local_30,1);
      if (iVar1 == 0) {
        FUN_00414be0(&local_20,local_30);
      }
      else {
        iVar1 = FUN_00417170(&DAT_01b49044,local_28,1);
        iVar3 = FUN_00417170(&DAT_01b4904c,local_28,1);
        iVar4 = FUN_00417170(&DAT_01b49044,local_28,1);
        FUN_00416430(&local_28,local_28,iVar1 + 1,(iVar3 - iVar4) + -1);
        iVar1 = FUN_00417170(&DAT_01b4904c,local_30,1);
        uVar2 = 0;
        if (local_30 != 0) {
          uVar2 = *(uint *)(local_30 + -4) >> 1;
        }
        FUN_00416430(&local_20,local_30,iVar1 + 1,uVar2);
        iVar1 = FUN_00417170(&DAT_01b49054,local_20,1);
        if (iVar1 == 0) {
          iVar1 = FUN_00417170(&DAT_01b4905c,local_20,1);
          if (iVar1 != 0) {
            FUN_00416430(&local_20,local_20,1,iVar1 + -1);
          }
        }
        else {
          FUN_00416430(&local_20,local_20,1,iVar1 + -1);
        }
        FUN_00416310(&local_20,3,local_28,&LAB_01b49064,local_20);
      }
      FUN_00414b90(param_2,local_20);
    }
  }
  FUN_00414520(local_40);
  FUN_004145c0(&local_30,3);
  FUN_00414480(&local_res20);
  return param_2;
}

