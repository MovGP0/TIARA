/* Ghidra address: 012909f0 */
/* Ghidra symbol: FUN_012909f0 */


void FUN_012909f0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *local_res8 [2];
  undefined8 local_res18 [2];
  undefined8 local_50 [2];
  undefined8 local_40;
  longlong local_38;
  longlong local_30 [2];
  
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  FUN_0041b910(param_1);
  FUN_00414610(local_res18[0]);
  lVar3 = FUN_0149d160(0,&PTR_FUN_0149cf30);
  (**(code **)(*local_res8[0] + 0x100))(local_res8[0],local_50,L"position");
  FUN_00416ba0(&local_40,local_50[0],&DAT_01290bf0);
  (**(code **)(*local_res8[0] + 0x100))(local_res8[0],local_30,&PTR_DAT_01290c00);
  if (local_30[0] != 0) {
    FUN_0149eee0(lVar3,local_30[0]);
  }
  (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_38,L"groupid");
  if (local_38 != 0) {
    FUN_0149ef60(lVar3,local_38);
  }
  uVar1 = FUN_012421e0(&local_40);
  uVar2 = FUN_012421e0(&local_40);
  *(undefined4 *)(lVar3 + 0xc) = uVar1;
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  FUN_01294f60(local_res8[0],*(undefined8 *)(lVar3 + 0x28),local_res18[0],0);
  (**(code **)(*param_2 + 0x20))(param_2,lVar3);
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  FUN_0041b800(local_res8);
  FUN_00414480(local_res18);
  return;
}

