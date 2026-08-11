/* Ghidra address: 012bc9f0 */
/* Ghidra symbol: FUN_012bc9f0 */


void FUN_012bc9f0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_res20;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60[0] = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  if (param_2 != '\0') {
    if (DAT_02107780 == 0) {
      DAT_02107780 = FUN_007fc180(&PTR_FUN_012bbaa8,1,*(undefined8 *)PTR_DAT_02004030);
    }
    *(undefined8 *)(DAT_02107780 + 0x6f0) = *(undefined8 *)(param_1 + 0xa8);
    (**(code **)(**(longlong **)(DAT_02107780 + 0x6b0) + 0x278))
              (*(longlong **)(DAT_02107780 + 0x6b0));
    FUN_012bc3d0(*(undefined8 *)(DAT_02107780 + 0x6f8),1);
    (**(code **)(**(longlong **)(DAT_02107780 + 0x6f8) + 0x10))
              (*(longlong **)(DAT_02107780 + 0x6f8),*(undefined8 *)(param_1 + 0x5c8));
    iVar2 = (**(code **)(**(longlong **)(DAT_02107780 + 0x6f8) + 0x28))
                      (*(longlong **)(DAT_02107780 + 0x6f8));
    if (0 < iVar2) {
      FUN_004b3260(*(undefined8 *)(*(longlong *)(DAT_02107780 + 0x6b0) + 0x4a0));
      iVar2 = (**(code **)(**(longlong **)(DAT_02107780 + 0x6f8) + 0x28))();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar3 = (**(code **)(**(longlong **)(DAT_02107780 + 0x6f8) + 0x30))
                            (*(longlong **)(DAT_02107780 + 0x6f8),iVar6);
          iVar5 = *(int *)(lVar3 + 8) + 0x280;
          uVar4 = FUN_00b89270();
          FUN_00b8e520(uVar4,&local_50,iVar5);
          (**(code **)(**(longlong **)(DAT_02107780 + 0x6f8) + 0x18))
                    (*(longlong **)(DAT_02107780 + 0x6f8),&local_68,iVar6);
          FUN_00b8fd60(&local_70,*(undefined8 *)(lVar3 + 0x18),*PTR_DAT_02005310,0,1);
          FUN_012bc900(&local_78,iVar5);
          FUN_012bc890(&local_80,iVar5);
          FUN_00b8fd60(&local_88,*(undefined8 *)(lVar3 + 0x10),*PTR_DAT_02005310,0,1);
          FUN_012bc900(&local_90,iVar5);
          FUN_00416cd0(local_60,9,local_68,local_70,local_78,local_80,local_50,&DAT_012bcddc,
                       local_88,local_90,&LAB_012bcdf0);
          plVar1 = *(longlong **)(*(longlong *)(DAT_02107780 + 0x6b0) + 0x4a0);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_60[0]);
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_004b3390(*(undefined8 *)(*(longlong *)(DAT_02107780 + 0x6b0) + 0x4a0));
      FUN_008059a0(DAT_02107780);
      FUN_0064e1d0(DAT_02107780);
    }
  }
  FUN_00414560(&local_90,7);
  FUN_00414560(&local_50,5);
  FUN_00414480(&local_res20);
  return;
}

