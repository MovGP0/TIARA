/* Ghidra address: 01c920f0 */
/* Ghidra symbol: FUN_01c920f0 */


void FUN_01c920f0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_res10 [3];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_68 = 0;
  local_78 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*PTR_DAT_02003180 == '\0') {
    plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(**(longlong **)(param_1 + 0x24b8) + 0xb0))
              (*(longlong **)(param_1 + 0x24b8),L"Active Files",plVar5);
    bVar1 = false;
    iVar3 = (**(code **)(*plVar5 + 0x28))();
    iVar6 = 0;
    bVar2 = false;
    if (-1 < iVar3 + -1) {
      do {
        bVar1 = bVar2;
        FUN_004b5390(plVar5,&local_58,iVar6);
        FUN_00415dd0(&local_60,local_58,0);
        FUN_00b0d000(local_50,local_60,0xfde9);
        FUN_004168b0(local_40,local_50[0]);
        (**(code **)(*plVar5 + 0x40))(plVar5,iVar6,local_40[0]);
        iVar4 = FUN_0044fdb0(local_40[0],local_res10[0],0);
        if (iVar4 == 0) {
          bVar1 = true;
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
        bVar2 = bVar1;
      } while (iVar3 != 0);
    }
    if (!bVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x24b8) + 0xb8))
                (*(longlong **)(param_1 + 0x24b8),L"Active Files");
      (**(code **)(*plVar5 + 0x78))(plVar5,local_res10[0]);
      iVar3 = (**(code **)(*plVar5 + 0x28))();
      iVar6 = 0;
      if (-1 < iVar3 + -1) {
        do {
          FUN_0043f750(&local_70,iVar6);
          FUN_00416ba0(&local_68,L"File",local_70);
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_80,iVar6);
          FUN_004168e0(&local_88,local_80);
          FUN_00b0cea0(&local_78,local_88,0xfde9);
          FUN_00416880(&local_90,local_78);
          (**(code **)(**(longlong **)(param_1 + 0x24b8) + 0x18))
                    (*(longlong **)(param_1 + 0x24b8),L"Active Files",local_68,local_90);
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    FUN_00410f20(plVar5);
  }
  FUN_00414480(&local_90);
  FUN_00414520(&local_88);
  FUN_00414480(&local_80);
  FUN_004144d0(&local_78);
  FUN_00414560(&local_70,2);
  FUN_004144d0(&local_60);
  FUN_00414480(&local_58);
  FUN_00414520(local_50);
  FUN_00414480(local_40);
  FUN_00414480(local_res10);
  return;
}

