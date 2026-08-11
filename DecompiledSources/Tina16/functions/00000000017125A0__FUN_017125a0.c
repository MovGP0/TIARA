/* Ghidra address: 017125a0 */
/* Ghidra symbol: FUN_017125a0 */


void FUN_017125a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x18))
                (*(longlong **)(param_1 + 0x98),&local_60,iVar7);
      (**(code **)(*plVar4 + 0xd8))(plVar4,local_60);
      local_54 = 0;
      do {
        (**(code **)(*plVar5 + 0x90))(plVar5);
        cVar1 = FUN_01710ad0(plVar4,&local_50,&local_54);
        FUN_00416880(&local_70,local_50);
        FUN_0043ea00(&local_68,local_70);
        if (local_68 != 0) {
          FUN_00b0d000(&local_78,local_50,0xfde9);
          FUN_004168b0(&local_48,local_78);
          uVar6 = FUN_00416740(local_48);
          FUN_004ae3e0(&DAT_01712830,&DAT_01712850,uVar6,plVar5);
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_88,0);
          FUN_0043ea00(&local_80,local_88);
          FUN_0043e130(local_40,local_80);
          iVar3 = FUN_00416db0(local_40[0],L"SUBCKT");
          if (iVar3 == 0) {
            FUN_01713120(param_1,plVar5);
          }
        }
      } while (cVar1 == '\0');
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar5);
  FUN_00410f20(plVar4);
  FUN_00414560(&local_88,2);
  FUN_00414520(&local_78);
  FUN_00414560(&local_70,3);
  FUN_004144d0(&local_50);
  FUN_00414560(&local_48,2);
  return;
}

