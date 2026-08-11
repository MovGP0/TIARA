/* Ghidra address: 00656570 */
/* Ghidra symbol: FUN_00656570 */


void FUN_00656570(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined1 *local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  longlong *local_20;
  
  local_80 = auStack_c8;
  puVar2 = auStack_c8;
  if (((((param_1[0x8d] != 0) && (puVar2 = auStack_c8, (*PTR_DAT_02004258 & 1) != 0)) &&
       (puVar2 = auStack_c8, (*(ushort *)((longlong)param_1 + 0x34) & 8) == 0)) &&
      ((puVar2 = auStack_c8, (*(uint *)((longlong)param_1 + 0xa4) & 0x200) == 0 &&
       (puVar2 = auStack_c8, (*(uint *)(param_1 + 0x14) & 0x800000) == 0)))) &&
     (puVar2 = auStack_c8, (char)param_1[0x59] != '\0')) {
    pcVar4 = (code *)FUN_00411550(param_1,0xffbc);
    cVar3 = (*pcVar4)(param_1,param_2);
    puVar2 = local_80;
    if (cVar3 != '\0') {
      return;
    }
  }
  local_80 = puVar2;
  if (((*(longlong *)PTR_DAT_02004028 != 0) && (param_1[0x8d] != 0)) &&
     (((*(ushort *)((longlong)param_1 + 0x34) & 8) == 0 &&
      ((((*(uint *)((longlong)param_1 + 0xa4) & 0x200) == 0 &&
        ((*(uint *)(param_1 + 0x14) & 0x800000) == 0)) &&
       (cVar3 = (**(code **)PTR_DAT_02004028)(param_1,param_2,param_1 + 0x10), cVar3 != '\0')))))) {
    return;
  }
  iVar1 = *param_2;
  if (iVar1 < 0x200) {
    if (iVar1 < 0x22) {
      if (iVar1 == 0x21) {
        cVar3 = FUN_00656400(param_1,param_2,0);
        if (cVar3 != '\0') {
          if (*(longlong *)(param_2 + 6) != 0) {
            return;
          }
          cVar3 = FUN_0065be20(param_1);
          if (cVar3 == '\0') {
            return;
          }
          FUN_0064fe70(param_1,param_2);
          return;
        }
      }
      else if (iVar1 == 7) {
        local_20 = (longlong *)FUN_007f9b70(param_1,1);
        if ((local_20 != (longlong *)0x0) &&
           ((((*(ushort *)((longlong)local_20 + 0x34) & 0x10) == 0 || (local_20[0xf] == 0)) &&
            (cVar3 = (**(code **)(*local_20 + 0x2c8))(local_20,param_1), cVar3 == '\0')))) {
          return;
        }
      }
      else if (iVar1 == 8) {
        if ((*(uint *)((longlong)param_1 + 0xa4) & 0x20) != 0) {
          return;
        }
      }
      else if (iVar1 == 0x1f) {
        lVar7 = thunk_FUN_041d93e9();
        lVar8 = FUN_0065b870(param_1);
        if (((lVar7 == lVar8) && (DAT_01df5bf8 != 0)) &&
           (*(longlong **)(DAT_01df5bf8 + 0x78) == param_1)) {
          FUN_0064fca0(DAT_01df5bf8,0x1f,0,0);
        }
      }
    }
    else {
      if (iVar1 == 0x84) {
        FUN_0064fe70(param_1,param_2);
        if (*(longlong *)(param_2 + 6) != -1) {
          return;
        }
        local_60 = param_2 + 4;
        local_68 = (int)(short)*local_60;
        local_64 = (int)*(short *)((longlong)param_2 + 0x12);
        local_88 = FUN_0064d3a0(param_1,&local_68);
        local_a8 = local_a8 & 0xffffff00;
        lVar7 = FUN_00656230(param_1,&local_88,0,0);
        if (lVar7 == 0) {
          return;
        }
        param_2[6] = 1;
        param_2[7] = 0;
        return;
      }
      if ((iVar1 - 0x100U < 10) && (cVar3 = FUN_0064eb50(param_1), cVar3 != '\0')) {
        return;
      }
    }
  }
  else if (iVar1 < 0xb048) {
    if (iVar1 == 0xb047) {
      local_20 = (longlong *)FUN_007f9b70(param_1,1);
      if ((local_20 != (longlong *)0x0) && (local_20 != param_1)) {
        FUN_0064fca0(local_20,0xb047,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      }
    }
    else if (iVar1 - 0x200U < 0xf) {
      local_50 = param_1[0x26];
      plVar5 = *(longlong **)(local_50 + 0x10);
      if ((plVar5 != (longlong *)0x0) &&
         (uVar9 = (**(code **)(*plVar5 + 8))(plVar5), (uVar9 & 1) != 0)) {
        (**(code **)(**(longlong **)(local_50 + 0x10) + 0x20))
                  (*(longlong **)(local_50 + 0x10),param_2);
      }
      if (*param_2 == 0x200) {
        local_78 = (int)(short)param_2[4];
        local_74 = (int)*(short *)((longlong)param_2 + 0x12);
        local_70 = local_74;
        local_6c = local_78;
        local_40 = FUN_0064d1f0(param_1,&local_78);
        DAT_01df5bf8 = FUN_00648930();
        local_48 = DAT_01df5bf8;
        if (DAT_01df5bf8 == 0) {
          local_48 = FUN_0064acf0(&local_40,1);
        }
        if (param_1[0x8a] != local_48) {
          if ((((param_1[0x8a] != 0) && (DAT_01df5bf8 == 0)) ||
              ((DAT_01df5bf8 != 0 && (param_1[0x8a] == DAT_01df5bf8)))) ||
             ((DAT_01df5bf8 != 0 && (*(longlong *)(DAT_01df5bf8 + 0x78) == param_1[0x8a])))) {
            FUN_0064fca0(param_1[0x8a],0xb014,0,0);
          }
          if (param_1[0x8a] != 0) {
            FUN_004d2d90(param_1[0x8a],param_1);
          }
          param_1[0x8a] = local_48;
          if (local_48 != 0) {
            FUN_004d26c0(local_48,param_1);
          }
          if (((param_1[0x8a] != 0) && (DAT_01df5bf8 == 0)) ||
             ((DAT_01df5bf8 != 0 && (param_1[0x8a] == DAT_01df5bf8)))) {
            FUN_0064fca0(param_1[0x8a],0xb013,0,0);
          }
        }
        if ((char)param_1[0x89] == '\0') {
          *(undefined1 *)(param_1 + 0x89) = 1;
          local_34 = 2;
          local_30 = FUN_0065b870(param_1);
          local_28 = 0xffffffff;
          local_38 = 0x18;
          thunk_FUN_0397cebd(&local_38);
        }
      }
      cVar3 = FUN_00656320(param_1,param_2);
      if (cVar3 != '\0') {
        if (*(longlong *)(param_2 + 6) != 0) {
          return;
        }
        cVar3 = FUN_0065be20(param_1);
        if (cVar3 == '\0') {
          return;
        }
        uVar6 = FUN_0065b870(param_1);
        thunk_FUN_03e425c0(uVar6,*param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
        ;
        return;
      }
    }
    else if (iVar1 == 0x240) {
      local_58 = param_1[0x26];
      plVar5 = *(longlong **)(local_58 + 0x10);
      if ((plVar5 != (longlong *)0x0) &&
         (uVar9 = (**(code **)(*plVar5 + 8))(plVar5), (uVar9 & 2) != 0)) {
        (**(code **)(**(longlong **)(local_58 + 0x10) + 0x20))
                  (*(longlong **)(local_58 + 0x10),param_2);
      }
    }
    else if (iVar1 == 0x2a3) {
      *(undefined1 *)(param_1 + 0x89) = 0;
      if (param_1[0x8a] == 0) {
        FUN_0064fca0(param_1,0xb014,0,0);
      }
      else {
        FUN_0064fca0(param_1[0x8a],0xb014,0,0);
      }
      param_1[0x8a] = 0;
    }
  }
  else {
    if (iVar1 == 0xb04a) {
      if ((char)param_2[2] != '\0') {
        FUN_0065ed10(param_1,1);
      }
      (**(code **)(*param_1 + 0x1e8))(param_1);
      if ((char)param_2[2] == '\0') {
        return;
      }
      FUN_0065ed10(param_1,0);
      return;
    }
    if (iVar1 == 0xb04e) {
      if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
        plVar5 = (longlong *)FUN_00781840();
        cVar3 = (**(code **)(*plVar5 + 0x90))(plVar5);
        if (cVar3 != '\0') {
          uVar6 = FUN_0065b870(param_1);
          (**(code **)PTR_DAT_02005bc8)(uVar6,&LAB_00656efe,&LAB_00656efe);
          uVar6 = FUN_0065b870(param_1);
          local_a8 = 0;
          local_a0 = 0;
          local_98 = 0x77;
          thunk_FUN_041cc6e2(uVar6,0,0,0);
        }
      }
    }
    else if (iVar1 == 0xb051) {
      FUN_00654c30(param_1,param_2);
    }
  }
  if ((*param_2 == DAT_020122b0) && (*param_2 != 0)) {
    FUN_0065cd90(param_1);
  }
  else {
    FUN_0064fe70(param_1,param_2);
    if (*param_2 == 0x128) {
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}

