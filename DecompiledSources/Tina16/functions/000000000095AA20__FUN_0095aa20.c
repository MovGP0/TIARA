/* Ghidra address: 0095aa20 */
/* Ghidra symbol: FUN_0095aa20 */


void FUN_0095aa20(longlong param_1,longlong *param_2,longlong *param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar7;
  longlong lVar6;
  bool bVar8;
  undefined1 auStack_138 [40];
  int local_110;
  int local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_60;
  byte local_55;
  int local_54;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  undefined8 *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_80 = auStack_138;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_60 = 0;
  *param_5 = 1;
  *param_4 = 1;
  iVar4 = (**(code **)**(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x28))();
  local_110 = iVar4 + -1;
  local_4c = 0;
  if (-1 < local_110) {
    do {
      local_110 = iVar4;
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x28);
      local_40 = (undefined8 *)(**(code **)(*plVar2 + 0x28))(plVar2,local_4c);
      iVar4 = (*(code *)**(undefined8 **)local_40[5])();
      local_10c = iVar4 + -1;
      local_50 = 0;
      if (-1 < local_10c) {
        do {
          local_10c = iVar4;
          local_30 = (undefined8 *)
                     (**(code **)(*(longlong *)local_40[5] + 0x28))
                               ((longlong *)local_40[5],local_50);
          if (*(byte *)(local_30 + 7) < 8) {
            bVar8 = ((int)CONCAT71((int7)((ulonglong)local_30 >> 8),1) <<
                     (*(byte *)(local_30 + 7) & 0x1f) & 3U) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            uVar5 = FUN_00414520(&local_60);
            (**(code **)(**(longlong **)(param_1 + 0x70) + 0x60))
                      (*(longlong **)(param_1 + 0x70),local_30,uVar5,&local_55);
            if (local_55 < 0xa0) {
              bVar8 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_55 >> 3] >> (local_55 & 7) &
                      1) != 0;
            }
            else {
              bVar8 = false;
            }
            if (!bVar8) {
              *param_4 = 0;
            }
            if (local_55 != 0) {
              cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                (*(longlong **)(param_1 + 0x70),local_55,local_30,0);
              if (cVar3 == '\0') {
                *param_5 = 0;
                goto LAB_0095b999;
              }
            }
          }
          else {
            FUN_00414520(&local_60);
          }
          bVar1 = *(byte *)(local_30 + 5);
          uVar7 = (undefined7)((ulonglong)local_30 >> 8);
          if (bVar1 < 6) {
            if (bVar1 == 5) {
              if (*(byte *)(local_30 + 7) < 8) {
                bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)(local_30 + 7) & 0x1f) & 3U) != 0;
              }
              else {
                bVar8 = false;
              }
              if ((bVar8) && (cVar3 = FUN_008ff6c0(local_60), cVar3 == '\0')) {
                *param_4 = 0;
                cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                  (*(longlong **)(param_1 + 0x70),0xc,local_30);
                if (cVar3 == '\0') {
                  *param_5 = 0;
                  goto LAB_0095b999;
                }
              }
            }
            else if (bVar1 == 1) {
              local_20 = (longlong *)FUN_00410e60(&PTR_FUN_008f5158,1);
              FUN_008f9470(local_20,1);
              *(undefined1 *)(local_20 + 2) = 2;
              iVar4 = (**(code **)(*(longlong *)local_30[8] + 0x38))();
              local_54 = 0;
              if (-1 < iVar4 + -1) {
                do {
                  (**(code **)(*(longlong *)local_30[8] + 0x28))
                            ((longlong *)local_30[8],&local_98,local_54);
                  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x40))
                                    (*(longlong **)(param_1 + 0x70),local_98);
                  if (lVar6 == 0) {
                    *param_4 = 0;
                    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                      (*(longlong **)(param_1 + 0x70),0x2a,local_30);
                    if (cVar3 == '\0') {
                      *param_5 = 0;
                      goto LAB_0095b0b8;
                    }
                  }
                  (**(code **)(*(longlong *)local_30[8] + 0x28))
                            ((longlong *)local_30[8],&local_a0,local_54);
                  cVar3 = (**(code **)(*local_20 + 0xb0))(local_20,local_a0,local_34);
                  if (cVar3 == '\0') {
                    (**(code **)(*(longlong *)local_30[8] + 0x28))
                              ((longlong *)local_30[8],&local_a8,local_54);
                    (**(code **)(*local_20 + 0x68))(local_20,local_a8);
                  }
                  else {
                    *param_4 = 0;
                    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                      (*(longlong **)(param_1 + 0x70),0x15,local_30);
                    if (cVar3 == '\0') {
                      *param_5 = 0;
                      goto LAB_0095b0b8;
                    }
                  }
                  local_54 = local_54 + 1;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
              if (*(byte *)(local_30 + 7) < 8) {
                bVar8 = ((int)CONCAT71((int7)((ulonglong)local_30 >> 8),1) <<
                         (*(byte *)(local_30 + 7) & 0x1f) & 3U) != 0;
              }
              else {
                bVar8 = false;
              }
              if ((bVar8) &&
                 (cVar3 = (**(code **)(*local_20 + 0xb0))(local_20,local_60,local_34), cVar3 == '\0'
                 )) {
                *param_4 = 0;
                cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                  (*(longlong **)(param_1 + 0x70),0xc,local_30);
                if (cVar3 == '\0') {
                  *param_5 = 0;
LAB_0095b0b8:
                  FUN_0095b9c0(0,local_80);
                  goto LAB_0095b999;
                }
              }
              FUN_00410f20(local_20);
              (**(code **)*local_40)(local_40,&local_b0);
              cVar3 = (**(code **)(*param_3 + 0xb0))(param_3,local_b0,local_34);
              if (cVar3 == '\0') {
                (**(code **)*local_40)(local_40,&local_b8);
                (**(code **)(*param_3 + 0x68))(param_3,local_b8);
              }
              else {
                *param_4 = 0;
                cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                  (*(longlong **)(param_1 + 0x70),0x14,local_30);
                if (cVar3 == '\0') {
                  *param_5 = 0;
                  goto LAB_0095b999;
                }
              }
              (**(code **)*local_40)(local_40,&local_c0);
              local_48 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
                                   (*(longlong **)(param_1 + 0x70),local_c0);
              if (*(char *)(local_48 + 0x38) == '\x01') {
                *param_4 = 0;
                cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                  (*(longlong **)(param_1 + 0x70),0x20,local_30);
                if (cVar3 == '\0') {
                  *param_5 = 0;
                  goto LAB_0095b999;
                }
              }
            }
            else if (bVar1 == 2) {
              (**(code **)*local_40)(local_40,&local_88);
              cVar3 = (**(code **)(*param_2 + 0xb0))(param_2,local_88,local_34);
              if (cVar3 == '\0') {
                (**(code **)*local_40)(local_40,&local_90);
                (**(code **)(*param_2 + 0x68))(param_2,local_90);
              }
              else {
                *param_4 = 0;
                cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                  (*(longlong **)(param_1 + 0x70),0x10,local_30);
                if (cVar3 == '\0') {
                  *param_5 = 0;
                  goto LAB_0095b999;
                }
              }
              if (*(byte *)(local_30 + 7) < 8) {
                bVar8 = ((int)CONCAT71((int7)((ulonglong)local_30 >> 8),1) <<
                         (*(byte *)(local_30 + 7) & 0x1f) & 0xcU) != 0;
              }
              else {
                bVar8 = false;
              }
              if (!bVar8) {
                *param_4 = 0;
                cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                  (*(longlong **)(param_1 + 0x70),0x1e,local_30);
                if (cVar3 == '\0') {
                  *param_5 = 0;
                  goto LAB_0095b999;
                }
              }
            }
            else if (bVar1 == 3) {
              if (*(byte *)(local_30 + 7) < 8) {
                bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)(local_30 + 7) & 0x1f) & 3U) != 0;
              }
              else {
                bVar8 = false;
              }
              if ((bVar8) && (cVar3 = FUN_008ff6c0(local_60), cVar3 == '\0')) {
                *param_4 = 0;
                cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                  (*(longlong **)(param_1 + 0x70),0xc,local_30);
                if (cVar3 == '\0') {
                  *param_5 = 0;
                  goto LAB_0095b999;
                }
              }
            }
            else if (bVar1 == 4) {
              if (*(byte *)(local_30 + 7) < 8) {
                bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)(local_30 + 7) & 0x1f) & 3U) != 0;
              }
              else {
                bVar8 = false;
              }
              if ((bVar8) && (cVar3 = FUN_008ff7c0(local_60), cVar3 == '\0')) {
                *param_4 = 0;
                cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                  (*(longlong **)(param_1 + 0x70),0xc,local_30);
                if (cVar3 == '\0') {
                  *param_5 = 0;
                  goto LAB_0095b999;
                }
              }
            }
          }
          else if (bVar1 == 6) {
            if (*(byte *)(local_30 + 7) < 8) {
              bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)(local_30 + 7) & 0x1f) & 3U) != 0;
            }
            else {
              bVar8 = false;
            }
            if ((bVar8) && (cVar3 = FUN_008ff7c0(local_60), cVar3 == '\0')) {
              *param_4 = 0;
              cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                (*(longlong **)(param_1 + 0x70),0xc,local_30,0);
              if (cVar3 == '\0') {
                *param_5 = 0;
                goto LAB_0095b999;
              }
            }
          }
          else if (bVar1 == 7) {
            local_28 = (longlong *)FUN_00410e60(&PTR_FUN_008f5158,1);
            FUN_008f9470(local_28,1);
            *(undefined1 *)(local_28 + 2) = 2;
            iVar4 = (**(code **)(*(longlong *)local_30[8] + 0x38))();
            local_54 = 0;
            if (-1 < iVar4 + -1) {
              do {
                (**(code **)(*(longlong *)local_30[8] + 0x28))
                          ((longlong *)local_30[8],&local_c8,local_54);
                cVar3 = (**(code **)(*local_28 + 0xb0))(local_28,local_c8,local_34);
                if (cVar3 == '\0') {
                  (**(code **)(*(longlong *)local_30[8] + 0x28))
                            ((longlong *)local_30[8],&local_d0,local_54);
                  (**(code **)(*local_28 + 0x68))(local_28,local_d0);
                }
                else {
                  *param_4 = 0;
                  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                    (*(longlong **)(param_1 + 0x70),0xf,local_30);
                  if (cVar3 == '\0') {
                    *param_5 = 0;
                    goto LAB_0095b64d;
                  }
                }
                local_54 = local_54 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            if (*(byte *)(local_30 + 7) < 8) {
              bVar8 = ((int)CONCAT71((int7)((ulonglong)local_30 >> 8),1) <<
                       (*(byte *)(local_30 + 7) & 0x1f) & 3U) != 0;
            }
            else {
              bVar8 = false;
            }
            if (bVar8) {
              cVar3 = FUN_008ff900(local_60);
              if (cVar3 == '\0') {
                *param_4 = 0;
                cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                  (*(longlong **)(param_1 + 0x70),0xc,local_30);
                if (cVar3 == '\0') {
                  *param_5 = 0;
LAB_0095b64d:
                  FUN_0095b9e0(0,local_80);
                  goto LAB_0095b999;
                }
              }
              else {
                iVar4 = (**(code **)(*local_28 + 0x38))(local_28);
                if ((0 < iVar4) &&
                   (cVar3 = (**(code **)(*local_28 + 0xb0))(local_28,local_60,local_34),
                   cVar3 == '\0')) {
                  *param_4 = 0;
                  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                    (*(longlong **)(param_1 + 0x70),0xc,local_30);
                  if (cVar3 == '\0') {
                    *param_5 = 0;
                    goto LAB_0095b64d;
                  }
                }
              }
            }
            FUN_00410f20(local_28);
          }
          else if (bVar1 == 8) {
            if (*(byte *)(local_30 + 7) < 8) {
              bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)(local_30 + 7) & 0x1f) & 3U) != 0;
            }
            else {
              bVar8 = false;
            }
            if ((bVar8) && (cVar3 = FUN_008ff9d0(local_60), cVar3 == '\0')) {
              *param_4 = 0;
              cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                (*(longlong **)(param_1 + 0x70),0xc,local_30);
              if (cVar3 == '\0') {
                *param_5 = 0;
                goto LAB_0095b999;
              }
            }
          }
          (**(code **)*local_30)(local_30,&local_d8);
          iVar4 = FUN_00416420(local_d8,L"xml:space");
          if (iVar4 == 0) {
            if (*(char *)(local_30 + 5) == '\a') {
              iVar4 = (**(code **)(*(longlong *)local_30[8] + 0x38))((longlong *)local_30[8]);
              if (iVar4 == 1) {
                (**(code **)(*(longlong *)local_30[8] + 0x28))((longlong *)local_30[8],&local_e0,0);
                iVar4 = FUN_00416420(local_e0,L"default");
                if (iVar4 != 0) {
                  (**(code **)(*(longlong *)local_30[8] + 0x28))((longlong *)local_30[8],&local_e8);
                  iVar4 = FUN_00416420(local_e8,L"preserve");
                  if ((iVar4 != 0) &&
                     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                        (*(longlong **)(param_1 + 0x70),9), cVar3 == '\0')) {
                    *param_4 = 0;
                    *param_5 = 0;
                    goto LAB_0095b999;
                  }
                }
              }
              else if (iVar4 == 2) {
                (**(code **)(*(longlong *)local_30[8] + 0x28))((longlong *)local_30[8],&local_f0,0);
                iVar4 = FUN_00416420(local_f0,L"default");
                if (iVar4 == 0) {
                  (**(code **)(*(longlong *)local_30[8] + 0x28))((longlong *)local_30[8],&local_f8);
                  iVar4 = FUN_00416420(local_f8,L"preserve");
                  if (iVar4 == 0) goto LAB_0095b960;
                }
                (**(code **)(*(longlong *)local_30[8] + 0x28))((longlong *)local_30[8],&local_100,0)
                ;
                iVar4 = FUN_00416420(local_100,L"preserve");
                if (iVar4 == 0) {
                  (**(code **)(*(longlong *)local_30[8] + 0x28))((longlong *)local_30[8],&local_108)
                  ;
                  iVar4 = FUN_00416420(local_108,L"default");
                  if (iVar4 == 0) goto LAB_0095b960;
                }
                cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                  (*(longlong **)(param_1 + 0x70),9);
                if (cVar3 == '\0') {
                  *param_4 = 0;
                  *param_5 = 0;
                  goto LAB_0095b999;
                }
              }
              else {
                cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                  (*(longlong **)(param_1 + 0x70),9);
                if (cVar3 == '\0') {
                  *param_4 = 0;
                  *param_5 = 0;
                  goto LAB_0095b999;
                }
              }
            }
            else {
              cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                (*(longlong **)(param_1 + 0x70),0xb);
              if (cVar3 == '\0') {
                *param_4 = 0;
                *param_5 = 0;
                goto LAB_0095b999;
              }
            }
          }
LAB_0095b960:
          local_50 = local_50 + 1;
          local_10c = local_10c + -1;
          iVar4 = local_10c;
        } while (local_10c != 0);
      }
      local_4c = local_4c + 1;
      local_110 = local_110 + -1;
      iVar4 = local_110;
    } while (local_110 != 0);
  }
LAB_0095b999:
  FUN_004145c0(&local_108,0x11);
  FUN_00414520(&local_60);
  return;
}

