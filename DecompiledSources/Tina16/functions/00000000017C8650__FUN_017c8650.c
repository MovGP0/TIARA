/* Ghidra address: 017c8650 */
/* Ghidra symbol: FUN_017c8650 */


double * FUN_017c8650(double *param_1,longlong param_2,char *param_3)

{
  double dVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  char *pcVar8;
  double dVar9;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  cVar2 = *(char *)(param_2 + 0x4c8);
  if (cVar2 == '\a') {
    local_58 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(param_2 + 0x4dc) * 8)
               - *(double *)
                  (*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(param_2 + 0x4e0) * 8);
    local_50 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)*(int *)(param_2 + 0x4dc) * 8)
               - *(double *)
                  (*(longlong *)(param_2 + 0x120) + (longlong)*(int *)(param_2 + 0x4e0) * 8);
  }
  else if (cVar2 == '\b') {
    pcVar8 = (char *)FUN_01b05ad0(*(undefined8 *)(param_2 + 0x4d0),3,0,&local_79,&local_7a,&local_7b
                                 );
    if ((*(char *)(param_2 + 0x339) == '\0') || (*pcVar8 != '\x01')) {
      iVar4 = FUN_01b05690(*(undefined8 *)(param_2 + 0x4d0),1,1);
      local_58 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8);
      local_50 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar4 * 8);
    }
    else {
      local_58 = *(double *)PTR_DAT_020025e0;
      local_50 = *(double *)(PTR_DAT_020025e0 + 8);
    }
  }
  else if (cVar2 == '\x05') {
    pdVar7 = (double *)
             FUN_01b05ad0(*(undefined8 *)(param_2 + 0x4d0),2,1,&local_79,&local_7a,&local_7b);
    dVar9 = *pdVar7;
    pdVar7 = (double *)
             FUN_01b05ad0(*(undefined8 *)(param_2 + 0x4d0),2,3,&local_79,&local_7a,&local_7b);
    dVar1 = *pdVar7;
    if (*(char *)(param_2 + 0x12f4) == '\x01') {
      local_58 = (double)FUN_0040bcd0(dVar1 * 0.017453292519943295);
      local_58 = dVar9 * local_58;
      local_50 = (double)FUN_0040bdd0(dVar1 * 0.017453292519943295);
      local_50 = dVar9 * local_50;
    }
    else {
      local_58 = (double)FUN_0040bdd0(dVar1 * 0.017453292519943295);
      local_58 = -dVar9 * local_58;
      local_50 = (double)FUN_0040bcd0(dVar1 * 0.017453292519943295);
      local_50 = dVar9 * local_50;
    }
  }
  else if (cVar2 == '\x03') {
    sVar3 = (**(code **)(**(longlong **)(param_2 + 0x4e8) + 0xf8))(*(longlong **)(param_2 + 0x4e8));
    if (sVar3 == 0xa4) {
      iVar4 = FUN_01b05600(*(undefined8 *)(param_2 + 0x4d0),10);
      iVar5 = FUN_01b05600(*(undefined8 *)(param_2 + 0x4d0),3);
      local_58 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8) -
                 *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar5 * 8);
      local_50 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar4 * 8) -
                 *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar5 * 8);
    }
    else {
      sVar3 = (**(code **)(**(longlong **)(param_2 + 0x4e8) + 0xf8))
                        (*(longlong **)(param_2 + 0x4e8));
      if (sVar3 == 0x3e) {
        iVar4 = FUN_01b05600(*(undefined8 *)(param_2 + 0x4d0),1);
        iVar5 = FUN_01b05600(*(undefined8 *)(param_2 + 0x4d0),2);
        local_58 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8) -
                   *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar5 * 8);
        local_50 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar4 * 8) -
                   *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar5 * 8);
      }
      else {
        sVar3 = (**(code **)(**(longlong **)(param_2 + 0x4e8) + 0xf8))
                          (*(longlong **)(param_2 + 0x4e8));
        if (sVar3 == 0x66) {
          iVar4 = FUN_01b05600(*(undefined8 *)(param_2 + 0x4d0),3);
          iVar5 = FUN_01b05600(*(undefined8 *)(param_2 + 0x4d0),1);
          local_58 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8) -
                     *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar5 * 8);
          local_50 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar4 * 8) -
                     *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar5 * 8);
        }
        else {
          pdVar7 = (double *)
                   FUN_01b05ad0(*(undefined8 *)(param_2 + 0x4d0),2,1,&local_79,&local_7a,&local_7b);
          dVar9 = *pdVar7;
          pdVar7 = (double *)
                   FUN_01b05ad0(*(undefined8 *)(param_2 + 0x4d0),2,3,&local_79,&local_7a,&local_7b);
          dVar1 = *pdVar7;
          if (*(char *)(param_2 + 0x12f4) == '\x01') {
            local_58 = (double)FUN_0040bcd0(dVar1 * 0.017453292519943295);
            local_58 = dVar9 * local_58;
            local_50 = (double)FUN_0040bdd0(dVar1 * 0.017453292519943295);
            local_50 = dVar9 * local_50;
          }
          else {
            local_58 = (double)FUN_0040bdd0(dVar1 * 0.017453292519943295);
            local_58 = -dVar9 * local_58;
            local_50 = (double)FUN_0040bcd0(dVar1 * 0.017453292519943295);
            local_50 = dVar9 * local_50;
          }
        }
      }
    }
  }
  else {
    local_58 = *(double *)PTR_DAT_02002618;
    local_50 = *(double *)(PTR_DAT_02002618 + 8);
  }
  cVar2 = *param_3;
  if (cVar2 == '\x02') {
    pcVar8 = (char *)FUN_01b05ad0(*(undefined8 *)(param_3 + 0x10),3,0,&local_79,&local_7a,&local_7b)
    ;
    if ((*(char *)(param_2 + 0x339) == '\0') || (*pcVar8 != '\x01')) {
      iVar4 = FUN_01b05690(*(undefined8 *)(param_3 + 0x10),1,1);
      local_68 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8);
      local_60 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar4 * 8);
    }
    else {
      local_68 = *(double *)PTR_DAT_020025e0;
      local_60 = *(double *)(PTR_DAT_020025e0 + 8);
    }
  }
  else if (cVar2 == '\x04') {
    pcVar8 = (char *)FUN_01b05ad0(*(undefined8 *)(param_3 + 0x10),4,0,&local_79,&local_7a,&local_7b)
    ;
    if ((*(char *)(param_2 + 0x339) == '\0') || (*pcVar8 != '\x01')) {
      iVar4 = FUN_01b05690(*(undefined8 *)(param_3 + 0x10),1,1);
      local_78 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8);
      local_70 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar4 * 8);
      dVar9 = (double)FUN_00c44590(&local_78);
      if (dVar9 == 0.0) {
        local_68 = *(double *)PTR_DAT_020025e0;
        local_60 = *(double *)(PTR_DAT_020025e0 + 8);
      }
      else {
        FUN_00c44790(PTR_DAT_02003900,&local_78,&local_78);
        FUN_00c44500(&local_78,PTR_DAT_02002618,&local_78);
        local_68 = local_78;
        local_60 = local_70;
      }
    }
    else {
      local_68 = *(double *)PTR_DAT_020025e0;
      local_60 = *(double *)(PTR_DAT_020025e0 + 8);
    }
  }
  else if (cVar2 == '\x03') {
    iVar4 = FUN_01b05600(*(undefined8 *)(param_3 + 0x10),3);
    iVar5 = FUN_01b05600(*(undefined8 *)(param_3 + 0x10),4);
    iVar6 = FUN_01b05690(*(undefined8 *)(param_3 + 0x10),1,1);
    local_78 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar6 * 8) * 0.5;
    local_70 = -*(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar6 * 8) * 0.5;
    local_68 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8) -
               *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar5 * 8);
    local_60 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar4 * 8) -
               *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar5 * 8);
    FUN_00c44720(&local_78,&local_68,&local_68);
  }
  else if (cVar2 == '\v') {
    local_68 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(param_3 + 8) * 8);
    local_60 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)*(int *)(param_3 + 8) * 8);
    local_58 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(param_3 + 4) * 8);
    local_50 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)*(int *)(param_3 + 4) * 8);
  }
  else {
    local_68 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(param_3 + 4) * 8) -
               *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(param_3 + 8) * 8);
    local_60 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)*(int *)(param_3 + 4) * 8) -
               *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)*(int *)(param_3 + 8) * 8);
  }
  dVar9 = (double)FUN_00c44590(&local_58);
  if (dVar9 <= 0.0) {
    FUN_01b04ef0(0x102,0x1580,*(undefined8 *)(param_2 + 0x1310),0);
    local_68 = *(double *)PTR_DAT_020025e0;
    local_60 = *(double *)(PTR_DAT_020025e0 + 8);
  }
  else {
    FUN_00c44790(&local_68,&local_58,&local_68);
  }
  FUN_017c82f0(&local_68,&local_60);
  *param_1 = local_68;
  param_1[1] = local_60;
  return param_1;
}

