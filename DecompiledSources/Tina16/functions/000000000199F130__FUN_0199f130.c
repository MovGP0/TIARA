/* Ghidra address: 0199f130 */
/* Ghidra symbol: FUN_0199f130 */


ulonglong FUN_0199f130(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined8 unaff_RSI;
  ulonglong uVar12;
  byte bVar13;
  bool bVar14;
  double dVar15;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 *local_50;
  longlong local_40;
  int local_30;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  uVar12 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  local_40 = param_1;
  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  if ((((sVar2 == 10) || (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x6d)) ||
      (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xca)) ||
     ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xd4 ||
      (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xde)))) {
    cVar1 = FUN_0199f0e0(auStack_78,10);
    local_58 = &local_2a;
    local_50 = &local_2b;
    lVar6 = FUN_01cfde70(param_2,2,0,&local_29);
    if (((*(char *)(lVar6 + 8) == '\x01') && ((*PTR_DAT_020052b8 != '\0' || (param_3 == '\x01'))))
       || (cVar1 == '\x01')) {
      uVar12 = 0;
    }
  }
  else {
    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (((sVar2 == 0x4f) ||
        ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xcb ||
         (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xd5)))) ||
       (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xdf)) {
      cVar1 = FUN_0199f0e0(auStack_78,0xb);
      local_58 = &local_2a;
      local_50 = &local_2b;
      puVar7 = (undefined8 *)FUN_01cfde70(param_2,2,0,&local_29);
      dVar15 = (double)FUN_0040c850(*puVar7);
      if (((0.9999999999 < dVar15 / 1e+30) && (param_3 == '\x01')) || (cVar1 == '\x01')) {
        uVar12 = 0;
      }
    }
    else if ((*PTR_DAT_020052b8 == '\0') ||
            (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0x34)) {
      if ((*PTR_DAT_020052b8 == '\0') ||
         (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0x3b)) {
        sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
        if (sVar2 == 99) {
          local_58 = &local_2a;
          local_50 = &local_2b;
          pcVar8 = (char *)FUN_01cfde70(param_2,1,0,&local_29);
          if (*pcVar8 == '\0') {
            uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
            uVar5 = (**(code **)(*param_2 + 0x210))(param_2,2);
            FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
            uVar4 = (**(code **)(*param_2 + 0x210))(param_2,1);
            uVar5 = (**(code **)(*param_2 + 0x210))(param_2,3);
            FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
          }
          else {
            uVar4 = (**(code **)(*param_2 + 0x210))(param_2,1);
            uVar5 = (**(code **)(*param_2 + 0x210))(param_2,2);
            FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
            uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
            uVar5 = (**(code **)(*param_2 + 0x210))(param_2,3);
            FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
          }
          uVar12 = 0;
        }
        else {
          uVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
          cVar1 = FUN_01d3f310(uVar3,&local_30);
          if (cVar1 == '\0') {
            sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
            if (sVar2 == 0x25) {
              cVar1 = FUN_0199f0e0(auStack_78,3);
              if ((param_3 == '\x01') || (cVar1 == '\x01')) {
                uVar12 = 0;
              }
            }
            else {
              sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
              if ((sVar2 == 0x3f) ||
                 (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x6a)) {
                local_58 = &local_2a;
                local_50 = &local_2b;
                pcVar8 = (char *)FUN_01cfde70(param_2,2,0,&local_29);
                bVar13 = *pcVar8 + 1;
                uVar9 = (**(code **)(*param_2 + 0xf8))(param_2);
                if ((short)uVar9 == 0x3f) {
                  uVar4 = (**(code **)(*param_2 + 0x210))(param_2,1);
                  uVar5 = (**(code **)(*param_2 + 0x210))(param_2,2);
                  FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                  if (bVar13 == 3) {
                    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
                    uVar5 = (**(code **)(*param_2 + 0x210))(param_2,1);
                    FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                  }
                }
                else {
                  if (bVar13 < 8) {
                    bVar14 = ((int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1) << (bVar13 & 0x1f) & 6U
                             ) != 0;
                  }
                  else {
                    bVar14 = false;
                  }
                  if (!bVar14) {
                    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
                    uVar5 = (**(code **)(*param_2 + 0x210))(param_2,1);
                    FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                  }
                }
                uVar12 = 0;
              }
              else {
                sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                if (((sVar2 == 0xe) ||
                    (((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x43 ||
                      (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x10)) ||
                     (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xd9)))) ||
                   (((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xda ||
                     (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xf)) ||
                    (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xd)))) {
                  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                  if (((sVar2 == 0xe) ||
                      (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x43)) ||
                     (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xd)) {
                    cVar1 = FUN_0199f0e0(auStack_78,4);
                  }
                  else {
                    cVar1 = FUN_0199f0e0(auStack_78,6);
                  }
                  if (cVar1 == '\x01') {
                    uVar12 = 0;
                  }
                }
                else {
                  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                  if (((sVar2 == 6) ||
                      (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x22)) ||
                     ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x5f ||
                      ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 8 ||
                       (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x62)))))) {
                    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                    if ((sVar2 == 8) ||
                       (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x62)) {
                      cVar1 = FUN_0199f0e0(auStack_78,4);
                    }
                    else {
                      sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                      if ((sVar2 == 6) ||
                         (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x22)) {
                        cVar1 = FUN_0199f0e0(auStack_78,3);
                      }
                      else {
                        cVar1 = FUN_0199f0e0(auStack_78,2);
                      }
                    }
                    if (cVar1 == '\x01') {
                      uVar12 = 0;
                    }
                  }
                  else {
                    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                    if (sVar2 == 0xc) {
                      cVar1 = FUN_0199f0e0(auStack_78,4);
                      if (cVar1 != '\x01') {
                        uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
                        uVar5 = (**(code **)(*param_2 + 0x210))(param_2,1);
                        FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                        uVar4 = (**(code **)(*param_2 + 0x210))(param_2,2);
                        uVar5 = (**(code **)(*param_2 + 0x210))(param_2,3);
                        FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                      }
                      uVar12 = 0;
                    }
                    else {
                      sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                      if ((((sVar2 == 0xb) ||
                           (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x6e)) ||
                          (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xcc)) ||
                         ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xd6 ||
                          (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xe0)))) {
                        cVar1 = FUN_0199f0e0(auStack_78,10);
                        if (cVar1 == '\x01') {
                          uVar12 = 0;
                        }
                      }
                      else {
                        sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                        if (((sVar2 == 0x50) ||
                            ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xcd ||
                             (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xd7)))) ||
                           (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0xe1)) {
                          cVar1 = FUN_0199f0e0(auStack_78,0xb);
                          if (cVar1 == '\x01') {
                            uVar12 = 0;
                          }
                        }
                        else {
                          sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                          if ((((((sVar2 == 5) ||
                                 (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x21))
                                || (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x77))
                               || ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 4 ||
                                   (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x27))
                                  )) || (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                        sVar2 == 0x460)) ||
                             ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x3d ||
                              (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x65)))) {
                            uVar12 = 0;
                          }
                          else {
                            sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                            if ((sVar2 == 7) ||
                               ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x3e ||
                                (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x66))))
                            {
                              sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                              if (sVar2 == 0x66) {
                                uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
                                uVar5 = (**(code **)(*param_2 + 0x210))(param_2,2);
                                FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                              }
                              else {
                                uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
                                uVar5 = (**(code **)(*param_2 + 0x210))(param_2,1);
                                FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                              }
                              uVar12 = 0;
                            }
                            else {
                              sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                              if ((((sVar2 == 0x13) ||
                                   (((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x12
                                     || (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                        sVar2 == 0x11)) ||
                                    (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x14)
                                    ))) || ((((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                              sVar2 == 0x2f ||
                                              (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                              sVar2 == 0x2e)) ||
                                             ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                              sVar2 == 0x45 ||
                                              ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                               sVar2 == 0x4a ||
                                               (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                               sVar2 == 0x4b)))))) ||
                                            (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                            sVar2 == 0x46)))) ||
                                 ((((((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                      sVar2 == 0x47 ||
                                      (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                      sVar2 == 0x48)) ||
                                     (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x67
                                     )) || ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                            sVar2 == 0x49 ||
                                            (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                            sVar2 == 0x4e)))) ||
                                   ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x31
                                    || ((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                        sVar2 == 0x92 ||
                                        (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                        sVar2 == 0x20)))))) ||
                                  (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x93)))
                                 ) {
                                uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
                                uVar5 = (**(code **)(*param_2 + 0x210))(param_2,1);
                                FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                uVar4 = (**(code **)(*param_2 + 0x210))(param_2,2);
                                uVar5 = (**(code **)(*param_2 + 0x210))(param_2,3);
                                FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                                if ((sVar2 == 0x2f) ||
                                   (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x4a))
                                {
                                  uVar4 = (**(code **)(*param_2 + 0x210))(param_2,3);
                                  uVar5 = (**(code **)(*param_2 + 0x210))(param_2,4);
                                  FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                }
                                else {
                                  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                                  if ((sVar2 == 0x48) ||
                                     (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x67
                                     )) {
                                    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,1);
                                    uVar5 = (**(code **)(*param_2 + 0x210))(param_2,4);
                                    FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                  }
                                  else {
                                    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                                    if ((sVar2 == 0x49) ||
                                       (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2),
                                       sVar2 == 0x4b)) {
                                      uVar4 = (**(code **)(*param_2 + 0x210))(param_2,4);
                                      uVar5 = (**(code **)(*param_2 + 0x210))(param_2,5);
                                      FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                    }
                                    else {
                                      sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                                      if (sVar2 == 0x4e) {
                                        uVar4 = (**(code **)(*param_2 + 0x210))(param_2,1);
                                        uVar5 = (**(code **)(*param_2 + 0x210))(param_2,4);
                                        FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                        uVar4 = (**(code **)(*param_2 + 0x210))(param_2,5);
                                        uVar5 = (**(code **)(*param_2 + 0x210))(param_2,6);
                                        FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                        uVar4 = (**(code **)(*param_2 + 0x210))(param_2,5);
                                        uVar5 = (**(code **)(*param_2 + 0x210))(param_2,7);
                                        FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                      }
                                    }
                                  }
                                }
                                uVar12 = 0;
                              }
                              else {
                                sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                                if ((sVar2 == 0x33) ||
                                   (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x6f))
                                {
                                  cVar1 = FUN_0199f0e0(auStack_78,3);
                                  if (cVar1 == '\x01') {
                                    uVar12 = 0;
                                  }
                                }
                                else {
                                  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                                  if (sVar2 == 0xa4) {
                                    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
                                    uVar5 = (**(code **)(*param_2 + 0x210))(param_2,1);
                                    FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,1);
                                    uVar5 = (**(code **)(*param_2 + 0x210))(param_2,2);
                                    FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,2);
                                    uVar5 = (**(code **)(*param_2 + 0x210))(param_2,3);
                                    FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,3);
                                    uVar5 = (**(code **)(*param_2 + 0x210))(param_2,4);
                                    FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,4);
                                    uVar5 = (**(code **)(*param_2 + 0x210))(param_2,5);
                                    FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,5);
                                    uVar5 = (**(code **)(*param_2 + 0x210))(param_2,9);
                                    FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                    local_58 = &local_2a;
                                    local_50 = &local_2b;
                                    pcVar8 = (char *)FUN_01cfde70(param_2,4,0,&local_29);
                                    cVar1 = *pcVar8;
                                    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0xb);
                                    uVar5 = (**(code **)(*param_2 + 0x210))(param_2,0xc);
                                    FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                    if (cVar1 == '\x03') {
                                      uVar4 = (**(code **)(*param_2 + 0x210))(param_2,10);
                                      uVar5 = (**(code **)(*param_2 + 0x210))(param_2,0xb);
                                      FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                                    }
                                    uVar12 = 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            iVar10 = 0;
            iVar11 = local_30;
            if (-1 < local_30 + -1) {
              do {
                uVar4 = (**(code **)(*param_2 + 0x210))(param_2,iVar10);
                uVar5 = (**(code **)(*param_2 + 0x210))(param_2,local_30 + iVar10);
                FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
                iVar10 = iVar10 + 1;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            uVar12 = 0;
          }
        }
      }
      else {
        local_58 = &local_2a;
        local_50 = &local_2b;
        pcVar8 = (char *)FUN_01cfde70(param_2,1,0,&local_29);
        cVar1 = *pcVar8;
        local_58 = &local_2a;
        local_50 = &local_2b;
        puVar7 = (undefined8 *)FUN_01cfde70(param_2,2,0,&local_29);
        dVar15 = (double)FUN_0040c850(*puVar7);
        if (0.9999999999 < dVar15 / 1e+30) {
          if (cVar1 == '\0') {
            uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
            uVar5 = (**(code **)(*param_2 + 0x210))(param_2,2);
            FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
          }
          else {
            uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
            uVar5 = (**(code **)(*param_2 + 0x210))(param_2,1);
            FUN_016aef60(*(undefined8 *)(local_40 + 0x460),uVar4,uVar5);
          }
          uVar12 = 0;
        }
      }
    }
    else {
      local_58 = &local_2a;
      local_50 = &local_2b;
      pcVar8 = (char *)FUN_01cfde70(param_2,1,0,&local_29);
      cVar1 = *pcVar8;
      local_58 = &local_2a;
      local_50 = &local_2b;
      puVar7 = (undefined8 *)FUN_01cfde70(param_2,2,0,&local_29);
      if ((cVar1 == '\0') && (dVar15 = (double)FUN_0040c850(*puVar7), 0.9999999999 < dVar15 / 1e+30)
         ) {
        uVar12 = 0;
      }
    }
  }
  return uVar12 & 0xffffffff;
}

