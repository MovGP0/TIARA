/* Ghidra address: 01b474e0 */
/* Ghidra symbol: FUN_01b474e0 */


undefined8 FUN_01b474e0(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res20;
  ulonglong in_stack_ffffffffffffff98;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414480(param_2);
  if (-1 < param_3) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1,0);
    if (param_3 < iVar2) {
      sVar1 = *(short *)((longlong)param_1 + (longlong)(param_3 + 1) * 2 + 0x26);
      if (sVar1 == 900) {
        FUN_0041ddd0(&local_38,&LAB_01b468e8);
        in_stack_ffffffffffffff98 = local_38;
        FUN_00de8a20(&local_30,L"NlMagnhd",L"sSBlockWizard",local_res20,local_38);
        FUN_004168b0(&local_28,local_30);
      }
      else {
        uVar3 = FUN_01d39f20(sVar1);
        FUN_01d3a7a0(*(undefined8 *)PTR_DAT_020036c8,&local_28,uVar3,local_res20);
      }
      FUN_00450070(&local_40,local_28,&DAT_01b47898,&DAT_01b478a8,
                   in_stack_ffffffffffffff98 & 0xffffffffffffff00);
      FUN_00414b50(&local_28,local_40);
      iVar2 = FUN_004170c0(&DAT_01b478a8,local_28,1);
      uVar3 = 0;
      if (local_28 != 0) {
        uVar3 = *(undefined4 *)(local_28 + -4);
      }
      FUN_00416dc0(&local_20,local_28,iVar2 + 1,uVar3);
      iVar2 = FUN_004170c0(&DAT_01b478bc,local_20,1);
      if (iVar2 != 0) {
        iVar2 = FUN_004170c0(&DAT_01b478a8,local_28,1);
        iVar4 = FUN_004170c0(&DAT_01b478bc,local_28,1);
        iVar5 = FUN_004170c0(&DAT_01b478a8,local_28,1);
        FUN_00416dc0(&local_28,local_28,iVar2 + 1,(iVar4 - iVar5) + -1);
        iVar2 = FUN_004170c0(&DAT_01b478bc,local_20,1);
        uVar3 = 0;
        if (local_20 != 0) {
          uVar3 = *(undefined4 *)(local_20 + -4);
        }
        FUN_00416dc0(&local_20,local_20,iVar2 + 1,uVar3);
        iVar2 = FUN_004170c0(&DAT_01b478cc,local_20,1);
        if (iVar2 == 0) {
          iVar2 = FUN_004170c0(&DAT_01b478dc,local_20,1);
          if (iVar2 != 0) {
            FUN_00416dc0(&local_20,local_20,1,iVar2 + -1);
          }
        }
        else {
          FUN_00416dc0(&local_20,local_20,1,iVar2 + -1);
        }
        FUN_00416cd0(&local_20,3,local_28,&LAB_01b478ec,local_20);
      }
      FUN_00414ad0(param_2,local_20);
    }
  }
  FUN_00414560(&local_40,2);
  FUN_00414520(&local_30);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_res20);
  return param_2;
}

