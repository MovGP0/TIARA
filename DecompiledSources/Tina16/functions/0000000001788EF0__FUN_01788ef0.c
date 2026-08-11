/* Ghidra address: 01788ef0 */
/* Ghidra symbol: FUN_01788ef0 */


void FUN_01788ef0(longlong param_1,undefined8 param_2,short *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30 [2];
  int local_28;
  undefined8 local_20;
  
  local_60 = 0;
  local_50[0] = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 0) {
    if ((ushort)(*param_3 - 0x28U) < 0x20) {
      bVar5 = (1 << ((byte)(*param_3 - 0x28U) & 0x1f) & 0x40014U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      *param_3 = 0;
      uVar3 = FUN_007ffaf0(param_1);
      uVar2 = FUN_008077f0(uVar3);
      FUN_00416ba0(local_50,*(undefined8 *)PTR_DAT_020030b0,&LAB_017890f8);
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x290))
                (*(longlong **)(param_1 + 0x718),local_30,uVar2,local_50[0],0);
      FUN_0064e030(*(undefined8 *)(param_1 + 0x718),0xff000018);
      lVar1 = *(longlong *)(param_1 + 0x6d0);
      FUN_00849e90(lVar1,&local_40,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac));
      local_58 = FUN_00498310(local_40,local_3c);
      uVar3 = FUN_0064d1f0(param_1,&local_58);
      local_20._0_4_ = (int)uVar3;
      iVar4 = (int)local_20 + ((local_38 - local_40) - (local_28 - local_30[0])) / 2;
      local_20._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      local_34 = local_20._4_4_ + local_34;
      local_20 = uVar3;
      FUN_00429ca0(local_30,iVar4,(local_34 - local_3c) + 10);
      FUN_00416ba0(&local_60,*(undefined8 *)PTR_DAT_020030b0,&LAB_017890f8);
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x270))
                (*(longlong **)(param_1 + 0x718),local_30,local_60);
    }
  }
  FUN_00414480(&local_60);
  FUN_00414480(local_50);
  return;
}

