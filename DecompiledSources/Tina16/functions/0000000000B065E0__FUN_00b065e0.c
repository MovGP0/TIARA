/* Ghidra address: 00b065e0 */
/* Ghidra symbol: FUN_00b065e0 */


void FUN_00b065e0(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30 [2];
  int local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_38 = 0;
  uVar1 = *param_2;
  if (uVar1 < 0x100) {
    bVar6 = (*(byte *)(param_1 + 0x508 + ((longlong)(ulonglong)uVar1 >> 3)) >>
             ((ulonglong)uVar1 & 7) & 1) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    *param_2 = 0;
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_40,0x80e);
    FUN_00416ba0(&local_38,local_40,*(undefined8 *)(param_1 + 0x528));
    if (*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8) == 0) {
      uVar2 = FUN_00807f90(*(undefined8 *)PTR_DAT_02005950);
    }
    else {
      uVar3 = FUN_007ffaf0(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8));
      uVar2 = FUN_008077f0(uVar3);
    }
    (**(code **)(**(longlong **)(param_1 + 0x538) + 0x290))
              (*(longlong **)(param_1 + 0x538),local_30,uVar2,local_38,0);
    FUN_0064e030(*(undefined8 *)(param_1 + 0x538),0xff000018);
    local_48 = FUN_00498310(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    uVar3 = FUN_0064d1f0(param_1,&local_48);
    local_20._0_4_ = (int)uVar3;
    iVar4 = (int)local_20 + (*(int *)(param_1 + 0x98) - (local_28 - local_30[0])) / 2;
    local_20._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
    iVar5 = local_20._4_4_ + *(int *)(param_1 + 0x9c);
    local_20 = uVar3;
    FUN_00429ca0(local_30,iVar4,iVar5 + 10);
    (**(code **)(**(longlong **)(param_1 + 0x538) + 0x270))
              (*(longlong **)(param_1 + 0x538),local_30,local_38);
  }
  FUN_00834ed0(param_1,param_2);
  FUN_00414560(&local_40,2);
  return;
}

