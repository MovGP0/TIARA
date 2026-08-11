/* Ghidra address: 01d1eec0 */
/* Ghidra symbol: FUN_01d1eec0 */


void FUN_01d1eec0(longlong param_1,undefined8 *param_2,longlong param_3,int param_4,
                 undefined8 param_5,undefined8 *param_6,wchar_t *param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  ushort uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  bool bVar12;
  undefined1 auStack_d58 [32];
  short **local_d38;
  wchar_t *local_d30;
  wchar_t *local_d28;
  wchar_t *local_d20;
  wchar_t *local_d18;
  undefined *local_d10;
  longlong local_d08;
  undefined8 *local_d00;
  longlong local_cf8;
  int local_cec;
  undefined8 local_ce8;
  undefined8 local_ce0;
  undefined8 local_cd8;
  undefined8 local_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  undefined8 local_c78;
  undefined8 local_c70;
  undefined8 local_c68;
  undefined8 local_c60;
  undefined8 local_c58;
  undefined8 local_c50;
  undefined8 local_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  wchar_t *local_c30;
  undefined8 local_c28;
  wchar_t *local_c20;
  wchar_t *local_c18;
  wchar_t *local_c10;
  undefined8 local_c08;
  undefined8 local_c00;
  undefined8 local_bf8;
  undefined8 local_bf0;
  undefined *local_be8;
  undefined8 local_be0;
  undefined *local_bd8;
  undefined8 local_bd0;
  undefined8 local_bc8;
  undefined8 local_bc0;
  undefined8 local_bb8;
  undefined8 local_bb0;
  undefined8 local_ba8;
  undefined8 local_ba0;
  undefined8 local_b98;
  undefined8 local_b90;
  undefined8 local_b88;
  undefined8 local_b80;
  undefined8 local_b78;
  undefined8 local_b70;
  undefined8 local_b68;
  undefined8 local_b60;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined8 local_b48;
  undefined8 local_b40;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined8 local_b18;
  undefined8 local_b10;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined1 local_ab8 [264];
  longlong *local_9b0;
  longlong local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  wchar_t *local_990;
  wchar_t *local_988;
  short *local_980;
  short *local_978;
  undefined8 local_970;
  int local_968;
  int local_964;
  wchar_t local_960 [344];
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 local_5d3;
  undefined8 local_5cb;
  
  local_ce8 = 0;
  local_ce0 = 0;
  local_cd8 = 0;
  local_cd0 = 0;
  local_cc8 = 0;
  local_cc0 = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_ca8 = 0;
  local_ca0 = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c88 = 0;
  local_c80 = 0;
  local_c78 = 0;
  local_c70 = 0;
  local_c68 = 0;
  local_c60 = 0;
  local_c58 = 0;
  local_c50 = 0;
  local_c48 = 0;
  local_c40 = 0;
  local_c38 = 0;
  local_c28 = 0;
  local_c30 = (wchar_t *)0x0;
  local_c20 = (wchar_t *)0x0;
  local_c18 = (wchar_t *)0x0;
  local_c08 = 0;
  local_c10 = (wchar_t *)0x0;
  local_c00 = 0;
  local_bf8 = 0;
  local_be8 = (undefined *)0x0;
  local_bf0 = 0;
  local_bd8 = (undefined *)0x0;
  local_be0 = 0;
  local_bc8 = 0;
  local_bd0 = 0;
  local_bc0 = 0;
  local_bb0 = 0;
  local_bb8 = 0;
  local_ba0 = 0;
  local_ba8 = 0;
  local_b90 = 0;
  local_b98 = 0;
  local_b80 = 0;
  local_b88 = 0;
  local_b78 = 0;
  local_b60 = 0;
  local_b68 = 0;
  local_b70 = 0;
  local_b48 = 0;
  local_b50 = 0;
  local_b58 = 0;
  local_b38 = 0;
  local_b40 = 0;
  local_b28 = 0;
  local_b30 = 0;
  local_b18 = 0;
  local_b20 = 0;
  local_b10 = 0;
  local_af8 = 0;
  local_b00 = 0;
  local_b08 = 0;
  local_ae0 = 0;
  local_ae8 = 0;
  local_af0 = 0;
  local_ad0 = 0;
  local_ad8 = 0;
  local_ac0 = 0;
  local_ac8 = 0;
  local_988 = (wchar_t *)0x0;
  local_990 = (wchar_t *)0x0;
  local_998 = 0;
  local_9a0 = 0;
  local_9a8 = 0;
  puVar10 = param_6;
  pwVar11 = local_960;
  for (lVar9 = 0x127; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined8 *)pwVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    pwVar11 = pwVar11 + 4;
  }
  local_d08 = param_1;
  local_d00 = param_2;
  local_cf8 = param_3;
  local_cec = param_4;
  FUN_00414610(param_5);
  FUN_004179d0(local_960,&DAT_01d0d0b8);
  local_970 = 0;
  local_978 = (short *)0x0;
  local_980 = (short *)0x0;
  iVar6 = local_cec;
LAB_01d21579:
  while( true ) {
    while( true ) {
      while( true ) {
        local_cec = iVar6;
        iVar6 = FUN_01d11780(local_cf8);
        if (iVar6 <= local_cec) {
          FUN_00442c30(local_970);
          FUN_00442c30(local_978);
          FUN_00442c30(local_980);
          FUN_00414560(&local_ce8,0x46);
          FUN_00414560(&local_9a8,5);
          FUN_00417740(local_960,&DAT_01d0d0b8);
          FUN_00414480(&param_5);
          return;
        }
        lVar9 = (longlong)local_cec;
        if (((*(short *)(local_cf8 + lVar9 * 2) == 0x5c) &&
            (iVar6 = FUN_01d11780(local_cf8), local_cec + 2 <= iVar6)) &&
           (*(short *)(local_cf8 + (longlong)(local_cec + 2) * 2) == 0x28)) break;
        FUN_004169f0(&local_9a0,1);
        puVar7 = (undefined2 *)FUN_00414de0(&local_9a0);
        *puVar7 = *(undefined2 *)(local_cf8 + lVar9 * 2);
        iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
        iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
        (**(code **)(*(longlong *)*local_d00 + 0x18))((longlong *)*local_d00,&local_ce8,iVar4 + -1);
        FUN_00416ad0(&local_ce8,local_9a0);
        (**(code **)(*(longlong *)*local_d00 + 0x40))((longlong *)*local_d00,iVar6 + -1,local_ce8);
        iVar6 = local_cec + 1;
      }
      iVar6 = local_cec + 1;
      uVar8 = *(ushort *)(local_cf8 + (longlong)iVar6 * 2);
      if (uVar8 < 0x70) break;
      if (uVar8 == 0x70) {
        local_cec = iVar6;
        iVar6 = (**(code **)(**(longlong **)(local_d08 + 0x60) + 0x28))
                          (*(longlong **)(local_d08 + 0x60));
        if (0 < iVar6) {
          (**(code **)(**(longlong **)(local_d08 + 0x58) + 0x88))
                    (*(longlong **)(local_d08 + 0x58),*(undefined8 *)(local_d08 + 0x60));
          (**(code **)(**(longlong **)(local_d08 + 0x60) + 0x90))(*(longlong **)(local_d08 + 0x60));
        }
        local_cec = local_cec + 1;
        local_d38 = (short **)&local_964;
        FUN_01d12360(local_d08,local_cf8,local_cec,&local_970);
        FUN_00414480(local_d08 + 0x48);
        *(undefined1 *)(local_d08 + 0x40) = 1;
        local_d38 = (short **)0x0;
        local_d30 = local_960;
        local_d28 = param_7;
        FUN_01d1eec0(local_d08,local_d00,local_970,0);
        *(undefined1 *)(local_d08 + 0x40) = 0;
        (**(code **)(**(longlong **)(local_d08 + 0x68) + 0x88))
                  (*(longlong **)(local_d08 + 0x68),*(undefined8 *)(local_d08 + 0x70));
        local_d38 = (short **)0x1d21ae0;
        FUN_00416cd0(&local_c58,3,L"Draw(",*(undefined8 *)(local_d08 + 0x48));
        (**(code **)(**(longlong **)(local_d08 + 0x68) + 0x78))
                  (*(longlong **)(local_d08 + 0x68),local_c58);
        iVar6 = local_cec + local_964 + 2;
      }
      else if (uVar8 == 0x73) {
        local_cec = local_cec + 2;
        local_d38 = (short **)&local_964;
        FUN_01d12360(local_d08,local_cf8,local_cec,&local_970);
        uVar5 = FUN_01d11780(local_970);
        FUN_00414740(&local_988,local_970,uVar5);
        iVar6 = FUN_00416db0(local_988,&DAT_01d21bb8);
        if (iVar6 == 0) {
          iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
          (**(code **)(*(longlong *)*local_d00 + 0x18))
                    ((longlong *)*local_d00,&local_9a8,iVar6 + -1);
          iVar6 = 0;
          if (local_9a8 != 0) {
            iVar6 = *(int *)(local_9a8 + -4);
          }
          while( true ) {
            uVar8 = *(short *)(local_9a8 + -2 + (longlong)iVar6 * 2) - 0x28;
            if (uVar8 < 0x20) {
              bVar12 = (1 << ((byte)uVar8 & 0x1f) & 0x3ff50U) != 0;
            }
            else {
              bVar12 = false;
            }
            if (!bVar12) break;
            iVar6 = iVar6 + -1;
          }
          if (*(short *)(local_9a8 + -2 + (longlong)(iVar6 + -1) * 2) == 0x45) {
            uVar8 = *(short *)(local_9a8 + -2 + (longlong)(iVar6 + -2) * 2) - 0x30;
            if (uVar8 < 0x10) {
              bVar12 = ((int)CONCAT62((int6)(short)((uint)(iVar6 + -2) >> 0x10),1) <<
                        ((byte)uVar8 & 0x1f) & 0x3ffU) != 0;
            }
            else {
              bVar12 = false;
            }
            if (bVar12) {
              iVar6 = iVar6 + -2;
              while( true ) {
                uVar8 = *(short *)(local_9a8 + -2 + (longlong)iVar6 * 2) - 0x28;
                if (uVar8 < 0x20) {
                  bVar12 = (1 << ((byte)uVar8 & 0x1f) & 0x3ff50U) != 0;
                }
                else {
                  bVar12 = false;
                }
                if (!bVar12) break;
                iVar6 = iVar6 + -1;
              }
              do {
                iVar6 = iVar6 + -1;
                uVar8 = *(short *)(local_9a8 + -2 + (longlong)iVar6 * 2) - 0x28;
                if (uVar8 < 0x20) {
                  bVar12 = (1 << ((byte)uVar8 & 0x1f) & 0x3ff50U) != 0;
                }
                else {
                  bVar12 = false;
                }
              } while (bVar12);
            }
          }
          FUN_00416ea0(L"DegToRad(",&local_9a8,iVar6 + 1);
          iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
          FUN_00416ba0(&local_cc8,local_9a8,&DAT_01d21684);
          (**(code **)(*(longlong *)*local_d00 + 0x40))((longlong *)*local_d00,iVar6 + -1,local_cc8)
          ;
        }
        else {
          iVar6 = FUN_00416db0(local_988,&DAT_01d21bf0);
          if (iVar6 == 0) {
            FUN_00414b50(&local_988,&LAB_01d21c00);
            iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
            iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
            (**(code **)(*(longlong *)*local_d00 + 0x18))
                      ((longlong *)*local_d00,&local_cd0,iVar4 + -1);
            FUN_00416ad0(&local_cd0,local_988);
            (**(code **)(*(longlong *)*local_d00 + 0x40))
                      ((longlong *)*local_d00,iVar6 + -1,local_cd0);
          }
          else {
            iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
            iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
            (**(code **)(*(longlong *)*local_d00 + 0x18))
                      ((longlong *)*local_d00,&local_cd8,iVar4 + -1);
            FUN_00416ad0(&local_cd8,local_988);
            (**(code **)(*(longlong *)*local_d00 + 0x40))
                      ((longlong *)*local_d00,iVar6 + -1,local_cd8);
          }
        }
        iVar6 = local_cec + local_964 + 2;
      }
      else if (uVar8 != 0x74) {
        if (uVar8 == 0x78) goto LAB_01d1f365;
        goto LAB_01d21444;
      }
    }
    if (uVar8 != 0x6f) break;
    local_cec = local_cec + 2;
    local_d38 = &local_980;
    local_d30 = (wchar_t *)&local_964;
    FUN_01d12460(local_d08,local_cf8,local_cec,&local_978);
    local_d38 = (short **)0x0;
    local_d30 = local_960;
    local_d28 = param_7;
    FUN_01d1eec0(local_d08,local_d00,local_978,0);
    iVar6 = FUN_01d11780(local_980);
    if ((iVar6 == 1) && (*local_980 == 0x5e)) {
      iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
      iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
      (**(code **)(*(longlong *)*local_d00 + 0x18))((longlong *)*local_d00,&local_cc0,iVar4 + -1);
      FUN_00416ad0(&local_cc0,&DAT_01d21ba8);
      (**(code **)(*(longlong *)*local_d00 + 0x40))((longlong *)*local_d00,iVar6 + -1,local_cc0);
    }
    else {
      local_d38 = (short **)0x0;
      local_d30 = local_960;
      local_d28 = param_7;
      FUN_01d1eec0(local_d08,local_d00,local_980,0);
    }
    iVar6 = local_cec + local_964;
  }
  if (uVar8 < 0x66) {
    if (uVar8 == 0x65) {
      local_cec = local_cec + 2;
      local_d38 = &local_980;
      local_d30 = (wchar_t *)&local_964;
      FUN_01d12460(local_d08,local_cf8,local_cec,&local_978);
      iVar6 = FUN_00414d00(local_978);
      if ((iVar6 == 1) && (*local_978 == 0x65)) {
        iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
        iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
        (**(code **)(*(longlong *)*local_d00 + 0x18))((longlong *)*local_d00,&local_c90,iVar4 + -1);
        FUN_00416ad0(&local_c90,L"Exp(");
        (**(code **)(*(longlong *)*local_d00 + 0x40))((longlong *)*local_d00,iVar6 + -1,local_c90);
        local_d38 = (short **)0x0;
        local_d30 = local_960;
        local_d28 = param_7;
        FUN_01d1eec0(local_d08,local_d00,local_980,0);
        iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
        iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
        (**(code **)(*(longlong *)*local_d00 + 0x18))((longlong *)*local_d00,&local_c98,iVar4 + -1);
        FUN_00416ad0(&local_c98,&DAT_01d21684);
        (**(code **)(*(longlong *)*local_d00 + 0x40))((longlong *)*local_d00,iVar6 + -1,local_c98);
      }
      else {
        iVar6 = FUN_00414d00(local_978);
        if ((iVar6 == 2) && ((*local_978 == 0x31 && (local_978[1] == 0x30)))) {
          iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
          iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
          (**(code **)(*(longlong *)*local_d00 + 0x18))
                    ((longlong *)*local_d00,&local_ca0,iVar4 + -1);
          FUN_00416ad0(&local_ca0,&PTR_PTR_01d21b70);
          (**(code **)(*(longlong *)*local_d00 + 0x40))((longlong *)*local_d00,iVar6 + -1,local_ca0)
          ;
          local_d38 = (short **)0x0;
          local_d30 = local_960;
          local_d28 = param_7;
          FUN_01d1eec0(local_d08,local_d00,local_980,0);
        }
        else {
          uVar5 = FUN_01d11780(local_980);
          FUN_00414740(&local_9a8,local_980,uVar5);
          FUN_0040e860(local_9a8,&local_968);
          local_d38 = (short **)0x0;
          local_d30 = local_960;
          local_d28 = param_7;
          FUN_01d1eec0(local_d08,local_d00,local_978,0);
          if (local_968 == 0) {
            iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
            iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
            (**(code **)(*(longlong *)*local_d00 + 0x18))
                      ((longlong *)*local_d00,&local_ca8,iVar4 + -1);
            FUN_00416ad0(&local_ca8,&DAT_01d21b84);
            (**(code **)(*(longlong *)*local_d00 + 0x40))
                      ((longlong *)*local_d00,iVar6 + -1,local_ca8);
          }
          else {
            iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
            iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
            (**(code **)(*(longlong *)*local_d00 + 0x18))
                      ((longlong *)*local_d00,&local_cb0,iVar4 + -1);
            FUN_00416ad0(&local_cb0,&DAT_01d21b94);
            (**(code **)(*(longlong *)*local_d00 + 0x40))
                      ((longlong *)*local_d00,iVar6 + -1,local_cb0);
          }
          local_d38 = (short **)0x0;
          local_d30 = local_960;
          local_d28 = param_7;
          FUN_01d1eec0(local_d08,local_d00,local_980,0);
          if (local_968 != 0) {
            iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
            iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
            (**(code **)(*(longlong *)*local_d00 + 0x18))
                      ((longlong *)*local_d00,&local_cb8,iVar4 + -1);
            FUN_00416ad0(&local_cb8,&DAT_01d21684);
            (**(code **)(*(longlong *)*local_d00 + 0x40))
                      ((longlong *)*local_d00,iVar6 + -1,local_cb8);
          }
        }
      }
      iVar6 = local_cec + local_964;
      goto LAB_01d21579;
    }
    if (uVar8 == 0x61) {
LAB_01d1f365:
      local_cec = local_cec + 2;
      local_d38 = &local_980;
      local_d30 = (wchar_t *)&local_964;
      FUN_01d12460(local_d08,local_cf8,local_cec,&local_978);
      local_9b0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*local_9b0 + 0x78))(local_9b0,0);
      local_d38 = (short **)0x0;
      local_d30 = local_960;
      local_d28 = param_7;
      FUN_01d1eec0(local_d08,&local_9b0,local_978,0);
      (**(code **)(*local_9b0 + 0x18))(local_9b0,&local_988,0);
      FUN_00410f20(local_9b0);
      iVar6 = FUN_004170c0(&DAT_01d21660,local_988,1);
      if ((iVar6 < 1) || (iVar6 = FUN_004170c0(&DAT_01d21670,local_988,1), iVar6 != 0)) {
        iVar6 = FUN_004170c0(&DAT_01d21670,local_988,1);
        if (0 < iVar6) {
          iVar6 = FUN_004170c0(&DAT_01d21670,local_988,1);
          iVar4 = FUN_004170c0(&DAT_01d21684,local_988,1);
          iVar3 = FUN_004170c0(&DAT_01d21670,local_988,1);
          FUN_00416dc0(&local_988,local_988,iVar6 + 3,(iVar4 - iVar3) + -3);
        }
        if (*(char *)(local_d08 + 0x40) == '\0') {
          FUN_00416ba0(&local_c48,local_988,&DAT_01d21a30);
          (**(code **)(**(longlong **)(local_d08 + 0x58) + 0x78))
                    (*(longlong **)(local_d08 + 0x58),local_c48);
          local_d38 = (short **)0x0;
          local_d30 = local_960;
          local_d28 = param_7;
          FUN_01d1eec0(local_d08,local_d08 + 0x58,local_980,0);
          plVar1 = *(longlong **)(local_d08 + 0x58);
          iVar6 = (**(code **)(*plVar1 + 0x28))(plVar1);
          plVar2 = *(longlong **)(local_d08 + 0x58);
          iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_c50,iVar4 + -1);
          FUN_00416ad0(&local_c50,&DAT_01d2198c);
          (**(code **)(*plVar1 + 0x40))(plVar1,iVar6 + -1,local_c50);
          (**(code **)(**(longlong **)(local_d08 + 0x58) + 0x78))
                    (*(longlong **)(local_d08 + 0x58),0);
        }
        else {
          local_d38 = (short **)&DAT_01d21a30;
          FUN_00416cd0(&local_c38,3,&DAT_01d219e4,local_988);
          (**(code **)(**(longlong **)(local_d08 + 0x60) + 0x78))
                    (*(longlong **)(local_d08 + 0x60),local_c38);
          local_d38 = (short **)0x0;
          local_d30 = local_960;
          local_d28 = param_7;
          FUN_01d1eec0(local_d08,local_d08 + 0x60,local_980,0);
          plVar1 = *(longlong **)(local_d08 + 0x60);
          iVar6 = (**(code **)(*plVar1 + 0x28))(plVar1);
          plVar2 = *(longlong **)(local_d08 + 0x60);
          iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_c40,iVar4 + -1);
          FUN_00416ad0(&local_c40,&DAT_01d2198c);
          (**(code **)(*plVar1 + 0x40))(plVar1,iVar6 + -1,local_c40);
        }
      }
      else {
        uVar5 = FUN_004170c0(&DAT_01d21660,local_988,1);
        iVar6 = FUN_004170c0(&DAT_01d21684,local_988,1);
        iVar4 = FUN_004170c0(&DAT_01d21660,local_988,1);
        FUN_00416dc0(&local_990,local_988,uVar5,(iVar6 - iVar4) + 1);
        uVar5 = FUN_004170c0(&DAT_01d21660,local_988,1);
        iVar6 = FUN_004170c0(&DAT_01d21684,local_988,1);
        iVar4 = FUN_004170c0(&DAT_01d21660,local_988,1);
        FUN_00416e20(&local_988,uVar5,(iVar6 - iVar4) + 1);
        iVar6 = 0;
        if (local_990 != (wchar_t *)0x0) {
          iVar6 = *(int *)(local_990 + -2);
        }
        FUN_00416dc0(&local_998,local_990,2,iVar6 + -2);
        (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x90))(*(longlong **)(local_d08 + 0x70));
        iVar6 = FUN_00416db0(local_998,&DAT_01d21694);
        if ((iVar6 == 0) || (iVar6 = FUN_00416db0(local_998,&DAT_01d216a4), iVar6 == 0)) {
          *(undefined1 *)param_7 = 2;
          *(undefined8 *)(param_7 + 0x68) = local_5d3;
          *(undefined8 *)(param_7 + 0x6c) = local_5cb;
          *(undefined2 *)((longlong)param_7 + 1) = 0x4802;
          *(undefined1 *)((longlong)param_7 + 3) = 0x7a;
          param_7[0x15] = L'搆';
          param_7[0x16] = L'籂';
          param_7[0x17] = L'敤';
          *(undefined1 *)(param_7 + 0x18) = 0x67;
          FUN_00416910(local_ab8,local_998,0xff);
          FUN_00415020((undefined1 *)((longlong)param_7 + 0x53),local_ab8,0x28);
          FUN_0043f750(&local_ac8,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)local_ac8;
          FUN_00416cd0(&local_ac0,3,local_988,&DAT_01d216c0);
          FUN_00416910(local_ab8,local_ac0,0xff);
          FUN_00415020(param_7 + 0x3e,local_ab8,0x28);
          FUN_0043f750(&local_ad8,2);
          FUN_00416ba0(&local_ad0,L"draw_pref.typ      := ",local_ad8);
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),local_ad0);
          local_d38._0_1_ = 1;
          FUN_00b8fd60(&local_af0,local_5d3,3,0);
          FUN_01d1edd0(auStack_d58,&local_ae8,local_af0);
          FUN_00416ba0(&local_ae0,L"draw_pref.l_limit  := ",local_ae8);
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),local_ae0);
          local_d38 = (short **)CONCAT71(local_d38._1_7_,1);
          FUN_00b8fd60(&local_b08,local_5cb,3,0);
          FUN_01d1edd0(auStack_d58,&local_b00,local_b08);
          FUN_00416ba0(&local_af8,L"draw_pref.r_limit  := ",local_b00);
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),local_af8);
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),L"draw_pref.i_subdiv := 100");
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),L"draw_pref.u_par    := \'Hz\'");
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),L"draw_pref.u_res    := \'\'");
          local_d38 = (short **)&DAT_01d21884;
          FUN_00416cd0(&local_b10,3,L"draw_pref.n_par    := \'",local_998);
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),local_b10);
          FUN_0043f750(&local_b20,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)&DAT_01d216c0;
          local_d30 = (wchar_t *)local_b20;
          local_d28 = L"\'";
          FUN_00416cd0(&local_b18,5,L"draw_pref.n_res    := \'",local_988);
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),local_b18);
        }
        else {
          *(undefined1 *)param_7 = 0;
          *(undefined8 *)(param_7 + 0x68) = local_6b0;
          *(undefined8 *)(param_7 + 0x6c) = local_6a8;
          *(undefined2 *)((longlong)param_7 + 1) = 0x7301;
          param_7[0x15] = L'嘃';
          param_7[0x16] = L'䅼';
          FUN_00416910(local_ab8,local_998,0xff);
          FUN_00415020((undefined1 *)((longlong)param_7 + 0x53),local_ab8,0x28);
          FUN_0043f750(&local_b30,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)local_b30;
          FUN_00416cd0(&local_b28,3,local_988,&DAT_01d216c0);
          FUN_00416910(local_ab8,local_b28,0xff);
          FUN_00415020(param_7 + 0x3e,local_ab8,0x28);
          FUN_0043f750(&local_b40,0);
          FUN_00416ba0(&local_b38,L"draw_pref.typ      := ",local_b40);
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),local_b38);
          local_d38._0_1_ = 1;
          FUN_00b8fd60(&local_b58,local_6b0,3,0);
          FUN_01d1edd0(auStack_d58,&local_b50,local_b58);
          FUN_00416ba0(&local_b48,L"draw_pref.l_limit  := ",local_b50);
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),local_b48);
          local_d38 = (short **)CONCAT71(local_d38._1_7_,1);
          FUN_00b8fd60(&local_b70,local_6a8,3,0);
          FUN_01d1edd0(auStack_d58,&local_b68,local_b70);
          FUN_00416ba0(&local_b60,L"draw_pref.r_limit  := ",local_b68);
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),local_b60);
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),L"draw_pref.i_subdiv := 1000");
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),L"draw_pref.u_par    := \'s\'");
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),L"draw_pref.u_res    := \'\'");
          local_d38 = (short **)&DAT_01d21884;
          FUN_00416cd0(&local_b78,3,L"draw_pref.n_par    := \'",local_998);
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),local_b78);
          FUN_0043f750(&local_b88,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)&DAT_01d216c0;
          local_d30 = (wchar_t *)local_b88;
          local_d28 = L"\'";
          FUN_00416cd0(&local_b80,5,L"draw_pref.n_res    := \'",local_988);
          (**(code **)(**(longlong **)(local_d08 + 0x70) + 0x78))
                    (*(longlong **)(local_d08 + 0x70),local_b80);
        }
        lVar9 = (longlong)(local_cec + -1);
        if (*(short *)(local_cf8 + lVar9 * 2) == 0x78) {
          FUN_0043f750(&local_b98,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)&DAT_01d216c0;
          local_d30 = (wchar_t *)local_b98;
          local_d28 = L"(x);";
          FUN_00416cd0(&local_b90,5,L"Function ",local_988);
          (**(code **)(**(longlong **)(local_d08 + 0x50) + 0x78))
                    (*(longlong **)(local_d08 + 0x50),local_b90);
        }
        else {
          FUN_0043f750(&local_ba8,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)&DAT_01d216c0;
          local_d30 = (wchar_t *)local_ba8;
          local_d28 = local_990;
          local_d20 = L";";
          FUN_00416cd0(&local_ba0,6,L"Function ",local_988);
          (**(code **)(**(longlong **)(local_d08 + 0x50) + 0x78))
                    (*(longlong **)(local_d08 + 0x50),local_ba0);
        }
        (**(code **)(**(longlong **)(local_d08 + 0x50) + 0x78))
                  (*(longlong **)(local_d08 + 0x50),L"Begin");
        iVar6 = (**(code **)(**(longlong **)(local_d08 + 0x60) + 0x28))
                          (*(longlong **)(local_d08 + 0x60));
        if (0 < iVar6) {
          (**(code **)(**(longlong **)(local_d08 + 0x50) + 0x88))
                    (*(longlong **)(local_d08 + 0x50),*(undefined8 *)(local_d08 + 0x60));
          (**(code **)(**(longlong **)(local_d08 + 0x60) + 0x90))(*(longlong **)(local_d08 + 0x60));
        }
        if (*(short *)(local_cf8 + lVar9 * 2) == 0x78) {
          FUN_0043f750(&local_bb8,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)&DAT_01d216c0;
          local_d30 = (wchar_t *)local_bb8;
          local_d28 = L" := t;";
          FUN_00416cd0(&local_bb0,5,&DAT_01d219b4,local_988);
          (**(code **)(**(longlong **)(local_d08 + 0x50) + 0x78))
                    (*(longlong **)(local_d08 + 0x50),local_bb0);
          local_d38 = (short **)0x1d219f8;
          FUN_00416cd0(&local_bc0,3,&DAT_01d219e4,local_998);
          (**(code **)(**(longlong **)(local_d08 + 0x50) + 0x78))
                    (*(longlong **)(local_d08 + 0x50),local_bc0);
        }
        if (*(short *)(local_cf8 + lVar9 * 2) == 0x61) {
          FUN_0043f750(&local_bd0,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)&DAT_01d216c0;
          local_d30 = (wchar_t *)local_bd0;
          local_d28 = L" :=";
          FUN_00416cd0(&local_bc8,5,&DAT_01d219e4,local_988);
          (**(code **)(**(longlong **)(local_d08 + 0x50) + 0x78))
                    (*(longlong **)(local_d08 + 0x50),local_bc8);
          FUN_0043f750(&local_be0,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)&DAT_01d216c0;
          local_d30 = (wchar_t *)local_be0;
          local_d28 = L" :=";
          FUN_00416cd0(&local_bd8,5,&DAT_01d219e4,local_988);
          local_d38 = (short **)local_bd8;
          local_d30 = local_960;
          local_d28 = param_7;
          FUN_01d1eec0(local_d08,local_d08 + 0x50,local_980,0);
        }
        else {
          FUN_0043f750(&local_bf0,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)&DAT_01d216c0;
          local_d30 = (wchar_t *)local_bf0;
          local_d28 = L" :=";
          FUN_00416cd0(&local_be8,5,&DAT_01d219e4,local_988);
          local_d38 = (short **)local_be8;
          local_d30 = local_960;
          local_d28 = param_7;
          FUN_01d1eec0(local_d08,local_d08 + 0x50,local_980,0);
        }
        plVar1 = *(longlong **)(local_d08 + 0x50);
        iVar6 = (**(code **)(*plVar1 + 0x28))(plVar1);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_bf8,iVar6 + -1);
        iVar6 = FUN_004170c0(L"Else",local_bf8,1);
        if (0 < iVar6) {
          plVar1 = *(longlong **)(local_d08 + 0x50);
          iVar6 = (**(code **)(*plVar1 + 0x28))(plVar1);
          (**(code **)(*plVar1 + 0x98))(plVar1,iVar6 + -1);
          plVar1 = *(longlong **)(local_d08 + 0x50);
          iVar6 = (**(code **)(*plVar1 + 0x28))(plVar1);
          plVar2 = *(longlong **)(local_d08 + 0x50);
          iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_c00,iVar4 + -1);
          FUN_00416ad0(&local_c00,&DAT_01d2198c);
          (**(code **)(*plVar1 + 0x40))(plVar1,iVar6 + -1,local_c00);
          FUN_0043f750(&local_c10,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)&DAT_01d216c0;
          local_d30 = local_c10;
          local_d28 = L";";
          FUN_00416cd0(&local_c08,5,L"  t := t",local_988);
          (**(code **)(**(longlong **)(local_d08 + 0x50) + 0x78))
                    (*(longlong **)(local_d08 + 0x50),local_c08);
        }
        (**(code **)(**(longlong **)(local_d08 + 0x50) + 0x78))
                  (*(longlong **)(local_d08 + 0x50),L"End;");
        if (*(char *)(local_d08 + 0x40) == '\0') {
          (**(code **)(**(longlong **)(local_d08 + 0x68) + 0x88))
                    (*(longlong **)(local_d08 + 0x68),*(undefined8 *)(local_d08 + 0x70));
          FUN_0043f750(&local_c30,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)&DAT_01d216c0;
          local_d30 = local_c30;
          local_d28 = local_990;
          local_d20 = L",";
          local_d18 = local_988;
          local_d10 = &DAT_01d21acc;
          FUN_00416cd0(&local_c28,8,L"Draw(",local_988);
          (**(code **)(**(longlong **)(local_d08 + 0x68) + 0x78))
                    (*(longlong **)(local_d08 + 0x68),local_c28);
        }
        else if (*(longlong *)(local_d08 + 0x48) == 0) {
          FUN_0043f750(&local_c18,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)local_c18;
          local_d30 = local_990;
          FUN_00416cd0(local_d08 + 0x48,4,local_988,&DAT_01d216c0);
        }
        else {
          FUN_0043f750(&local_c20,*(undefined4 *)(local_d08 + 0x3c));
          local_d38 = (short **)local_988;
          local_d30 = L"_";
          local_d28 = local_c20;
          local_d20 = local_990;
          FUN_00416cd0(local_d08 + 0x48,6,*(undefined8 *)(local_d08 + 0x48),&DAT_01d21a94);
        }
        (**(code **)(**(longlong **)(local_d08 + 0x50) + 0x78))
                  (*(longlong **)(local_d08 + 0x50),param_5);
        *(int *)(local_d08 + 0x3c) = *(int *)(local_d08 + 0x3c) + 1;
      }
      iVar6 = local_cec + local_964;
      goto LAB_01d21579;
    }
    if (uVar8 == 99) {
      local_cec = local_cec + 2;
      local_d38 = &local_980;
      local_d30 = (wchar_t *)&local_964;
      FUN_01d12460(local_d08,local_cf8,local_cec,&local_978);
      (**(code **)(*(longlong *)*local_d00 + 0x78))((longlong *)*local_d00,0);
      iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
      iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
      (**(code **)(*(longlong *)*local_d00 + 0x18))((longlong *)*local_d00,&local_c60,iVar4 + -1);
      FUN_00416ad0(&local_c60,L"  If ");
      (**(code **)(*(longlong *)*local_d00 + 0x40))((longlong *)*local_d00,iVar6 + -1,local_c60);
      local_d38 = (short **)0x0;
      local_d30 = local_960;
      local_d28 = param_7;
      FUN_01d1eec0(local_d08,local_d00,local_978,0);
      iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
      iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
      (**(code **)(*(longlong *)*local_d00 + 0x18))((longlong *)*local_d00,&local_c68,iVar4 + -1);
      FUN_00416ad0(&local_c68,L" Then");
      (**(code **)(*(longlong *)*local_d00 + 0x40))((longlong *)*local_d00,iVar6 + -1,local_c68);
      FUN_00416ba0(&local_c70,&DAT_01d219e4,param_5);
      (**(code **)(*(longlong *)*local_d00 + 0x78))((longlong *)*local_d00,local_c70);
      local_d38 = (short **)0x0;
      local_d30 = local_960;
      local_d28 = param_7;
      FUN_01d1eec0(local_d08,local_d00,local_980,0);
      (**(code **)(*(longlong *)*local_d00 + 0x78))((longlong *)*local_d00,L"  Else");
      iVar6 = local_cec + local_964;
      goto LAB_01d21579;
    }
  }
  else {
    if (uVar8 == 0x66) {
      local_cec = local_cec + 2;
      local_d38 = &local_980;
      local_d30 = (wchar_t *)&local_964;
      FUN_01d12460(local_d08,local_cf8,local_cec,&local_978);
      iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
      iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
      (**(code **)(*(longlong *)*local_d00 + 0x18))((longlong *)*local_d00,&local_c78,iVar4 + -1);
      FUN_00416ad0(&local_c78,&DAT_01d21660);
      (**(code **)(*(longlong *)*local_d00 + 0x40))((longlong *)*local_d00,iVar6 + -1,local_c78);
      local_d38 = (short **)0x0;
      local_d30 = local_960;
      local_d28 = param_7;
      FUN_01d1eec0(local_d08,local_d00,local_978,0);
      iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
      iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
      (**(code **)(*(longlong *)*local_d00 + 0x18))((longlong *)*local_d00,&local_c80,iVar4 + -1);
      FUN_00416ad0(&local_c80,&DAT_01d21b44);
      (**(code **)(*(longlong *)*local_d00 + 0x40))((longlong *)*local_d00,iVar6 + -1,local_c80);
      local_d38 = (short **)0x0;
      local_d30 = local_960;
      local_d28 = param_7;
      FUN_01d1eec0(local_d08,local_d00,local_980,0);
      iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
      iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
      (**(code **)(*(longlong *)*local_d00 + 0x18))((longlong *)*local_d00,&local_c88,iVar4 + -1);
      FUN_00416ad0(&local_c88,&DAT_01d21684);
      (**(code **)(*(longlong *)*local_d00 + 0x40))((longlong *)*local_d00,iVar6 + -1,local_c88);
      iVar6 = local_cec + local_964;
      goto LAB_01d21579;
    }
    if (uVar8 == 0x69) {
      local_cec = local_cec + 2;
      local_d38 = &local_980;
      local_d30 = (wchar_t *)&local_964;
      FUN_01d12460(local_d08,local_cf8,local_cec,&local_978);
      local_d38 = (short **)0x0;
      local_d30 = local_960;
      local_d28 = param_7;
      FUN_01d1eec0(local_d08,local_d00,local_978,0);
      local_d38 = (short **)0x0;
      local_d30 = local_960;
      local_d28 = param_7;
      FUN_01d1eec0(local_d08,local_d00,local_980,0);
      iVar6 = local_cec + local_964;
      goto LAB_01d21579;
    }
  }
LAB_01d21444:
  local_cec = iVar6;
  uVar5 = FUN_01d11780(local_cf8);
  FUN_00414740(&local_988,local_cf8,uVar5);
  iVar6 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
  iVar4 = (**(code **)(*(longlong *)*local_d00 + 0x28))((longlong *)*local_d00);
  (**(code **)(*(longlong *)*local_d00 + 0x18))((longlong *)*local_d00,&local_ce0,iVar4 + -1);
  FUN_00416ad0(&local_ce0,local_988);
  (**(code **)(*(longlong *)*local_d00 + 0x40))((longlong *)*local_d00,iVar6 + -1,local_ce0);
  iVar6 = FUN_01d11780(local_cf8);
  goto LAB_01d21579;
}

