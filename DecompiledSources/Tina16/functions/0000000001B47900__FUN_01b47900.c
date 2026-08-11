/* Ghidra address: 01b47900 */
/* Ghidra symbol: FUN_01b47900 */


undefined8 FUN_01b47900(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res20;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414520(param_2);
  if (-1 < param_3) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,0);
    if (param_3 < iVar1) {
      uVar2 = FUN_01d39f20(*(undefined2 *)((longlong)param_1 + (longlong)(param_3 + 1) * 2 + 0x26));
      FUN_01d3a8c0(*(undefined8 *)PTR_DAT_020036c8,&local_28,uVar2,local_res20);
      FUN_00b0d1f0(&local_30,local_28,&DAT_01b47be4,&DAT_01b47bec);
      FUN_00414be0(&local_28,local_30);
      iVar1 = FUN_00417170(&DAT_01b47bec,local_28,1);
      uVar3 = 0;
      if (local_28 != 0) {
        uVar3 = *(uint *)(local_28 + -4) >> 1;
      }
      FUN_00416430(&local_20,local_28,iVar1 + 1,uVar3);
      iVar1 = FUN_00417170(&DAT_01b47bf4,local_20,1);
      if (iVar1 != 0) {
        iVar1 = FUN_00417170(&DAT_01b47bec,local_28,1);
        iVar4 = FUN_00417170(&DAT_01b47bf4,local_28,1);
        iVar5 = FUN_00417170(&DAT_01b47bec,local_28,1);
        FUN_00416430(&local_28,local_28,iVar1 + 1,(iVar4 - iVar5) + -1);
        iVar1 = FUN_00417170(&DAT_01b47bf4,local_20,1);
        uVar3 = 0;
        if (local_20 != 0) {
          uVar3 = *(uint *)(local_20 + -4) >> 1;
        }
        FUN_00416430(&local_20,local_20,iVar1 + 1,uVar3);
        iVar1 = FUN_00417170(&DAT_01b47bfc,local_20,1);
        if (iVar1 == 0) {
          iVar1 = FUN_00417170(&DAT_01b47c04,local_20,1);
          if (iVar1 != 0) {
            FUN_00416430(&local_20,local_20,1,iVar1 + -1);
          }
        }
        else {
          FUN_00416430(&local_20,local_20,1,iVar1 + -1);
        }
        FUN_00416310(&local_20,3,local_28,&LAB_01b47c0c,local_20);
      }
      FUN_00414b90(param_2,local_20);
    }
  }
  FUN_004145c0(&local_30,3);
  FUN_00414480(&local_res20);
  return param_2;
}

