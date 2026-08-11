/* Ghidra address: 005de610 */
/* Ghidra symbol: FUN_005de610 */


void FUN_005de610(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_88;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*param_1 + 0x90))(param_1,param_2,local_20);
  FUN_004b3260(param_3);
  (**(code **)(*param_3 + 0x90))(param_3);
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_40,local_24);
      (**(code **)(*local_20 + 0x18))(local_20,&local_50,local_24);
      local_68 = 0;
      (**(code **)(*param_1 + 0x10))(param_1,&local_48,param_2,local_50);
      local_68 = local_48;
      FUN_00416cd0(&local_38,3,local_40,&LAB_005de818);
      (**(code **)(*param_3 + 0x78))(param_3,local_38);
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004b3390(param_3);
  FUN_00410f20(local_20);
  FUN_00414560(&local_50,4);
  return;
}

