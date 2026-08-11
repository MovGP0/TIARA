/* Ghidra address: 009913e0 */
/* Ghidra symbol: FUN_009913e0 */


undefined1 FUN_009913e0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  char local_31;
  undefined1 local_30 [7];
  undefined1 local_29;
  longlong *local_28;
  longlong *local_20;
  
  local_a0 = auStack_c8;
  local_40 = 0;
  (**(code **)(*param_1 + 0x20))(param_1);
  local_28 = (longlong *)FUN_0098b1f0(&PTR_FUN_00925d90,1,param_2,&LAB_00994970);
  local_20 = (longlong *)FUN_00994ee0(&PTR_FUN_00928490,1);
LAB_00991458:
  uVar3 = FUN_00414520(&local_40);
  (**(code **)(*local_28 + 0x30))(local_28,&local_31,uVar3,local_30);
  if (1 < (byte)(local_31 - 0x2eU)) {
    local_50 = (**(code **)(*param_1 + 0x30))(param_1,local_31,local_40);
LAB_009914c5:
    while( true ) {
      cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092bd48);
      if (cVar1 == '\0') break;
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x14);
      if (cVar1 != '\0') {
LAB_0099164f:
        (**(code **)(*local_20 + 0x28))(local_20,local_50);
        goto LAB_00991458;
      }
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x12);
      if (cVar1 != '\0') goto LAB_0099164f;
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x11);
      if (cVar1 != '\0') goto LAB_0099164f;
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x10);
      if (cVar1 != '\0') goto LAB_0099164f;
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x15);
      if (cVar1 != '\0') goto LAB_0099164f;
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x16);
      if (cVar1 != '\0') goto LAB_0099164f;
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x19);
      if (cVar1 != '\0') goto LAB_0099164f;
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x1a);
      if (cVar1 != '\0') goto LAB_0099164f;
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x1b);
      if (cVar1 != '\0') goto LAB_0099164f;
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x1c);
      if (cVar1 != '\0') goto LAB_0099164f;
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x17);
      if (cVar1 != '\0') goto LAB_0099164f;
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x18);
      if ((cVar1 != '\0') || (cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0xe), cVar1 != '\0'))
      goto LAB_0099164f;
      uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_009302a8);
      if (cVar1 == '\0') {
LAB_00991732:
        local_58 = FUN_00995110(&PTR_FUN_0092bb40,1,param_1,0);
        *(longlong *)(local_58 + 0x18) = local_50;
        local_50 = local_58;
      }
      else {
        uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092bb40);
        if (cVar1 == '\0') goto LAB_00991732;
        uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
        FUN_00410f20(uVar3);
        local_58 = FUN_00995110(&PTR_FUN_0092bb40,1,param_1,0);
        uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
        *(undefined8 *)(local_58 + 0x18) = uVar3;
        *(longlong *)(local_58 + 0x20) = local_50;
        local_50 = local_58;
      }
    }
    cVar1 = FUN_004113d0(local_50,&PTR_FUN_00930128);
    if ((((cVar1 != '\0') || (cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092eb68), cVar1 != '\0')) ||
        (cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092e9e8), cVar1 != '\0')) ||
       (cVar1 = FUN_004113d0(local_50,&PTR_FUN_00928ef0), cVar1 != '\0')) {
      (**(code **)(*local_20 + 0x28))(local_20,local_50);
      goto LAB_00991458;
    }
    cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092dac8);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092dcd0);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092d8b0);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(local_50,&PTR_FUN_009305a8);
          if ((cVar1 != '\0') || (cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092ecd8), cVar1 != '\0'))
          {
            (**(code **)(*local_20 + 0x28))(local_20,local_50);
            goto LAB_00991458;
          }
          cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092e870);
          if (cVar1 != '\0') {
            FUN_00410f20(local_50);
            local_50 = FUN_00995110(&PTR_FUN_00928cc0,1,param_1,0);
            uVar3 = FUN_009953a0(&PTR_FUN_0092a1c8,1,param_1);
            *(undefined8 *)(local_50 + 0x18) = uVar3;
            uVar3 = FUN_00995110(&PTR_FUN_0092a8e8,1,param_1);
            *(undefined8 *)(*(longlong *)(local_50 + 0x18) + 0x18) = uVar3;
            uVar3 = FUN_00995110(&PTR_FUN_00931170,1,param_1);
            *(undefined8 *)(*(longlong *)(*(longlong *)(local_50 + 0x18) + 0x18) + 0x18) = uVar3;
            goto LAB_009914c5;
          }
          cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092acb8);
          if (cVar1 != '\0') {
            (**(code **)(*local_20 + 0x28))(local_20,local_50);
            goto LAB_00991458;
          }
          cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092b928);
          if (cVar1 == '\0') {
            cVar1 = FUN_004113d0(local_50,&PTR_FUN_009308a8);
            if (cVar1 != '\0') {
              (**(code **)(*local_20 + 0x28))(local_20,local_50);
              goto LAB_00991458;
            }
            cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092cc10);
            if (cVar1 == '\0') {
              cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092ce28);
              if (cVar1 == '\0') {
                cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092c7c0);
                if (cVar1 == '\0') {
                  cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092c9d8);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092fdf8);
                    if ((cVar1 != '\0') ||
                       (cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092ff88), cVar1 != '\0')) {
                      (**(code **)(*local_20 + 0x28))(local_20,local_50);
                      goto LAB_00991458;
                    }
                    cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092c170);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092c388);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092f7d8);
                        if (((((cVar1 != '\0') ||
                              (cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092f958), cVar1 != '\0')) ||
                             (cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092e0e0), cVar1 != '\0')) ||
                            ((cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092e3e0), cVar1 != '\0' ||
                             (cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092fae8), cVar1 != '\0')))) ||
                           (cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092fc68), cVar1 != '\0')) {
                          (**(code **)(*local_20 + 0x28))(local_20,local_50);
                          goto LAB_00991458;
                        }
                        cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092ee58);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092d478);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092d270);
                            if (cVar1 == '\0') {
                              cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092f658);
                              if (((cVar1 != '\0') ||
                                  (cVar1 = FUN_004113d0(local_50,&PTR_FUN_00930428), cVar1 != '\0'))
                                 || (cVar1 = FUN_004113d0(local_50,&PTR_FUN_00930728), cVar1 != '\0'
                                    )) {
                                (**(code **)(*local_20 + 0x28))(local_20,local_50);
                                goto LAB_00991458;
                              }
                              cVar1 = FUN_004113d0(local_50,&PTR_FUN_00930cc0);
                              if (cVar1 == '\0') {
                                cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092a8e8);
                                if (cVar1 == '\0') {
                                  cVar1 = FUN_004113d0(local_50,&PTR_FUN_00930f88);
                                  if (((cVar1 != '\0') ||
                                      (cVar1 = FUN_004113d0(local_50,&PTR_FUN_00931170),
                                      cVar1 != '\0')) ||
                                     ((cVar1 = FUN_004113d0(local_50,&PTR_FUN_009312f0),
                                      cVar1 != '\0' ||
                                      (cVar1 = FUN_004113d0(local_50,&PTR_FUN_009314d8),
                                      cVar1 != '\0')))) {
                                    (**(code **)(*local_20 + 0x28))(local_20,local_50);
                                    goto LAB_00991458;
                                  }
                                  cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092f010);
                                  if (cVar1 == '\0') {
                                    cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092bb40);
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_004113d0(local_50,&PTR_FUN_009302a8);
                                      if (cVar1 != '\0') {
                                        (**(code **)(*local_20 + 0x28))(local_20,local_50);
                                        goto LAB_00991458;
                                      }
                                      cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092b6c8);
                                      if (cVar1 == '\0') {
                                        cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092f4d8);
                                        if (cVar1 != '\0') {
                                          (**(code **)(*local_20 + 0x28))(local_20,local_50);
                                          goto LAB_00991458;
                                        }
                                        cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092aae0);
                                        if (cVar1 == '\0') {
                                          cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092aec0);
                                          if (cVar1 == '\0') {
                                            cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092e260);
                                            if (cVar1 == '\0') {
                                              cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092e568);
                                              if (cVar1 == '\0') {
                                                cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092f348);
                                                if (cVar1 != '\0') {
                                                  uVar3 = (**(code **)(*local_20 + 0x18))
                                                                    (local_20,0);
                                                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092b6c8);
                                                  if (cVar1 == '\0') {
                                                    (**(code **)(*local_20 + 0x28))
                                                              (local_20,local_50);
                                                  }
                                                  else {
                                                    local_58 = FUN_00995110(&PTR_FUN_0092b4c0,1,
                                                                            param_1,0);
                                                    uVar3 = (**(code **)(*local_20 + 0x20))
                                                                      (local_20);
                                                    *(undefined8 *)(local_58 + 0x18) = uVar3;
                                                    (**(code **)(*local_20 + 0x28))
                                                              (local_20,local_58);
                                                    (**(code **)(*local_20 + 0x28))
                                                              (local_20,local_50);
                                                  }
                                                  goto LAB_00991458;
                                                }
                                                cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092e6f8);
                                                if (cVar1 == '\0') {
                                                  cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092f1c8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = FUN_004113d0(local_50,&PTR_FUN_00928cc0)
                                                    ;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = FUN_004113d0(local_50,&
                                                  PTR_FUN_0092ded8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = FUN_004113d0(local_50,&PTR_FUN_0092b4c0)
                                                    ;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = FUN_004113d0(local_50,&
                                                  PTR_FUN_00930a28);
                                                  if (cVar1 != '\0') {
                                                    local_58 = FUN_00995110(&PTR_FUN_0092aec0,1,
                                                                            param_1,0);
                                                    *(longlong *)(local_58 + 0x18) = local_50;
                                                    local_50 = local_58;
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = (**(code **)(*local_28 + 0x28))
                                                                      (local_28,0x14);
                                                    if (cVar1 != '\0') {
                                                      (**(code **)(*local_20 + 0x28))
                                                                (local_20,local_50);
                                                      goto LAB_00991458;
                                                    }
                                                    local_58 = FUN_00995110(&PTR_FUN_0092ded8,1,
                                                                            param_1,0);
                                                    *(longlong *)(local_58 + 0x18) = local_50;
                                                    local_50 = local_58;
                                                  }
                                                  goto LAB_009914c5;
                                                  }
                                                  cVar1 = (**(code **)(*local_28 + 0x28))
                                                                    (local_28,0x14);
                                                  if (cVar1 != '\0') {
                                                    (**(code **)(*local_20 + 0x28))
                                                              (local_20,local_50);
                                                    goto LAB_00991458;
                                                  }
                                                  uVar3 = (**(code **)(*local_20 + 0x18))
                                                                    (local_20,0);
                                                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092f658);
                                                  if (cVar1 != '\0') {
                                                    uVar3 = (**(code **)(*local_20 + 0x18))
                                                                      (local_20,1);
                                                    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092d270);
                                                    if (cVar1 == '\0') {
                                                      uVar3 = (**(code **)(*local_20 + 0x18))
                                                                        (local_20,1);
                                                      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092d478);
                                                      if (cVar1 == '\0') {
                                                        uVar3 = (**(code **)(*local_20 + 0x18))
                                                                          (local_20,1);
                                                        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092d8b0
                                                                            );
                                                        if (cVar1 == '\0') {
                                                          uVar3 = (**(code **)(*local_20 + 0x18))
                                                                            (local_20,1);
                                                          cVar1 = FUN_004113d0(uVar3,&
                                                  PTR_FUN_0092dac8);
                                                  if (cVar1 == '\0') {
                                                    uVar3 = (**(code **)(*local_20 + 0x18))
                                                                      (local_20,1);
                                                    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092dcd0);
                                                    if (cVar1 == '\0') {
                                                      uVar3 = (**(code **)(*local_20 + 0x18))
                                                                        (local_20,1);
                                                      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092ded8);
                                                      if (cVar1 == '\0') {
                                                        uVar3 = (**(code **)(*local_20 + 0x18))
                                                                          (local_20,1);
                                                        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092b4c0
                                                                            );
                                                        if (cVar1 == '\0') {
                                                          local_58 = FUN_00995110(&PTR_FUN_0092ded8,
                                                                                  1,param_1,0);
                                                          uVar3 = (**(code **)(*local_20 + 0x20))
                                                                            (local_20);
                                                          *(undefined8 *)(local_58 + 0x18) = uVar3;
                                                          *(longlong *)(local_58 + 0x20) = local_50;
                                                          local_50 = local_58;
                                                          goto LAB_009914c5;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  uVar3 = (**(code **)(*local_20 + 0x18))
                                                                    (local_20,0);
                                                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00930728);
                                                  if (cVar1 == '\0') {
LAB_0099450f:
                                                    uVar3 = (**(code **)(*local_20 + 0x18))
                                                                      (local_20,0);
                                                    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_009305a8);
                                                    if (cVar1 == '\0') {
LAB_0099462d:
                                                      uVar3 = (**(code **)(*local_20 + 0x18))
                                                                        (local_20,0);
                                                      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00930428);
                                                      if (cVar1 == '\0') {
LAB_0099474b:
                                                        local_58 = FUN_00995110(&PTR_FUN_0092d8b0,1,
                                                                                param_1,0);
                                                        *(longlong *)(local_58 + 0x18) = local_50;
                                                        local_50 = local_58;
                                                      }
                                                      else {
                                                        uVar3 = (**(code **)(*local_20 + 0x18))
                                                                          (local_20,1);
                                                        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092d8b0
                                                                            );
                                                        if (cVar1 == '\0') {
                                                          uVar3 = (**(code **)(*local_20 + 0x18))
                                                                            (local_20,1);
                                                          cVar1 = FUN_004113d0(uVar3,&
                                                  PTR_FUN_0092dac8);
                                                  if (cVar1 == '\0') {
                                                    uVar3 = (**(code **)(*local_20 + 0x18))
                                                                      (local_20,1);
                                                    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092dcd0);
                                                    if (cVar1 == '\0') goto LAB_0099474b;
                                                  }
                                                  }
                                                  uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                                  FUN_00410f20(uVar3);
                                                  local_58 = FUN_00995110(&PTR_FUN_0092dcd0,1,
                                                                          param_1,0);
                                                  uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                                  *(undefined8 *)(local_58 + 0x18) = uVar3;
                                                  *(longlong *)(local_58 + 0x20) = local_50;
                                                  local_50 = local_58;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = (**(code **)(*local_20 + 0x18))
                                                                      (local_20,1);
                                                    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092d8b0);
                                                    if (cVar1 == '\0') {
                                                      uVar3 = (**(code **)(*local_20 + 0x18))
                                                                        (local_20,1);
                                                      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092dac8);
                                                      if (cVar1 == '\0') {
                                                        uVar3 = (**(code **)(*local_20 + 0x18))
                                                                          (local_20,1);
                                                        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092dcd0
                                                                            );
                                                        if (cVar1 == '\0') goto LAB_0099462d;
                                                      }
                                                    }
                                                    uVar3 = (**(code **)(*local_20 + 0x20))
                                                                      (local_20);
                                                    FUN_00410f20(uVar3);
                                                    local_58 = FUN_00995110(&PTR_FUN_0092dac8,1,
                                                                            param_1,0);
                                                    uVar3 = (**(code **)(*local_20 + 0x20))
                                                                      (local_20);
                                                    *(undefined8 *)(local_58 + 0x18) = uVar3;
                                                    *(longlong *)(local_58 + 0x20) = local_50;
                                                    local_50 = local_58;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = (**(code **)(*local_20 + 0x18))
                                                                      (local_20,1);
                                                    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092d8b0);
                                                    if (cVar1 == '\0') {
                                                      uVar3 = (**(code **)(*local_20 + 0x18))
                                                                        (local_20,1);
                                                      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092dac8);
                                                      if (cVar1 == '\0') {
                                                        uVar3 = (**(code **)(*local_20 + 0x18))
                                                                          (local_20,1);
                                                        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092dcd0
                                                                            );
                                                        if (cVar1 == '\0') goto LAB_0099450f;
                                                      }
                                                    }
                                                    uVar3 = (**(code **)(*local_20 + 0x20))
                                                                      (local_20);
                                                    FUN_00410f20(uVar3);
                                                    local_58 = FUN_00995110(&PTR_FUN_0092d8b0,1,
                                                                            param_1,0);
                                                    uVar3 = (**(code **)(*local_20 + 0x20))
                                                                      (local_20);
                                                    *(undefined8 *)(local_58 + 0x18) = uVar3;
                                                    *(longlong *)(local_58 + 0x20) = local_50;
                                                    local_50 = local_58;
                                                  }
                                                  goto LAB_009914c5;
                                                  }
                                                  uVar3 = (**(code **)(*local_20 + 0x18))
                                                                    (local_20,0);
                                                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092f1c8);
                                                  if (cVar1 == '\0') {
                                                    local_58 = FUN_00995110(&PTR_FUN_0092b6c8,1,
                                                                            param_1,0);
                                                    *(longlong *)(local_58 + 0x20) = local_50;
                                                    local_50 = local_58;
                                                  }
                                                  else {
                                                    uVar3 = (**(code **)(*local_20 + 0x18))
                                                                      (local_20,1);
                                                    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092b928);
                                                    if (cVar1 == '\0') {
                                                      uVar3 = (**(code **)(*local_20 + 0x18))
                                                                        (local_20,1);
                                                      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092b6c8);
                                                      if (cVar1 == '\0') {
                                                        lVar5 = (**(code **)(*local_20 + 0x18))
                                                                          (local_20,1);
                                                        if (lVar5 != 0) {
                                                          uVar3 = (**(code **)(*local_20 + 0x18))
                                                                            (local_20,1);
                                                          cVar1 = FUN_004113d0(uVar3,&
                                                  PTR_FUN_0092f348);
                                                  if (cVar1 == '\0') {
                                                    uVar3 = (**(code **)(*local_20 + 0x18))
                                                                      (local_20,1);
                                                    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092e0e0);
                                                    if (cVar1 == '\0') {
                                                      (**(code **)(*local_20 + 0x28))
                                                                (local_20,local_50);
                                                      goto LAB_00991458;
                                                    }
                                                  }
                                                  }
                                                  uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                                  FUN_00410f20(uVar3);
                                                  local_58 = FUN_00995110(&PTR_FUN_0092b6c8,1,
                                                                          param_1,0);
                                                  uVar3 = FUN_00995110(&PTR_FUN_00928b30,1,param_1);
                                                  *(undefined8 *)(local_58 + 0x18) = uVar3;
                                                  *(longlong *)(local_58 + 0x20) = local_50;
                                                  local_50 = local_58;
                                                  }
                                                  else {
                                                    uVar3 = (**(code **)(*local_20 + 0x20))
                                                                      (local_20);
                                                    FUN_00410f20(uVar3);
                                                    plVar4 = (longlong *)
                                                             (**(code **)(*local_20 + 0x18))
                                                                       (local_20,0);
                                                    cVar1 = (**(code **)(*plVar4 + 0x40))
                                                                      (plVar4,local_50);
                                                    if (cVar1 == '\0') {
                                                      (**(code **)(*local_20 + 0x28))
                                                                (local_20,local_50);
                                                      goto LAB_00991458;
                                                    }
                                                    local_50 = (**(code **)(*local_20 + 0x20))
                                                                         (local_20);
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = (**(code **)(*local_20 + 0x20))
                                                                      (local_20);
                                                    FUN_00410f20(uVar3);
                                                    local_58 = FUN_00995110(&PTR_FUN_0092b6c8,1,
                                                                            param_1,0);
                                                    uVar3 = (**(code **)(*local_20 + 0x20))
                                                                      (local_20);
                                                    *(undefined8 *)(local_58 + 0x18) = uVar3;
                                                    *(longlong *)(local_58 + 0x20) = local_50;
                                                    local_50 = local_58;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    lVar5 = (**(code **)(*local_20 + 0x18))
                                                                      (local_20,0);
                                                    if (lVar5 != 0) {
                                                      uVar3 = (**(code **)(*local_20 + 0x18))
                                                                        (local_20,0);
                                                      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092f348);
                                                      if (cVar1 != '\0') goto LAB_00993e81;
LAB_00993eff:
                                                      (**(code **)(*local_20 + 0x28))
                                                                (local_20,local_50);
                                                      goto LAB_00991458;
                                                    }
LAB_00993e81:
                                                    cVar1 = (**(code **)(*local_28 + 0x28))
                                                                      (local_28,0x2e);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = (**(code **)(*local_28 + 0x28))
                                                                        (local_28,0x14);
                                                      if (cVar1 == '\0') goto LAB_00993eff;
                                                    }
                                                    FUN_00410f20(local_50);
                                                    local_50 = FUN_00995110(&PTR_FUN_0092b6c8,1,
                                                                            param_1,0);
                                                    uVar3 = FUN_00995110(&PTR_FUN_00928b30,1,param_1
                                                                        );
                                                    *(undefined8 *)(local_50 + 0x18) = uVar3;
                                                  }
                                                }
                                                else {
                                                  FUN_00410f20(local_50);
                                                  local_50 = FUN_00995110(&PTR_FUN_00928cc0,1,
                                                                          param_1,0);
                                                  uVar3 = FUN_009953a0(&PTR_FUN_0092a758,1,param_1);
                                                  *(undefined8 *)(local_50 + 0x18) = uVar3;
                                                  uVar3 = FUN_00995110(&PTR_FUN_0092a8e8,1,param_1);
                                                  *(undefined8 *)
                                                   (*(longlong *)(local_50 + 0x18) + 0x18) = uVar3;
                                                  uVar3 = FUN_00995110(&PTR_FUN_00931170,1,param_1);
                                                  *(undefined8 *)
                                                   (*(longlong *)
                                                     (*(longlong *)(local_50 + 0x18) + 0x18) + 0x18)
                                                       = uVar3;
                                                }
                                                goto LAB_009914c5;
                                              }
                                              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092acb8);
                                              if (cVar1 != '\0') {
                                                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092e3e0);
                                                if (cVar1 != '\0') {
                                                  FUN_00410f20(local_50);
                                                  local_50 = FUN_00995110(&PTR_FUN_0092aae0,1,
                                                                          param_1,0);
                                                  uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                                  *(undefined8 *)(local_50 + 0x18) = uVar3;
                                                  uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                                  FUN_00410f20(uVar3);
                                                  goto LAB_009914c5;
                                                }
                                              }
                                              (**(code **)(*local_20 + 0x28))(local_20,local_50);
                                              goto LAB_00991458;
                                            }
                                            uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092e0e0);
                                            if (cVar1 == '\0') {
LAB_00993788:
                                              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092ee58);
                                              if (cVar1 != '\0') {
                                                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092e0e0);
                                                if (cVar1 != '\0') {
                                                  uVar3 = (**(code **)(*local_20 + 0x18))
                                                                    (local_20,2);
                                                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_009312f0);
                                                  if (cVar1 != '\0') {
                                                    FUN_00410f20(local_50);
                                                    local_50 = FUN_00995110(&PTR_FUN_0092a8e8,1,
                                                                            param_1,0);
                                                    local_78 = (**(code **)(*local_20 + 0x20))
                                                                         (local_20);
                                                    uVar3 = (**(code **)(*local_20 + 0x20))
                                                                      (local_20);
                                                    FUN_00410f20(uVar3);
                                                    local_70 = (**(code **)(*local_20 + 0x20))
                                                                         (local_20);
                                                    *(undefined8 *)(local_70 + 0x18) = local_78;
                                                    *(longlong *)(local_50 + 0x18) = local_70;
                                                    goto LAB_009914c5;
                                                  }
                                                }
                                              }
                                              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092acb8);
                                              if (cVar1 != '\0') {
                                                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092e0e0);
                                                if (cVar1 != '\0') {
                                                  uVar3 = (**(code **)(*local_20 + 0x18))
                                                                    (local_20,2);
                                                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_009308a8);
                                                  if (cVar1 == '\0') {
                                                    FUN_00410f20(local_50);
                                                    local_58 = FUN_00995110(&PTR_FUN_0092aec0,1,
                                                                            param_1,0);
                                                    uVar3 = (**(code **)(*local_20 + 0x20))
                                                                      (local_20);
                                                    *(undefined8 *)(local_58 + 0x18) = uVar3;
                                                    uVar3 = (**(code **)(*local_20 + 0x20))
                                                                      (local_20);
                                                    FUN_00410f20(uVar3);
                                                    local_50 = local_58;
                                                    goto LAB_009914c5;
                                                  }
                                                }
                                              }
                                              local_68 = (longlong *)
                                                         FUN_00997150(&PTR_FUN_0092b0d8,1,param_1);
                                              do {
                                                while( true ) {
                                                  uVar3 = (**(code **)(*local_20 + 0x18))
                                                                    (local_20,0);
                                                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092acb8);
                                                  if (cVar1 == '\0') goto code_r0x00993a8c;
                                                  local_80 = local_68[6];
                                                  local_88 = (**(code **)(*local_20 + 0x20))
                                                                       (local_20);
                                                  FUN_00599f70(local_80 + 8,0,&local_88);
                                                  uVar3 = (**(code **)(*local_20 + 0x18))
                                                                    (local_20,0);
                                                  cVar1 = FUN_004113d0(uVar3);
                                                  if (cVar1 == '\0') break;
                                                  uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                                  FUN_00410f20(uVar3);
                                                }
                                                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                                cVar1 = FUN_004113d0(uVar3);
                                              } while (cVar1 != '\0');
code_r0x00993a8c:
                                              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092e0e0);
                                              if (cVar1 != '\0') {
                                                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_009308a8);
                                                if (cVar1 != '\0') {
                                                  FUN_00410f20(local_50);
                                                  uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                                  FUN_00410f20(uVar3);
                                                  lVar5 = (**(code **)(*local_20 + 0x18))
                                                                    (local_20,0);
                                                  (**(code **)(*local_68 + 0x48))
                                                            (local_68,*(undefined8 *)(lVar5 + 0x28))
                                                  ;
                                                  uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                                  FUN_00410f20(uVar3);
                                                  local_58 = FUN_00995110(&PTR_FUN_0092aec0,1,
                                                                          param_1,0);
                                                  *(longlong **)(local_58 + 0x18) = local_68;
                                                  local_50 = local_58;
                                                  goto LAB_009914c5;
                                                }
                                              }
                                              (**(code **)(*local_20 + 0x28))(local_20,local_68);
                                              (**(code **)(*local_20 + 0x28))(local_20,local_50);
                                              goto LAB_00991458;
                                            }
                                            uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00930f88);
                                            if (cVar1 == '\0') {
                                              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00931170);
                                              if (cVar1 == '\0') {
                                                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_009312f0);
                                                if (cVar1 == '\0') {
                                                  uVar3 = (**(code **)(*local_20 + 0x18))
                                                                    (local_20,1);
                                                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_009314d8);
                                                  if (cVar1 == '\0') goto LAB_00993788;
                                                }
                                              }
                                            }
                                            FUN_00410f20(local_50);
                                            local_50 = FUN_00995110(&PTR_FUN_0092a8e8,1,param_1,0);
                                            uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                            FUN_00410f20(uVar3);
                                            uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                            *(undefined8 *)(local_50 + 0x18) = uVar3;
                                          }
                                          else {
                                            local_58 = FUN_00995110(&PTR_FUN_0092b928,1,param_1,0);
                                            *(longlong *)(local_58 + 0x18) = local_50;
                                            local_50 = local_58;
                                          }
                                        }
                                        else {
                                          uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092b928);
                                          if (cVar1 == '\0') {
                                            cVar1 = (**(code **)(*local_28 + 0x28))(local_28,2);
                                            if (cVar1 != '\0') {
                                              (**(code **)(*local_20 + 0x28))(local_20,local_50);
                                              goto LAB_00991458;
                                            }
                                            uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092aae0);
                                            if (cVar1 == '\0') {
                                              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092a8e8);
                                              if (cVar1 == '\0') {
                                                (**(code **)(*local_20 + 0x28))(local_20,local_50);
                                                goto LAB_00991458;
                                              }
                                              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092ecd8);
                                              if (cVar1 == '\0') {
                                                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092e9e8);
                                                if (cVar1 == '\0') {
                                                  local_60 = (**(code **)(*local_20 + 0x20))
                                                                       (local_20);
                                                  local_48 = FUN_009953a0(&PTR_FUN_009297c8,1,
                                                                          param_1);
                                                  *(undefined8 *)(local_48 + 0x18) = local_60;
                                                  *(longlong *)(local_48 + 0x20) = local_50;
                                                  local_50 = FUN_00995110(&PTR_FUN_00928cc0,1,
                                                                          param_1,0);
                                                  *(longlong *)(local_50 + 0x18) = local_48;
                                                }
                                                else {
                                                  local_60 = (**(code **)(*local_20 + 0x20))
                                                                       (local_20);
                                                  uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                                  FUN_00410f20(uVar3);
                                                  local_48 = FUN_00995b30(&PTR_FUN_009295d0,1,
                                                                          param_1);
                                                  *(undefined8 *)(local_48 + 0x18) = local_60;
                                                  *(longlong *)(local_48 + 0x20) = local_50;
                                                  local_50 = FUN_00995110(&PTR_FUN_00928cc0,1,
                                                                          param_1,0);
                                                  *(longlong *)(local_50 + 0x18) = local_48;
                                                }
                                              }
                                              else {
                                                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,2);
                                                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00928ef0);
                                                if (cVar1 == '\0') {
                                                  (**(code **)(*local_20 + 0x28))(local_20,local_50)
                                                  ;
                                                  goto LAB_00991458;
                                                }
                                                local_60 = (**(code **)(*local_20 + 0x20))(local_20)
                                                ;
                                                uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                                FUN_00410f20(uVar3);
                                                local_48 = (**(code **)(*local_20 + 0x20))(local_20)
                                                ;
                                                *(undefined8 *)(local_48 + 0x18) = local_60;
                                                *(longlong *)(local_48 + 0x20) = local_50;
                                                local_50 = FUN_00995110(&PTR_FUN_00928cc0,1,param_1,
                                                                        0);
                                                *(longlong *)(local_50 + 0x18) = local_48;
                                              }
                                            }
                                            else {
                                              local_58 = (**(code **)(*local_20 + 0x20))(local_20);
                                              *(longlong *)(local_58 + 0x20) = local_50;
                                              local_50 = local_58;
                                            }
                                          }
                                          else {
                                            local_58 = FUN_00995110(&PTR_FUN_0092b928,1,param_1,0);
                                            uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                            *(undefined8 *)(local_58 + 0x18) = uVar3;
                                            *(longlong *)(local_58 + 0x20) = local_50;
                                            local_50 = local_58;
                                          }
                                        }
                                        goto LAB_009914c5;
                                      }
                                      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x13);
                                      if (cVar1 != '\0') {
                                        (**(code **)(*local_20 + 0x28))(local_20,local_50);
                                        goto LAB_00991458;
                                      }
                                      uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092f348);
                                      if (cVar1 != '\0') {
                                        uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092b4c0);
                                        if (cVar1 != '\0') {
                                          uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                          FUN_00410f20(uVar3);
                                          local_58 = FUN_00995110(&PTR_FUN_0092b4c0,1,param_1,0);
                                          uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                          *(undefined8 *)(local_58 + 0x18) = uVar3;
                                          *(longlong *)(local_58 + 0x20) = local_50;
                                          local_50 = local_58;
                                          goto LAB_009914c5;
                                        }
                                      }
                                      local_58 = FUN_00995110(&PTR_FUN_0092b4c0,1,param_1,0);
                                      *(longlong *)(local_58 + 0x18) = local_50;
                                      local_50 = local_58;
                                      goto LAB_009914c5;
                                    }
                                    cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x14);
                                    if (cVar1 == '\0') {
                                      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x12);
                                      if (cVar1 == '\0') {
                                        cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x11);
                                        if (cVar1 == '\0') {
                                          cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x10);
                                          if (cVar1 == '\0') {
                                            cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x15);
                                            if (cVar1 == '\0') {
                                              cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x16)
                                              ;
                                              if (cVar1 == '\0') {
                                                cVar1 = (**(code **)(*local_28 + 0x28))
                                                                  (local_28,0x19);
                                                if (cVar1 == '\0') {
                                                  cVar1 = (**(code **)(*local_28 + 0x28))
                                                                    (local_28,0x1a);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = (**(code **)(*local_28 + 0x28))
                                                                      (local_28,0x1b);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = (**(code **)(*local_28 + 0x28))
                                                                        (local_28,0x1c);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = (**(code **)(*local_28 + 0x28))
                                                                          (local_28,0x17);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = (**(code **)(*local_28 + 0x28))
                                                                            (local_28,0x18);
                                                          if (cVar1 == '\0') {
                                                            cVar1 = (**(code **)(*local_28 + 0x28))
                                                                              (local_28,0xe);
                                                            if (cVar1 == '\0') {
                                                              cVar1 = (**(code **)(*local_28 + 0x28)
                                                                      )(local_28,0xf);
                                                              if (cVar1 == '\0') {
                                                                local_58 = FUN_00995110(&
                                                  PTR_FUN_0092acb8,1,param_1,0);
                                                  *(longlong *)(local_58 + 0x18) = local_50;
                                                  local_50 = local_58;
                                                  goto LAB_009914c5;
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
                                    }
                                    (**(code **)(*local_20 + 0x28))(local_20,local_50);
                                    goto LAB_00991458;
                                  }
                                  local_58 = FUN_00995110(&PTR_FUN_0092aec0,1,param_1,0);
                                  *(longlong *)(local_58 + 0x18) = local_50;
                                  local_50 = local_58;
                                }
                                else {
                                  cVar1 = (**(code **)(*local_28 + 0x28))(local_28,2);
                                  if (cVar1 != '\0') {
                                    (**(code **)(*local_20 + 0x28))(local_20,local_50);
                                    goto LAB_00991458;
                                  }
                                  uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092ecd8);
                                  if (cVar1 == '\0') {
                                    uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092e9e8);
                                    if (cVar1 == '\0') {
                                      local_58 = FUN_009953a0(&PTR_FUN_009297c8,1,param_1);
                                      *(longlong *)(local_58 + 0x18) = local_50;
                                      local_50 = FUN_00995110(&PTR_FUN_00928cc0,1,param_1,0);
                                      *(longlong *)(local_50 + 0x18) = local_58;
                                    }
                                    else {
                                      uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                      FUN_00410f20(uVar3);
                                      local_58 = FUN_00995b30(&PTR_FUN_009295d0,1,param_1);
                                      *(longlong *)(local_58 + 0x18) = local_50;
                                      local_50 = FUN_00995110(&PTR_FUN_00928cc0,1,param_1,0);
                                      *(longlong *)(local_50 + 0x18) = local_58;
                                    }
                                  }
                                  else {
                                    uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00928ef0);
                                    if (cVar1 == '\0') {
                                      (**(code **)(*local_20 + 0x28))(local_20,local_50);
                                      goto LAB_00991458;
                                    }
                                    uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                    FUN_00410f20(uVar3);
                                    local_58 = (**(code **)(*local_20 + 0x20))(local_20);
                                    *(longlong *)(local_58 + 0x18) = local_50;
                                    local_50 = FUN_00995110(&PTR_FUN_00928cc0,1,param_1,0);
                                    *(longlong *)(local_50 + 0x18) = local_58;
                                  }
                                }
                              }
                              else {
                                local_58 = FUN_00995110(&PTR_FUN_0092a8e8,1,param_1,0);
                                *(longlong *)(local_58 + 0x18) = local_50;
                                local_50 = local_58;
                              }
                              goto LAB_009914c5;
                            }
                          }
                          cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x14);
                          if (cVar1 == '\0') {
                            cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x12);
                            if (cVar1 == '\0') {
                              cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x11);
                              if (cVar1 == '\0') {
                                cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x10);
                                if (cVar1 == '\0') {
                                  cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x15);
                                  if ((cVar1 == '\0') &&
                                     (cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x16),
                                     cVar1 == '\0')) {
                                    uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092fae8);
                                    if (cVar1 == '\0') {
LAB_009926c9:
                                      uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092fc68);
                                      if (cVar1 == '\0') {
LAB_00992817:
                                        uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092fdf8);
                                        if (cVar1 == '\0') {
LAB_00992965:
                                          uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092ff88);
                                          if (cVar1 == '\0') {
LAB_00992ab3:
                                            local_58 = FUN_00995110(&PTR_FUN_0092c7c0,1,param_1,0);
                                            *(longlong *)(local_58 + 0x18) = local_50;
                                            local_50 = local_58;
                                          }
                                          else {
                                            uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092c7c0);
                                            if (cVar1 == '\0') {
                                              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092c9d8);
                                              if (cVar1 == '\0') {
                                                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092cc10);
                                                if (cVar1 == '\0') {
                                                  uVar3 = (**(code **)(*local_20 + 0x18))
                                                                    (local_20,1);
                                                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092ce28);
                                                  if (cVar1 == '\0') goto LAB_00992ab3;
                                                }
                                              }
                                            }
                                            uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                            FUN_00410f20(uVar3);
                                            local_58 = FUN_00995110(&PTR_FUN_0092ce28,1,param_1,0);
                                            uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                            *(undefined8 *)(local_58 + 0x18) = uVar3;
                                            *(longlong *)(local_58 + 0x20) = local_50;
                                            local_50 = local_58;
                                          }
                                        }
                                        else {
                                          uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092c7c0);
                                          if (cVar1 == '\0') {
                                            uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092c9d8);
                                            if (cVar1 == '\0') {
                                              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092cc10);
                                              if (cVar1 == '\0') {
                                                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092ce28);
                                                if (cVar1 == '\0') goto LAB_00992965;
                                              }
                                            }
                                          }
                                          uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                          FUN_00410f20(uVar3);
                                          local_58 = FUN_00995110(&PTR_FUN_0092cc10,1,param_1,0);
                                          uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                          *(undefined8 *)(local_58 + 0x18) = uVar3;
                                          *(longlong *)(local_58 + 0x20) = local_50;
                                          local_50 = local_58;
                                        }
                                      }
                                      else {
                                        uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092c7c0);
                                        if (cVar1 == '\0') {
                                          uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092c9d8);
                                          if (cVar1 == '\0') {
                                            uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092cc10);
                                            if (cVar1 == '\0') {
                                              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092ce28);
                                              if (cVar1 == '\0') goto LAB_00992817;
                                            }
                                          }
                                        }
                                        uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                        FUN_00410f20(uVar3);
                                        local_58 = FUN_00995110(&PTR_FUN_0092c9d8,1,param_1,0);
                                        uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                        *(undefined8 *)(local_58 + 0x18) = uVar3;
                                        *(longlong *)(local_58 + 0x20) = local_50;
                                        local_50 = local_58;
                                      }
                                    }
                                    else {
                                      uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092c7c0);
                                      if (cVar1 == '\0') {
                                        uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092c9d8);
                                        if (cVar1 == '\0') {
                                          uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092cc10);
                                          if (cVar1 == '\0') {
                                            uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092ce28);
                                            if (cVar1 == '\0') goto LAB_009926c9;
                                          }
                                        }
                                      }
                                      uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                      FUN_00410f20(uVar3);
                                      local_58 = FUN_00995110(&PTR_FUN_0092c7c0,1,param_1,0);
                                      uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                      *(undefined8 *)(local_58 + 0x18) = uVar3;
                                      *(longlong *)(local_58 + 0x20) = local_50;
                                      local_50 = local_58;
                                    }
                                    goto LAB_009914c5;
                                  }
                                }
                              }
                            }
                          }
                          (**(code **)(*local_20 + 0x28))(local_20,local_50);
                          goto LAB_00991458;
                        }
                        uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092e0e0);
                        if (cVar1 != '\0') {
                          uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_009312f0);
                          if (cVar1 != '\0') {
                            cVar1 = (**(code **)(*local_28 + 0x28))(local_28,1);
                            if (cVar1 != '\0') {
                              (**(code **)(*local_20 + 0x28))(local_20,local_50);
                              goto LAB_00991458;
                            }
                          }
                        }
                        local_58 = FUN_00995110(&PTR_FUN_0092aec0,1,param_1,0);
                        *(longlong *)(local_58 + 0x18) = local_50;
                        local_50 = local_58;
                        goto LAB_009914c5;
                      }
                    }
                    cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x14);
                    if (cVar1 == '\0') {
                      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x12);
                      if (cVar1 == '\0') {
                        cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x11);
                        if (cVar1 == '\0') {
                          cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x10);
                          if (cVar1 == '\0') {
                            cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x15);
                            if (cVar1 == '\0') {
                              cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x16);
                              if (cVar1 == '\0') {
                                cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x19);
                                if (cVar1 == '\0') {
                                  cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x1a);
                                  if (cVar1 == '\0') {
                                    cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x1b);
                                    if (cVar1 == '\0') {
                                      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x1c);
                                      if (cVar1 == '\0') {
                                        cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x17);
                                        if ((cVar1 == '\0') &&
                                           (cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x18),
                                           cVar1 == '\0')) {
                                          uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00930128);
                                          if (cVar1 != '\0') {
                                            uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092bd48);
                                            if (cVar1 != '\0') {
                                              uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                              FUN_00410f20(uVar3);
                                              local_58 = FUN_00995110(&PTR_FUN_0092bd48,1,param_1,0)
                                              ;
                                              uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                              *(undefined8 *)(local_58 + 0x18) = uVar3;
                                              *(longlong *)(local_58 + 0x20) = local_50;
                                              local_50 = local_58;
                                              goto LAB_009914c5;
                                            }
                                          }
                                          local_58 = FUN_00995110(&PTR_FUN_0092bd48,1,param_1,0);
                                          *(longlong *)(local_58 + 0x18) = local_50;
                                          local_50 = local_58;
                                          goto LAB_009914c5;
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
                    (**(code **)(*local_20 + 0x28))(local_20,local_50);
                    goto LAB_00991458;
                  }
                }
              }
            }
            cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x14);
            if (cVar1 == '\0') {
              cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x12);
              if (cVar1 == '\0') {
                cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x11);
                if (cVar1 == '\0') {
                  cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x10);
                  if (cVar1 == '\0') {
                    cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x15);
                    if (cVar1 == '\0') {
                      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x16);
                      if (cVar1 == '\0') {
                        cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x19);
                        if (cVar1 == '\0') {
                          cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x1a);
                          if (cVar1 == '\0') {
                            cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x1b);
                            if ((cVar1 == '\0') &&
                               (cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x1c),
                               cVar1 == '\0')) {
                              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092f7d8);
                              if (cVar1 == '\0') {
LAB_00991f20:
                                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
                                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092f958);
                                if (cVar1 == '\0') {
LAB_00992012:
                                  local_58 = FUN_00995110(&PTR_FUN_0092c170,1,param_1,0);
                                  *(longlong *)(local_58 + 0x18) = local_50;
                                  local_50 = local_58;
                                }
                                else {
                                  uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092c170);
                                  if (cVar1 == '\0') {
                                    uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092c388);
                                    if (cVar1 == '\0') goto LAB_00992012;
                                  }
                                  uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                  FUN_00410f20(uVar3);
                                  local_58 = FUN_00995110(&PTR_FUN_0092c388,1,param_1,0);
                                  uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                  *(undefined8 *)(local_58 + 0x18) = uVar3;
                                  *(longlong *)(local_58 + 0x20) = local_50;
                                  local_50 = local_58;
                                }
                              }
                              else {
                                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092c170);
                                if (cVar1 == '\0') {
                                  uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092c388);
                                  if (cVar1 == '\0') goto LAB_00991f20;
                                }
                                uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                FUN_00410f20(uVar3);
                                local_58 = FUN_00995110(&PTR_FUN_0092c170,1,param_1,0);
                                uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
                                *(undefined8 *)(local_58 + 0x18) = uVar3;
                                *(longlong *)(local_58 + 0x20) = local_50;
                                local_50 = local_58;
                              }
                              goto LAB_009914c5;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*local_20 + 0x28))(local_20,local_50);
            goto LAB_00991458;
          }
          cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x13);
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*local_28 + 0x28))(local_28,2);
            if (cVar1 != '\0') goto LAB_00991c22;
            local_58 = FUN_00995110(&PTR_FUN_0092b6c8,1,param_1,0);
            *(longlong *)(local_58 + 0x18) = local_50;
            local_50 = local_58;
            goto LAB_009914c5;
          }
LAB_00991c22:
          (**(code **)(*local_20 + 0x28))(local_20,local_50);
          goto LAB_00991458;
        }
      }
    }
    cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x14);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x12);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x11);
        if ((cVar1 == '\0') &&
           (cVar1 = (**(code **)(*local_28 + 0x28))(local_28,0x10), cVar1 == '\0')) {
          uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092f4d8);
          if (cVar1 == '\0') {
LAB_0099198b:
            uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092f658);
            if (cVar1 == '\0') {
LAB_00991a7d:
              local_58 = FUN_00995110(&PTR_FUN_0092d270,1,param_1,0);
              *(longlong *)(local_58 + 0x18) = local_50;
              local_50 = local_58;
            }
            else {
              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092d270);
              if (cVar1 == '\0') {
                uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092d478);
                if (cVar1 == '\0') goto LAB_00991a7d;
              }
              uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
              FUN_00410f20(uVar3);
              local_58 = FUN_00995110(&PTR_FUN_0092d478,1,param_1,0);
              uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
              *(undefined8 *)(local_58 + 0x18) = uVar3;
              *(longlong *)(local_58 + 0x20) = local_50;
              local_50 = local_58;
            }
          }
          else {
            uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092d270);
            if (cVar1 == '\0') {
              uVar3 = (**(code **)(*local_20 + 0x18))(local_20,1);
              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092d478);
              if (cVar1 == '\0') goto LAB_0099198b;
            }
            uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
            FUN_00410f20(uVar3);
            local_58 = FUN_00995110(&PTR_FUN_0092d270,1,param_1,0);
            uVar3 = (**(code **)(*local_20 + 0x20))(local_20);
            *(undefined8 *)(local_58 + 0x18) = uVar3;
            *(longlong *)(local_58 + 0x20) = local_50;
            local_50 = local_58;
          }
          goto LAB_009914c5;
        }
      }
    }
    (**(code **)(*local_20 + 0x28))(local_20,local_50);
    goto LAB_00991458;
  }
  if ((local_31 == '.') && (iVar2 = (**(code **)*local_20)(local_20), iVar2 == 1)) {
    uVar3 = (**(code **)(*local_20 + 0x18))(local_20,0);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0092acb8);
    if (cVar1 != '\0') {
      lVar5 = (**(code **)(*local_20 + 0x20))(local_20);
      param_1[4] = lVar5;
      local_29 = 1;
      goto code_r0x009948ce;
    }
  }
  local_29 = 0;
code_r0x009948ce:
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414520(&local_40);
  return local_29;
}

