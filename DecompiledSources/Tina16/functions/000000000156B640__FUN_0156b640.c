/* Ghidra address: 0156b640 */
/* Ghidra symbol: FUN_0156b640 */


void FUN_0156b640(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  lVar2 = FUN_00e0f340(*(undefined8 *)(param_1 + 0x938),param_2);
  iVar1 = FUN_00e0e000(*(undefined8 *)(lVar2 + 0x828),1);
  if ((iVar1 == 5) || (iVar1 == 6)) {
    FUN_00414c70(&local_60,*(undefined8 *)(*(longlong *)(lVar2 + 0x828) + 0x50));
    (**(code **)(*param_2 + 0x298))(param_2,&local_20,param_3);
    lVar2 = FUN_00e106f0(lVar2,local_20);
    if (lVar2 == 0) {
      FUN_00416ba0(local_70,local_20,L": not found in vhdl macro");
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_70[0]);
      lVar2 = FUN_004134c0(uVar3);
    }
    iVar1 = FUN_00e0f830(lVar2);
    if (iVar1 < 0) {
      FUN_00416ba0(&local_78,local_20,L": invalid type");
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_78);
      FUN_004134c0(uVar3);
    }
    FUN_00415dd0(&local_80,local_20,0);
    FUN_014c4fa0(param_1 + 0xa50,param_1 + 0xa68,local_80,iVar1,param_4);
  }
  FUN_004144d0(&local_80);
  FUN_00414560(&local_78,2);
  FUN_004144d0(&local_60);
  FUN_00414560(&local_58,8);
  return;
}

