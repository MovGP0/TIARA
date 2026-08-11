/* Ghidra address: 0156b9c0 */
/* Ghidra symbol: FUN_0156b9c0 */


undefined8 FUN_0156b9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res20;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_20 = (longlong *)FUN_01b21480(local_res20);
  FUN_00414480(&local_38);
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_30,local_24);
      local_40 = FUN_00e106f0(param_3,local_30);
      if (local_40 == 0) {
        FUN_00416ba0(&local_58,local_30,L": not found in vhdl macro");
        uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_58);
        FUN_004134c0(uVar3);
      }
      local_28 = FUN_00e0f830(local_40);
      if (local_28 < 0) {
        FUN_00416ba0(&local_60,local_30,L": invalid type");
        uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_60);
        FUN_004134c0(uVar3);
      }
      FUN_0043f750(&local_68,local_28);
      FUN_00416ad0(&local_38,local_68);
      iVar2 = (**(code **)(*local_20 + 0x28))(local_20);
      if (local_24 < iVar2 + -1) {
        FUN_00416ad0(&local_38,&LAB_0156bc74);
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414ad0(param_2,local_38);
  FUN_00410f20(local_20);
  FUN_00414560(&local_68,3);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_res20);
  return param_2;
}

