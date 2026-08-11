/* Ghidra address: 01530510 */
/* Ghidra symbol: FUN_01530510 */


void FUN_01530510(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  if ((DAT_01f5fc98 != (longlong *)0x0) && (DAT_01f5fca0 != 0)) {
    iVar2 = FUN_007e2fe0(DAT_01f5fca0);
    iVar9 = iVar2 + 1;
    uVar1 = *(undefined8 *)(DAT_01f5fca0 + 200);
    while( true ) {
      lVar5 = FUN_007e2f10(uVar1,iVar9);
      iVar3 = FUN_004170c0(L"mnMRU",*(undefined8 *)(lVar5 + 0x10),1);
      if (iVar3 != 1) break;
      uVar7 = FUN_007e2f10(uVar1,iVar9);
      FUN_007e3300(uVar1,iVar9);
      FUN_00410f20(uVar7);
    }
    iVar3 = (**(code **)(*DAT_01f5fc98 + 0x28))(DAT_01f5fc98);
    if (0 < iVar3) {
      plVar6 = (longlong *)FUN_007dd3a0(&PTR_FUN_007d94d0,1,param_1);
      (**(code **)(*plVar6 + 0x50))(plVar6,L"mnMRU_Separator");
      FUN_007e2c60(plVar6,&DAT_01530864);
      FUN_007e31e0(uVar1,iVar9,plVar6);
      iVar2 = iVar2 + 2;
      iVar9 = (**(code **)(*DAT_01f5fc98 + 0x28))();
      local_5c = 0;
      if (-1 < iVar9 + -1) {
        do {
          plVar6 = (longlong *)FUN_007dd3a0(&PTR_FUN_007d94d0,1,param_1);
          FUN_0043f750(&local_38,local_5c + 1);
          FUN_00416ba0(&local_30,L"mnMRU_File",local_38);
          (**(code **)(*plVar6 + 0x50))(plVar6,local_30);
          FUN_0043f750(&local_48,local_5c + 1);
          (**(code **)(*DAT_01f5fc98 + 0x18))(DAT_01f5fc98,&local_58,local_5c);
          uVar7 = FUN_007ffbe0(param_1);
          uVar8 = FUN_007ffbe0(param_1);
          uVar4 = FUN_005fdff0(uVar8,&DAT_015308bc);
          FUN_00b965d0(&local_50,local_58,uVar7,(ulonglong)uVar4 * 0x19);
          FUN_00416cd0(&local_40,4,&DAT_01530898,local_48,&DAT_015308a8,local_50);
          FUN_007e2c60(plVar6,local_40);
          plVar6[0x23] = param_1;
          plVar6[0x22] = (longlong)FUN_0152fed0;
          FUN_007e31e0(uVar1,iVar2,plVar6);
          iVar2 = iVar2 + 1;
          local_5c = local_5c + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
  }
  FUN_00414480(&local_58);
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,4);
  return;
}

