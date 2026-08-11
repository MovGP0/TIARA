/* Ghidra address: 007e1fc0 */
/* Ghidra symbol: FUN_007e1fc0 */


void FUN_007e1fc0(longlong param_1)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined4 local_98 [8];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_70 = 0;
  **(undefined4 **)(param_1 + 0xb8) = 0;
  **(undefined4 **)(param_1 + 0xb0) = 0;
  uVar4 = *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  plVar6 = (longlong *)FUN_007810f0();
  uVar7 = FUN_005ffa40(*(undefined8 *)(param_1 + 0xa8));
  uVar8 = (**(code **)(*plVar6 + 0x98))(plVar6);
  (**(code **)(*plVar6 + 0x158))
            (plVar6,local_58,
             (&DAT_01e13200)
             [(ulonglong)*(byte *)(*(longlong *)(param_1 + 0xa0) + 0x85) + (uVar8 & 0xff) * 2]);
  FUN_00779290(plVar6,uVar7,local_58,1,&local_48,0);
  local_44 = thunk_FUN_03f3ed25(local_44,*(undefined4 *)(param_1 + 0x6c),uVar4);
  local_48 = thunk_FUN_03f3ed25(local_48,*(undefined4 *)(param_1 + 0x6c),uVar4);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x70);
  uVar3 = FUN_005fce00(uVar7);
  uVar4 = thunk_FUN_03f3ed25(uVar3,*(undefined4 *)(param_1 + 0x6c),uVar4);
  FUN_005fce30(uVar7,uVar4);
  if ((*(longlong *)(param_1 + 0x60) != 0) &&
     (local_44 < *(int *)(*(longlong *)(param_1 + 0x60) + 0x90))) {
    local_44 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x90);
  }
  if ((*(longlong *)(param_1 + 0x60) != 0) &&
     (local_48 < *(int *)(*(longlong *)(param_1 + 0x60) + 0x94))) {
    local_48 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x94);
  }
  if (*(char *)(param_1 + 0x5f) == '\0') {
    **(int **)(param_1 + 0xb8) = **(int **)(param_1 + 0xb8) + local_44;
    **(int **)(param_1 + 0xb0) = **(int **)(param_1 + 0xb0) + local_48;
    uVar7 = FUN_005ffa40(*(undefined8 *)(param_1 + 0xa8));
    uVar8 = (**(code **)(*plVar6 + 0x98))(plVar6);
    (**(code **)(*plVar6 + 0x158))
              (plVar6,local_58,
               (&DAT_01e13200)
               [(ulonglong)*(byte *)(*(longlong *)(param_1 + 0xa0) + 0x85) + (uVar8 & 0xff) * 2]);
    FUN_00779130(plVar6,uVar7,local_58,1,&local_38,*(undefined4 *)(param_1 + 0x6c));
    **(int **)(param_1 + 0xb8) = **(int **)(param_1 + 0xb8) + local_30 + local_2c;
    **(int **)(param_1 + 0xb0) = **(int **)(param_1 + 0xb0) + local_38 + local_34;
    uVar7 = FUN_005ffa40(*(undefined8 *)(param_1 + 0xa8));
    (**(code **)(*plVar6 + 0x158))(plVar6,local_58,0x1b);
    FUN_00779290(plVar6,uVar7,local_58,1,&local_40,0);
    **(int **)(param_1 + 0xb0) = **(int **)(param_1 + 0xb0) + local_40;
    uVar7 = FUN_005ffa40(*(undefined8 *)(param_1 + 0xa8));
    (**(code **)(*plVar6 + 0x158))(plVar6,local_58,0x1b);
    FUN_00779130(plVar6,uVar7,local_58,0,&local_38,0);
    **(int **)(param_1 + 0xb0) = **(int **)(param_1 + 0xb0) + local_38 + local_34;
    uVar7 = FUN_005ffa40(*(undefined8 *)(param_1 + 0xa8));
    (**(code **)(*plVar6 + 0x158))(plVar6,local_58,0x1c);
    FUN_00779130(plVar6,uVar7,local_58,0,&local_38,0);
    **(int **)(param_1 + 0xb0) = **(int **)(param_1 + 0xb0) + local_38 + local_34;
    uVar7 = FUN_005ffa40(*(undefined8 *)(param_1 + 0xa8));
    (**(code **)(*plVar6 + 0x158))(plVar6,local_58,0x21);
    piVar9 = &local_40;
    FUN_00779290(plVar6,uVar7,local_58,1,piVar9,*(undefined4 *)(param_1 + 0x6c));
    **(int **)(param_1 + 0xb0) = **(int **)(param_1 + 0xb0) + local_40;
    iVar5 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x78),&DAT_007e2874);
    if (iVar5 == 0) {
      uVar7 = FUN_005ffa40(*(undefined8 *)(param_1 + 0xa8));
      (**(code **)(*plVar6 + 0x158))(plVar6,local_58,0x20);
      FUN_00779290(plVar6,uVar7,local_58,1,&local_40,0);
      uVar7 = FUN_005ffa40(*(undefined8 *)(param_1 + 0xa8));
      (**(code **)(*plVar6 + 0x158))(plVar6,local_58,0x20);
      piVar9 = &local_38;
      FUN_00779130(plVar6,uVar7,local_58,0,piVar9,0);
      **(int **)(param_1 + 0xb8) = local_3c + local_2c;
      **(int **)(param_1 + 0xb0) = **(int **)(param_1 + 0xb0) + local_40;
    }
  }
  else {
    if (((*(longlong *)(param_1 + 0x60) != 0) &&
        (*(int *)(*(longlong *)(param_1 + 0xa0) + 0x88) != -1)) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xa0) != 0)) {
      **(int **)(param_1 + 0xb0) = **(int **)(param_1 + 0xb0) + local_48;
    }
    uVar7 = FUN_005ffa40(*(undefined8 *)(param_1 + 0xa8));
    (**(code **)(*plVar6 + 0x158))(plVar6,local_58,0xc);
    piVar9 = &local_40;
    FUN_00779290(plVar6,uVar7,local_58,1,piVar9,*(undefined4 *)(param_1 + 0x6c));
    **(int **)(param_1 + 0xb8) = **(int **)(param_1 + 0xb8) + local_3c;
  }
  uVar8 = (ulonglong)piVar9 & 0xffffffff00000000;
  FUN_004238d0(&local_68,0,0,0,uVar8);
  *(undefined8 *)(param_1 + 0x70) = local_68;
  *(undefined8 *)(param_1 + 0x78) = uStack_60;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x50),&PTR_FUN_007dba80);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x4f) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x4f) = *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0xd0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4f) = 0;
  }
  sVar1 = *(short *)(*(longlong *)(param_1 + 0xa0) + 0xc0);
  if (sVar1 == 0) {
    FUN_00414b50(param_1 + 0x40,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x78));
  }
  else {
    FUN_007dc700(&local_70,sVar1);
    FUN_00416ba0(param_1 + 0x40,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x78),local_70);
  }
  FUN_0040f630(local_78,(&DAT_01e13204)[*(byte *)(param_1 + 0x4f)],3);
  FUN_0040f7c0(local_78,&DAT_007e2878,3);
  FUN_0040f840(local_78,local_98,0,3);
  FUN_007de490(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
               *(undefined8 *)(param_1 + 0x40),param_1 + 0x70,uVar8 & 0xffffffffffffff00,local_98[0]
              );
  **(int **)(param_1 + 0xb0) =
       **(int **)(param_1 + 0xb0) + (*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70));
  iVar5 = thunk_FUN_03f3ed25(0xc,*(undefined4 *)(param_1 + 0x6c),0x60);
  **(int **)(param_1 + 0xb0) = **(int **)(param_1 + 0xb0) + iVar5 + 0xb;
  iVar5 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x78),&DAT_007e2874);
  if (iVar5 != 0) {
    iVar5 = FUN_004230c0(param_1 + 0x70);
    if (**(int **)(param_1 + 0xb8) <= iVar5) {
      uVar7 = FUN_005ffa40(*(undefined8 *)(param_1 + 0xa8));
      uVar8 = (**(code **)(*plVar6 + 0x98))(plVar6);
      (**(code **)(*plVar6 + 0x158))
                (plVar6,local_58,
                 (&DAT_01e13200)
                 [(ulonglong)*(byte *)(*(longlong *)(param_1 + 0xa0) + 0x85) + (uVar8 & 0xff) * 2]);
      FUN_00779130(plVar6,uVar7,local_58,1,&local_38,*(undefined4 *)(param_1 + 0x6c));
      iVar5 = FUN_004230c0(param_1 + 0x70);
      **(int **)(param_1 + 0xb8) = iVar5 + local_30 + local_2c;
    }
  }
  FUN_00414480(&local_70);
  return;
}

