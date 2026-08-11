/* Ghidra address: 00ee5950 */
/* Ghidra symbol: FUN_00ee5950 */


undefined8
FUN_00ee5950(undefined8 param_1,longlong param_2,int *param_3,undefined8 param_4,longlong *param_5,
            undefined4 param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res8;
  longlong local_res10;
  int *local_res18;
  undefined8 local_res20;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_3c;
  undefined8 local_38 [2];
  undefined8 local_28;
  longlong local_20;
  
  local_50 = auStack_b8;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_38[0] = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414630(param_1);
  *PTR_DAT_02002ce0 = 0;
  local_20 = FUN_016b97f0(&DAT_016b45f0,1,1);
  lVar3 = *(longlong *)(local_20 + 0x10);
  *(undefined1 *)(lVar3 + 0x231) = 0;
  FUN_016a36d0(lVar3,0);
  *(undefined1 *)(*(longlong *)(local_20 + 8) + 8) = 1;
  local_28 = FUN_0198b200(0,&PTR_FUN_01984d18,0,0);
  FUN_016cff60(local_20,1,0,0);
  if (local_res10 == 0) {
    FUN_00416880(&local_58,local_res8);
    FUN_016bb4f0(local_20,local_58,0);
  }
  else {
    FUN_016bb740(local_20,local_res10);
  }
  FUN_004144d0(local_38);
  while (cVar1 = FUN_016bb790(local_20), cVar1 == '\0') {
    FUN_016b8f10(&local_60,local_38[0]);
    iVar2 = FUN_00415a60(local_60,".SUBCKT");
    if (iVar2 == 0) break;
    FUN_016bb7d0(local_20,local_38,1);
  }
  FUN_00414bf0(local_20 + 0xd88,local_38[0]);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 1;
  local_70 = 0;
  FUN_00ee2730(*(undefined8 *)(local_20 + 8),0,0,0);
  FUN_016cb7c0(local_28,local_res20,*(undefined8 *)(local_20 + 0xa38),param_6);
  iVar2 = *(int *)(*(longlong *)(local_20 + 0xa38) + 0x10);
  *local_res18 = iVar2;
  if ((param_5 != (longlong *)0x0) && (local_3c = 0, -1 < iVar2 + -1)) {
    do {
      lVar3 = FUN_01d347d0(*(undefined8 *)(local_20 + 0xa38),local_3c);
      if (*(longlong *)(lVar3 + 0x10) == 0) {
        lVar3 = FUN_01d347d0(*(undefined8 *)(local_20 + 0xa38),local_3c);
        FUN_004169a0(&local_68,*(undefined8 *)(lVar3 + 8));
        (**(code **)(*param_5 + 0x78))(param_5,local_68);
      }
      local_3c = local_3c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_68);
  FUN_004144d0(&local_60);
  FUN_00414480(&local_58);
  FUN_004144d0(local_38);
  FUN_004144d0(&local_res8);
  return local_28;
}

