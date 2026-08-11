/* Ghidra address: 01b489e0 */
/* Ghidra symbol: FUN_01b489e0 */


undefined8 FUN_01b489e0(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res20;
  ulonglong in_stack_ffffffffffffff98;
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
  FUN_00414480(param_2);
  if (-1 < param_3) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,0);
    if (param_3 < iVar1) {
      FUN_01d3a7a0(*(undefined8 *)PTR_DAT_020036c8,&local_28,(int)param_1[4] + param_3,local_res20);
      FUN_00450070(local_40,local_28,&DAT_01b48ce4,&DAT_01b48cf4,
                   in_stack_ffffffffffffff98 & 0xffffffffffffff00);
      FUN_00414b50(&local_28,local_40[0]);
      iVar1 = FUN_004170c0(&DAT_01b48cf4,local_28,1);
      uVar2 = 0;
      if (local_28 != 0) {
        uVar2 = *(undefined4 *)(local_28 + -4);
      }
      FUN_00416dc0(&local_30,local_28,iVar1 + 1,uVar2);
      iVar1 = FUN_004170c0(&DAT_01b48d08,local_30,1);
      if (iVar1 == 0) {
        FUN_00414b50(&local_20,local_30);
      }
      else {
        iVar1 = FUN_004170c0(&DAT_01b48cf4,local_28,1);
        iVar3 = FUN_004170c0(&DAT_01b48d08,local_28,1);
        iVar4 = FUN_004170c0(&DAT_01b48cf4,local_28,1);
        FUN_00416dc0(&local_28,local_28,iVar1 + 1,(iVar3 - iVar4) + -1);
        iVar1 = FUN_004170c0(&DAT_01b48d08,local_30,1);
        uVar2 = 0;
        if (local_30 != 0) {
          uVar2 = *(undefined4 *)(local_30 + -4);
        }
        FUN_00416dc0(&local_20,local_30,iVar1 + 1,uVar2);
        iVar1 = FUN_004170c0(&DAT_01b48d18,local_20,1);
        if (iVar1 == 0) {
          iVar1 = FUN_004170c0(&DAT_01b48d28,local_20,1);
          if (iVar1 != 0) {
            FUN_00416dc0(&local_20,local_20,1,iVar1 + -1);
          }
        }
        else {
          FUN_00416dc0(&local_20,local_20,1,iVar1 + -1);
        }
        FUN_00416cd0(&local_20,3,local_28,&LAB_01b48d38,local_20);
      }
      FUN_00414ad0(param_2,local_20);
    }
  }
  FUN_00414480(local_40);
  FUN_00414560(&local_30,3);
  FUN_00414480(&local_res20);
  return param_2;
}

