/* Ghidra address: 01799dc0 */
/* Ghidra symbol: FUN_01799dc0 */


void FUN_01799dc0(longlong param_1,undefined8 param_2,ushort *param_3,short param_4)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_60 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  uVar1 = *param_3;
  if (uVar1 < 0x6e) {
    if (uVar1 == 0x6d) {
      cVar2 = FUN_01799d60(param_2);
      if (cVar2 == '\0') {
        FUN_01794980(param_1,0);
      }
    }
    else if (uVar1 == 0x1b) {
      cVar2 = FUN_01799d60(param_2);
      if (cVar2 == '\0') {
        FUN_01794bc0(param_1);
      }
    }
    else if (uVar1 == 0x2e) {
      cVar2 = FUN_01799d60(param_2);
      if (cVar2 == '\0') {
        FUN_01795980(param_1,param_2);
      }
    }
    else if ((uVar1 == 0x6b) && (cVar2 = FUN_01799d60(param_2), cVar2 == '\0')) {
      FUN_01794990(param_1,0);
    }
  }
  else if (uVar1 == 0x71) {
    if (param_4 == 5) {
      plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_00441920(&local_48,*(undefined8 *)(param_1 + 0xc98));
      FUN_00416cd0(local_40,3,L"*** ",local_48,L" - shape list *** ");
      (**(code **)(*plVar4 + 0x78))(plVar4,local_40[0]);
      (**(code **)(*plVar4 + 0x78))(plVar4,0);
      iVar5 = 0;
      FUN_00414480(&local_30);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x28))();
      local_7c = 0;
      if (-1 < iVar3 + -1) {
        do {
          if (iVar5 / 10 == 0) {
            (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x18))
                      (*(longlong **)(param_1 + 0xd18),&local_50,local_7c);
            FUN_00416cd0(&local_30,3,local_30,local_50,&DAT_0179a1cc);
          }
          else {
            (**(code **)(*plVar4 + 0x78))(plVar4,local_30);
            iVar5 = 0;
            (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x18))
                      (*(longlong **)(param_1 + 0xd18),&local_58,local_7c);
            FUN_00416ba0(&local_30,local_58,&DAT_0179a1cc);
          }
          iVar5 = iVar5 + 1;
          local_7c = local_7c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      (**(code **)(*plVar4 + 0x78))(plVar4,local_30);
      FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,&local_68);
      FUN_00441640(&local_60,local_68);
      FUN_00441920(&local_78,*(undefined8 *)(param_1 + 0xc98));
      FUN_004414c0(&local_70,local_78,L".list");
      FUN_00416ad0(&local_60,local_70);
      (**(code **)(*plVar4 + 0x100))(plVar4,local_60);
      FUN_00410f20(plVar4);
    }
  }
  else if (uVar1 == 0x76) {
    FUN_0179dfe0(param_1);
  }
  FUN_00414560(&local_78,8);
  FUN_00414480(&local_30);
  return;
}

