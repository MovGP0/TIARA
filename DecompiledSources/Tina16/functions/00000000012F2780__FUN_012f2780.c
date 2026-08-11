/* Ghidra address: 012f2780 */
/* Ghidra symbol: FUN_012f2780 */


void FUN_012f2780(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong local_res8;
  longlong *local_res10;
  longlong *local_res18 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = (longlong *)0x0;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_1);
  FUN_0041b910(local_res10);
  FUN_0041b910(local_res18[0]);
  if (local_res8 != 0) {
    iVar1 = FUN_004170c0(&DAT_012f2b68,local_res8,1);
    if (0 < iVar1) {
      (**(code **)(*local_res10 + 0x148))(local_res10,&local_20,L"action");
      (**(code **)(*local_res18[0] + 0x98))(local_res18[0],&local_30,local_20);
      (**(code **)(*local_20 + 0x108))(local_20,L"mode",&DAT_012f2b68);
      iVar2 = FUN_004170c0(&DAT_012f2bb0,local_res8,iVar1);
      FUN_00416dc0(&local_28,local_res8,iVar1,iVar2 - iVar1);
      iVar1 = FUN_004170c0(L"Save",local_28,1);
      if (iVar1 < 1) {
        iVar1 = FUN_004170c0(L"Compare",local_28,1);
        if (iVar1 < 1) {
          (**(code **)(*local_20 + 0x108))(local_20,L"action",&LAB_012f2c70);
        }
        else {
          (**(code **)(*local_20 + 0x108))(local_20,L"action",L"Compare");
          uVar3 = FUN_004170c0(L"Compare",local_28,1);
          iVar2 = FUN_004170c0(&DAT_012f2bf4,local_28,uVar3);
          iVar1 = 0;
          if (local_28 != 0) {
            iVar1 = *(int *)(local_28 + -4);
          }
          FUN_00416dc0(&local_28,local_28,iVar2 + 1,(iVar1 - iVar2) + -2);
          iVar1 = FUN_004170c0(&DAT_012f2c24,local_28,1);
          FUN_00416dc0(&local_38,local_28,1,iVar1 + -1);
          (**(code **)(*local_20 + 0x108))(local_20,L"refCurve",local_38);
          uVar3 = FUN_004170c0(&DAT_012f2c24,local_28,1);
          FUN_00416e20(&local_28,1,uVar3);
          iVar1 = FUN_004170c0(&DAT_012f2c24,local_28,1);
          FUN_00416dc0(&local_40,local_28,1,iVar1 + -1);
          (**(code **)(*local_20 + 0x108))(local_20,L"tolerance",local_40);
          iVar1 = FUN_004170c0(&DAT_012f2c24,local_28,1);
          uVar3 = 0;
          if (local_28 != 0) {
            uVar3 = *(undefined4 *)(local_28 + -4);
          }
          FUN_00416dc0(&local_48,local_28,iVar1 + 1,uVar3);
          (**(code **)(*local_20 + 0x108))(local_20,L"points",local_48);
        }
      }
      else {
        (**(code **)(*local_20 + 0x108))(local_20,L"action",L"Save");
      }
    }
  }
  FUN_00414560(&local_48,3);
  FUN_0041b800(&local_30);
  FUN_00414480(&local_28);
  FUN_0041b800(&local_20);
  FUN_00414480(&local_res8);
  FUN_0041b800(&local_res10);
  FUN_0041b800(local_res18);
  return;
}

