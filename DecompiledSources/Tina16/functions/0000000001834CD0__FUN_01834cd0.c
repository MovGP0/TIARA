/* Ghidra address: 01834cd0 */
/* Ghidra symbol: FUN_01834cd0 */


void FUN_01834cd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_44;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_50 = auStack_a8;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x58);
  iVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
  if (iVar4 == -1) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x58);
    (**(code **)(*plVar1 + 0x78))(plVar1,param_2);
    local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x38);
    if (*(longlong *)(lVar2 + 0xe0) == 0) {
      FUN_00414480(&local_40);
      iVar4 = (**(code **)(**(longlong **)(lVar2 + 0x148) + 0x28))();
      local_44 = 0;
      if (-1 < iVar4 + -1) {
        do {
          plVar1 = *(longlong **)
                    (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x38) +
                    0x148);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,local_44);
          if ((local_40 != 0) &&
             (iVar5 = FUN_00414cb0(local_40),
             *(short *)(local_40 + -2 + (longlong)iVar5 * 2) != 0x5c)) {
            FUN_00416ad0(&local_40,&DAT_018352cc);
          }
          FUN_00416ba0(&local_58,local_40,param_2);
          cVar3 = FUN_00440a20(local_58,1);
          if (cVar3 != '\0') break;
          local_44 = local_44 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_00416ba0(&local_60,local_40,param_2);
      (**(code **)(*local_30 + 0xd8))(local_30,local_60);
    }
    else {
      FUN_00414480(&local_38);
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x38);
      (**(code **)(lVar2 + 0xe0))(*(undefined8 *)(lVar2 + 0xe8),lVar2,param_2,&local_38);
      (**(code **)(*local_30 + 0x60))(local_30,local_38);
    }
    local_20 = FUN_01834440(&DAT_01834038,1,
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x38));
    FUN_00414ad0(local_20 + 0x50,param_2);
    uVar6 = FUN_0045ae90();
    local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
    local_28 = FUN_004ba470(&PTR_FUN_0047d288,1,0,uVar6);
    FUN_00414480(&local_38);
    iVar4 = (**(code **)(*local_30 + 0x28))(local_30);
    if (0 < iVar4) {
      FUN_018345d0(local_20,*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x20));
      (**(code **)(**(longlong **)(local_20 + 0x58) + 0x10))
                (*(longlong **)(local_20 + 0x58),
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x58));
      (**(code **)(*local_30 + 0x38))(local_30,&local_68);
      cVar3 = FUN_01836a30(local_20,local_68);
      if (cVar3 == '\0') {
        FUN_00414b50(*(longlong *)(param_1 + 0x160) + 0x78,
                     *(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x38) +
                      0x88));
        FUN_00414b50(*(longlong *)(param_1 + 0x160) + 0x70,
                     *(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x38) +
                      0x90));
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x38);
        if (*(longlong *)(lVar2 + 0x98) == 0) {
          FUN_00414ad0(lVar2 + 0x98,param_2);
        }
      }
      else {
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x58);
        (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(local_20 + 0x58));
        FUN_0181ee20(*(undefined8 *)(local_20 + 0x18),local_28);
        FUN_004ba980(local_28,&local_38);
        iVar4 = FUN_004170c0(&DAT_018352dc,local_38,1);
        FUN_00416e20(&local_38,1,iVar4 + 1);
      }
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68);
    (**(code **)(*plVar1 + 200))(plVar1,*(undefined4 *)(param_1 + 0x11c),L"</uses>");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68);
    (**(code **)(*plVar1 + 200))(plVar1,*(undefined4 *)(param_1 + 0x11c),local_38);
    local_88 = &LAB_01835334;
    FUN_00416cd0(&local_70,3,L"<uses unit=\"",param_2);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68);
    (**(code **)(*plVar1 + 200))(plVar1,*(undefined4 *)(param_1 + 0x11c),local_70);
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 3;
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
    FUN_00410f20(local_30);
  }
  FUN_00414560(&local_70,4);
  FUN_00414560(&local_40,2);
  return;
}

