/* Ghidra address: 01c92470 */
/* Ghidra symbol: FUN_01c92470 */


void FUN_01c92470(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_58 = 0;
  local_68 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*PTR_DAT_02003180 == '\0') {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(**(longlong **)(param_1 + 0x24b8) + 0xb0))
              (*(longlong **)(param_1 + 0x24b8),L"Active Files",plVar3);
    iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
    uVar4 = iVar2 - 1;
    if (-1 < (int)uVar4) {
      do {
        FUN_004b5390(plVar3,&local_48,uVar4);
        FUN_00415dd0(&local_50,local_48,0);
        FUN_00b0d000(local_40,local_50,0xfde9);
        FUN_004168b0(&local_30,local_40[0]);
        (**(code **)(*plVar3 + 0x40))(plVar3,uVar4,local_30);
        iVar2 = FUN_0044fdb0(local_30,local_res10[0],0);
        if ((iVar2 == 0) || (cVar1 = FUN_00440a20(local_30,1), cVar1 == '\0')) {
          (**(code **)(*plVar3 + 0x98))(plVar3,uVar4);
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 < 0x80000000);
    }
    iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (0 < iVar2) {
      (**(code **)(**(longlong **)(param_1 + 0x24b8) + 0xb8))
                (*(longlong **)(param_1 + 0x24b8),L"Active Files");
    }
    iVar2 = (**(code **)(*plVar3 + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_0043f750(&local_60,iVar5);
        FUN_00416ba0(&local_58,L"File",local_60);
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_70,iVar5);
        FUN_004168e0(&local_78,local_70);
        FUN_00b0cea0(&local_68,local_78,0xfde9);
        FUN_00416880(&local_80,local_68);
        (**(code **)(**(longlong **)(param_1 + 0x24b8) + 0x18))
                  (*(longlong **)(param_1 + 0x24b8),L"Active Files",local_58,local_80);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(plVar3);
  }
  FUN_00414480(&local_80);
  FUN_00414520(&local_78);
  FUN_00414480(&local_70);
  FUN_004144d0(&local_68);
  FUN_00414560(&local_60,2);
  FUN_004144d0(&local_50);
  FUN_00414480(&local_48);
  FUN_00414520(local_40);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return;
}

