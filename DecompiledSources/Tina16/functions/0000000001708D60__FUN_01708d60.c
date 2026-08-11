/* Ghidra address: 01708d60 */
/* Ghidra symbol: FUN_01708d60 */


undefined4 FUN_01708d60(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_res20;
  ulonglong uVar4;
  ulonglong in_stack_ffffffffffffff90;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_017013b0,1,*(undefined8 *)PTR_DAT_02004030);
  uVar4 = 0;
  FUN_00c857e0(*(undefined8 *)PTR_DAT_02002c40,local_20,*(undefined4 *)(param_1 + 0x18),local_res20,
               0,in_stack_ffffffffffffff90 & 0xffffffffffffff00);
  FUN_00414ad0(plVar2 + 0xed,local_20[0]);
  FUN_00806b40(plVar2,param_3 + 2);
  uVar3 = FUN_007ffaf0(plVar2);
  iVar1 = FUN_008077f0(uVar3);
  if (param_2 + (int)plVar2[0x13] < iVar1) {
    FUN_00806af0(plVar2,param_2);
  }
  else {
    FUN_00806af0(plVar2,(param_2 - (int)plVar2[0x13]) + 0x1d);
  }
  FUN_00c85700(*(undefined8 *)PTR_DAT_02002c40,&local_28,*(undefined4 *)(param_1 + 0x18),local_res20
               ,uVar4 & 0xffffffffffffff00,0);
  FUN_0064de00(plVar2,local_28);
  FUN_00414ad0(plVar2 + 0xe8,*(undefined8 *)(param_1 + 0x30));
  *(undefined1 *)(plVar2 + 0xeb) = 4;
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_01703ac0(plVar2,&local_30);
    if (local_30 != 0) {
      FUN_01703ac0(plVar2,&local_38);
      FUN_00414ad0(param_1 + 0x20,local_38);
      if (plVar2[0xee] == 0) {
        FUN_0064dd90(plVar2[0xdf],&local_48);
        FUN_00414ad0(param_1 + 0x28,local_48);
      }
      else {
        FUN_0064dd90(plVar2[0xdf],&local_40);
        FUN_00416cd0(param_1 + 0x28,3,plVar2[0xee],&LAB_01709018,local_40);
      }
      uVar3 = FUN_01703c50(plVar2);
      *(undefined8 *)(param_1 + 0x38) = uVar3;
      local_4c = 0x39;
      goto LAB_01708f88;
    }
  }
  local_4c = 0xffffffff;
LAB_01708f88:
  FUN_00410f20(plVar2);
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_38,4);
  FUN_00414480(&local_res20);
  return local_4c;
}

