/* Ghidra address: 010dd4f0 */
/* Ghidra symbol: FUN_010dd4f0 */


longlong * FUN_010dd4f0(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  double *pdVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 local_98;
  undefined1 local_90;
  longlong *local_80;
  char local_73;
  char local_72;
  char local_71;
  longlong *local_70;
  longlong local_68;
  double local_60;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined8 local_50;
  double local_48 [5];
  
  local_50 = 0;
  local_80 = param_1;
  local_73 = param_3;
  local_72 = param_4;
  if ((*PTR_DAT_02003720 == '\0') || (*PTR_DAT_02002b78 != '\0')) {
    (**(code **)(*DAT_0202f9a8 + 0x90))(DAT_0202f9a8);
  }
  cVar2 = FUN_0198a580(local_80);
  if (cVar2 != '\x04') {
    if (local_72 == '\0') {
      FUN_010dd2f0(auStack_c8,0x46293e5939a08cea,&LAB_010de184);
    }
    else {
      cVar2 = FUN_0198a580(local_80);
      plVar1 = local_80;
      if (cVar2 == '\x06') {
        iVar4 = (**(code **)(*local_80 + 0x210))(local_80,0);
        iVar5 = (**(code **)(*plVar1 + 0x210))(plVar1,1);
        if (local_73 == '\0') {
          FUN_010dd2f0(auStack_c8,
                       *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8) -
                       *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar5 * 8),
                       &DAT_010de174);
        }
        else {
          cVar2 = FUN_017d1390(*(undefined8 *)(param_2 + 0x4c0));
          if ((cVar2 == '\0') &&
             (iVar7 = FUN_017d1380(*(undefined8 *)(param_2 + 0x4c0)), iVar7 == 2)) {
            local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,iVar5);
            FUN_017d1750(local_48,*(undefined8 *)(param_2 + 0x4c0),1,iVar4);
            dVar10 = (double)FUN_00c44590(local_48);
            dVar10 = dVar10 / 1.4142135623730951;
          }
          else {
            local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
            dVar10 = (double)FUN_017d17e0(*(undefined8 *)(param_2 + 0x4c0),iVar4,iVar5,1);
          }
          FUN_010dd2f0(auStack_c8,dVar10,&DAT_010de174);
        }
      }
      else {
        FUN_010dd2f0(auStack_c8,0x46293e5939a08cea,&DAT_010de174);
      }
    }
    goto LAB_010de0d9;
  }
  iVar4 = FUN_014b8310(*(undefined8 *)(param_2 + 0x2b0),*(undefined4 *)(param_2 + 0x2d8),local_80);
  if (*(int *)(param_2 + 0x2d8) < iVar4) {
    FUN_010dd2f0(auStack_c8,0x46293e5939a08cea,&DAT_010de174);
    goto LAB_010de0d9;
  }
  local_68 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + -8 + (longlong)iVar4 * 8);
  if (((*(char *)(local_68 + 5) != '\x02') &&
      (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0x24)) &&
     (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0x6c)) {
    FUN_010dd2f0(auStack_c8,0x46293e5939a08cea,&DAT_010de174);
    goto LAB_010de0d9;
  }
  iVar4 = FUN_01b05600(local_68,1);
  iVar5 = FUN_01b05600(local_68,2);
  if (local_72 != '\0') {
    if (local_73 == '\0') {
      FUN_010dd2f0(auStack_c8,
                   *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8) -
                   *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar5 * 8),&DAT_010de174);
    }
    else {
      local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,1);
      local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_,2);
      local_98 = 1;
      local_90 = 1;
      FUN_01397500(local_48,param_2,local_80,local_72);
      FUN_010dd2f0(auStack_c8,local_48[0],&DAT_010de174);
    }
  }
  sVar3 = (**(code **)(*local_80 + 0xf8))(local_80);
  if (((((sVar3 == 10) || (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 == 0x4f)) ||
       ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 == 0x6d ||
        ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 == 0xca ||
         (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 == 0xcb)))))) ||
      (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 == 0xd4)) ||
     (((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 == 0xd5 ||
       (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 == 0xde)) ||
      (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 == 0xdf)))) {
    plVar1 = local_80;
    if (*(char *)(param_2 + 0x339) == '\0') {
      local_71 = '\0';
    }
    else {
      uVar6 = FUN_01cfd2d0(local_80);
      local_a8 = &local_53;
      local_a0 = &local_51;
      pcVar8 = (char *)FUN_01cfde70(plVar1,uVar6,0,&local_52);
      local_71 = *pcVar8;
    }
  }
  sVar3 = (**(code **)(*local_80 + 0xf8))(local_80);
  if ((((((((sVar3 != 0x10) && (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xd9))
          && ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xda &&
              (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xe)))) &&
         ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 10 || (local_71 != '\x02'))))
        && ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0x4f ||
            (local_71 != '\x02')))) &&
       ((((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0x6d || (local_71 != '\x02'))
         && ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xca ||
             (local_71 != '\x02')))) &&
        ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xcb || (local_71 != '\x02')))
        ))) && ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xd4 ||
                (local_71 != '\x02')))) &&
     (((((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xd5 || (local_71 != '\x02'))
        && ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xde ||
            (local_71 != '\x02')))) &&
       ((((((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xdf ||
            (local_71 != '\x02')) &&
           (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xb)) &&
          ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0x50 &&
           (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0x6e)))) &&
         (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xcc)) &&
        ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xcd &&
         (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xd6)))))) &&
      ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xd7 &&
       ((((((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xe0 &&
            (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xe1)) &&
           (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 9)) &&
          (((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0x6b &&
            (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 200)) &&
           ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xc9 &&
            ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xd2 &&
             (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xd3)))))))) &&
         (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xdc)) &&
        (((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xdd &&
          (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0x24)) &&
         (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0x6c)))))))))) {
    if (local_72 == '\0') {
      FUN_010dd2f0(auStack_c8,0,&LAB_010de184);
    }
    goto LAB_010de0d9;
  }
  sVar3 = (**(code **)(*local_80 + 0xf8))(local_80);
  if ((((sVar3 != 9) && (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xc9)) &&
      ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xd2 &&
       ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xd3 &&
        (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xdc)))))) &&
     ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0xdd &&
      ((sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0x24 &&
       (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 != 0x6c)))))) {
    if (local_72 == '\0') {
      if (local_73 == '\0') {
        iVar4 = FUN_01b05690(local_68,1,1);
        FUN_010dd2f0(auStack_c8,
                     *(undefined8 *)(*(longlong *)(param_2 + 0x148) + (longlong)iVar4 * 8),
                     &LAB_010de184);
      }
      else {
        local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,1);
        local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_,2);
        local_98 = 1;
        local_90 = 1;
        FUN_01397500(local_48,param_2,local_80,0);
        FUN_010dd2f0(auStack_c8,local_48[0],&LAB_010de184);
      }
    }
    goto LAB_010de0d9;
  }
  iVar4 = FUN_01b05600(local_68,1);
  iVar5 = FUN_01b05600(local_68,2);
  sVar3 = (**(code **)(*local_80 + 0xf8))(local_80);
  if (((sVar3 == 0xc9) || (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 == 0xd3)) ||
     (sVar3 = (**(code **)(*local_80 + 0xf8))(local_80), sVar3 == 0xdd)) {
    local_a8 = &local_53;
    local_a0 = &local_51;
    pdVar9 = (double *)FUN_01cfde70(local_80,3,0,&local_52);
    dVar10 = *pdVar9 / 100.0;
  }
  else {
    dVar10 = 1.0;
  }
  plVar1 = local_80;
  if (*(char *)(param_2 + 0x339) == '\0') {
    local_71 = '\0';
  }
  else {
    uVar6 = FUN_01cfd2d0(local_80);
    local_a8 = &local_53;
    local_a0 = &local_51;
    pcVar8 = (char *)FUN_01cfde70(plVar1,uVar6,0,&local_52);
    local_71 = *pcVar8;
  }
  if (local_71 == '\0') {
LAB_010ddd2a:
    local_60 = **(double **)(local_68 + 0x48) * dVar10;
  }
  else if (local_71 == '\x01') {
    local_60 = 1000000000.0;
  }
  else if (local_71 == '\x02') {
    local_60 = 1e-06;
  }
  else if (local_71 == '\x03') goto LAB_010ddd2a;
  if (local_72 == '\0') {
    if (local_73 == '\0') {
      if (local_60 == 0.0) {
        FUN_010dd2f0(auStack_c8,0x41efffffffe00000,&LAB_010de184);
      }
      else {
        FUN_010dd2f0(auStack_c8,
                     (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8) -
                     *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar5 * 8)) / local_60,
                     &LAB_010de184);
      }
    }
    else {
      local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,1);
      local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_,2);
      local_98 = 1;
      local_90 = 1;
      FUN_01397500(local_48,param_2,local_80,1);
      if (local_60 == 0.0) {
        local_48[0] = 1e+30;
      }
      else {
        local_48[0] = local_48[0] / local_60;
      }
      FUN_010dd2f0(auStack_c8,local_48[0],&LAB_010de184);
    }
  }
LAB_010de0d9:
  local_70 = DAT_0202f9a8;
  FUN_00414480(&local_50);
  return local_70;
}

