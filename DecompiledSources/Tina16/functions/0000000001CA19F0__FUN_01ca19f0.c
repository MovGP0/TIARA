/* Ghidra address: 01ca19f0 */
/* Ghidra symbol: FUN_01ca19f0 */


void FUN_01ca19f0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_70 = (longlong *)0x0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x17d0) = uVar3;
  FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\ebooks.ini");
  cVar1 = FUN_00440a20(local_30,1);
  if (cVar1 != '\0') {
    FUN_00416ba0(&local_38,*(undefined8 *)PTR_DAT_020049a0,L"\\ebooks.ini");
    plVar4 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
    *(longlong **)(param_1 + 0x17d8) = plVar4;
    (**(code **)(*plVar4 + 0x98))(plVar4,*(undefined8 *)(param_1 + 0x17d0));
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x17d0) + 0x28))
                      (*(longlong **)(param_1 + 0x17d0));
    if (0 < iVar2) {
      plVar4 = (longlong *)FUN_007dd3a0(&PTR_FUN_007d94d0,1,param_1);
      (**(code **)(*plVar4 + 0x50))(plVar4,L"mnEBooks");
      FUN_007e2c60(plVar4,L"E-Books");
      *(undefined4 *)((longlong)plVar4 + 0xac) = 0;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x17d0) + 0x28))();
      iVar7 = 0;
      if (-1 < iVar2 + -1) {
        do {
          plVar5 = (longlong *)FUN_007dd3a0(&PTR_FUN_007d94d0,1,param_1);
          plVar6 = (longlong *)FUN_007dd3a0(&PTR_FUN_007d94d0,1,param_1);
          FUN_0043f750(&local_48,iVar7 + 1);
          FUN_00416ba0(&local_40,L"mnEBooks",local_48);
          (**(code **)(*plVar5 + 0x50))(plVar5,local_40);
          FUN_0043f750(&local_58,iVar7 + 1);
          FUN_00416ba0(&local_50,L"mnEBooksPopup",local_58);
          (**(code **)(*plVar6 + 0x50))(plVar6,local_50);
          (**(code **)(**(longlong **)(param_1 + 0x17d0) + 0x18))
                    (*(longlong **)(param_1 + 0x17d0),&local_68,iVar7);
          (**(code **)(**(longlong **)(param_1 + 0x17d8) + 0x10))
                    (*(longlong **)(param_1 + 0x17d8),&local_60,local_68,L"Title",0);
          FUN_007e2c60(plVar5,local_60);
          (**(code **)(**(longlong **)(param_1 + 0x17d0) + 0x18))
                    (*(longlong **)(param_1 + 0x17d0),&local_78,iVar7);
          (**(code **)(**(longlong **)(param_1 + 0x17d8) + 0x10))
                    (*(longlong **)(param_1 + 0x17d8),&local_70,local_78,L"Title",0);
          FUN_007e2c60(plVar6,local_70);
          plVar5[0x23] = param_1;
          plVar5[0x22] = (longlong)FUN_01ca1ef0;
          plVar6[0x23] = param_1;
          plVar6[0x22] = (longlong)FUN_01ca1ef0;
          if (plVar5[0xf] == 0) {
            FUN_00410f20(plVar5);
          }
          else {
            FUN_007e34c0(plVar4,plVar5);
          }
          if (plVar6[0xf] == 0) {
            FUN_00410f20(plVar6);
          }
          else {
            FUN_007e34c0(*(undefined8 *)(*(longlong *)(param_1 + 0x1588) + 0x80),plVar6);
          }
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = FUN_007e2ef0(plVar4);
      if (iVar2 < 1) {
        FUN_00410f20(plVar4);
      }
      else {
        iVar2 = FUN_007e2fe0(param_2);
        FUN_007e31e0(*(undefined8 *)(param_2 + 200),iVar2 + 1,plVar4);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1580),1);
      }
    }
  }
  FUN_00414560(&local_78,10);
  return;
}

