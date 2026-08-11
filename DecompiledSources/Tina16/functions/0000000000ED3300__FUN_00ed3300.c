/* Ghidra address: 00ed3300 */
/* Ghidra symbol: FUN_00ed3300 */


void FUN_00ed3300(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_58 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00ed2f60(param_1,local_res10,local_res18,0);
  FUN_0043e130(&local_50,local_res10);
  (**(code **)(**(longlong **)(param_1 + 0x888) + 0x10))
            (*(longlong **)(param_1 + 0x888),&local_48,*(undefined8 *)(param_1 + 0x8d0),local_50,0);
  FUN_0043ea00(&local_40,local_48);
  FUN_00414ad0(param_1 + 0x8b0,local_40);
  FUN_00416cd0(param_1 + 0x8b0,4,*(undefined8 *)(param_1 + 0x8b0),&DAT_00ed36b0,local_res18,
               &DAT_00ed36c0);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,local_30,iVar5);
      iVar3 = FUN_004170c0(&DAT_00ed36d4,local_30[0],1);
      FUN_00416dc0(&local_38,local_30[0],1,iVar3 + -1);
      uVar4 = FUN_004170c0(&DAT_00ed36d4,local_30[0],1);
      FUN_00416e20(local_30,1,uVar4);
      FUN_0043ea00(&local_60,local_38);
      FUN_00ea9ca0(&local_58,local_60);
      FUN_0043ea00(&local_70,local_30[0]);
      FUN_00ea9ca0(&local_68,local_70);
      FUN_00416cd0(param_1 + 0x8b0,5,*(undefined8 *)(param_1 + 0x8b0),local_58,&DAT_00ed36e4,
                   local_68,&DAT_00ed36b0);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0043ea00(&local_78,*(undefined8 *)(param_1 + 0x8b0));
  FUN_00416ba0(param_1 + 0x8b0,local_78,&LAB_00ed36f4);
  FUN_0043e130(&local_80,local_res10);
  FUN_0043ea00(&local_88,*(undefined8 *)(param_1 + 0x8b0));
  (**(code **)(**(longlong **)(param_1 + 0x888) + 0x18))
            (*(longlong **)(param_1 + 0x888),*(undefined8 *)(param_1 + 0x8d0),local_80,local_88);
  FUN_00414560(&local_88,0xc);
  FUN_00414560(&local_res10,2);
  return;
}

