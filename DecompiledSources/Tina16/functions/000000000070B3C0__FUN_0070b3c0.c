/* Ghidra address: 0070b3c0 */
/* Ghidra symbol: FUN_0070b3c0 */


void FUN_0070b3c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  int extraout_var_02;
  int extraout_var_03;
  undefined4 extraout_var_04;
  double dVar8;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined1 local_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_30;
  
  if ((char)param_1[0xe] == '\x1c') {
    FUN_00811d00(param_1,&local_74);
    local_5c = local_74;
    local_64 = local_6c;
    uVar7 = FUN_00786090(param_1);
    thunk_FUN_0415f9d2(uVar7,&local_5c);
    uVar7 = FUN_00786090(param_1);
    thunk_FUN_0415f9d2(uVar7,&local_64);
    FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    if ((extraout_var < local_5c._4_4_) &&
       (FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8), (int)param_1[0xb] <= extraout_var_00)) {
      *(int *)(param_1 + 0xb) = local_5c._4_4_;
    }
    else {
      FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
      if ((local_64._4_4_ < extraout_var_01) &&
         (FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8), extraout_var_02 <= (int)param_1[0xb])) {
        *(int *)(param_1 + 0xb) = local_64._4_4_;
      }
      else {
        local_40 = 0x17;
        local_44 = 0x1c;
        uVar7 = FUN_00786090(param_1);
        thunk_FUN_04083ff6(uVar7,1,&local_44);
        FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
        iVar4 = FUN_004230c0(&local_74);
        *(float *)((longlong)param_1 + 0x5c) =
             *(float *)((longlong)param_1 + 0x5c) +
             (float)(local_38 - local_3c) *
             ((float)(extraout_var_03 - (int)param_1[0xb]) / (float)iVar4);
        FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
        *(undefined4 *)(param_1 + 0xb) = extraout_var_04;
        cVar2 = FUN_004113d0(param_1[2],&PTR_FUN_006c6e18);
        if (cVar2 == '\0') {
          uVar7 = FUN_00786090(param_1);
          uVar3 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
          local_7c = CONCAT22(uVar3,4);
          thunk_FUN_0413e052(uVar7,0x115,(longlong)local_7c,0);
        }
        else {
          uVar7 = FUN_00786090(param_1);
          uVar3 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
          local_78 = CONCAT22(uVar3,5);
          thunk_FUN_0413e052(uVar7,0x115,(longlong)local_78,0);
          if (*(char *)(param_1[2] + 0x4a1) == '\x03') {
            dVar8 = (double)FUN_0040c850((double)*(float *)((longlong)param_1 + 0x5c) -
                                         (double)*(float *)((longlong)param_1 + 0x54));
            if (((1.0 <= dVar8) ||
                ((*(float *)((longlong)param_1 + 0x5c) == (float)local_3c &&
                 (*(float *)((longlong)param_1 + 0x54) != *(float *)((longlong)param_1 + 0x5c)))))
               || ((*(float *)((longlong)param_1 + 0x5c) == (float)local_38 &&
                   (*(float *)((longlong)param_1 + 0x54) != *(float *)((longlong)param_1 + 0x5c)))))
            {
              if (*(char *)(param_1[2] + 0x778) == '\0') {
                uVar7 = FUN_00786090(param_1);
                FUN_00611d40(uVar7,0,local_54,0);
                iVar4 = FUN_004230c0(local_54);
                iVar4 = FUN_0040c770(((double)*(float *)((longlong)param_1 + 0x5c) -
                                     (double)*(float *)((longlong)param_1 + 0x54)) * (double)iVar4);
              }
              else {
                iVar4 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c) -
                                     (double)*(float *)((longlong)param_1 + 0x54));
                if (local_30 + iVar4 < 0) {
                  iVar4 = -local_30;
                }
              }
              uVar7 = FUN_00786090(param_1);
              thunk_FUN_041b2403(uVar7,0x1014,0,(longlong)iVar4);
              *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x5c);
            }
          }
          else {
            dVar8 = (double)FUN_0040c850((double)*(float *)((longlong)param_1 + 0x5c) -
                                         (double)*(float *)((longlong)param_1 + 0x54));
            if (1.0 <= dVar8) {
              uVar7 = FUN_00786090(param_1);
              iVar4 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c) -
                                   (double)*(float *)((longlong)param_1 + 0x54));
              thunk_FUN_041b2403(uVar7,0x1014,0,(longlong)iVar4);
              *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x5c);
            }
          }
        }
        (**(code **)(*param_1 + 0xa0))(param_1);
        *(undefined1 *)(param_1 + 4) = 1;
      }
    }
  }
  else if ((char)param_1[10] == '\x18') {
    FUN_00812380(param_1,&local_74);
    local_5c = local_74;
    local_64 = local_6c;
    uVar7 = FUN_00786090(param_1);
    thunk_FUN_0415f9d2(uVar7,&local_5c);
    uVar7 = FUN_00786090(param_1);
    thunk_FUN_0415f9d2(uVar7,&local_64);
    iVar4 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    if ((iVar4 < (int)local_5c) &&
       (iVar4 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8), (int)param_1[0xb] <= iVar4)) {
      *(int *)(param_1 + 0xb) = (int)local_5c;
    }
    else {
      iVar4 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
      if (((int)local_64 < iVar4) &&
         (iVar4 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8), iVar4 <= (int)param_1[0xb])) {
        *(int *)(param_1 + 0xb) = (int)local_64;
      }
      else {
        local_40 = 0x17;
        local_44 = 0x1c;
        uVar7 = FUN_00786090(param_1);
        thunk_FUN_04083ff6(uVar7,0,&local_44);
        iVar4 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
        iVar5 = FUN_004230a0(&local_74);
        *(float *)((longlong)param_1 + 0x5c) =
             *(float *)((longlong)param_1 + 0x5c) +
             (float)(local_38 - local_3c) * ((float)(iVar4 - (int)param_1[0xb]) / (float)iVar5);
        if (*(float *)((longlong)param_1 + 0x5c) < (float)local_3c) {
          *(float *)((longlong)param_1 + 0x5c) = (float)local_3c;
        }
        if ((float)local_38 < *(float *)((longlong)param_1 + 0x5c)) {
          *(float *)((longlong)param_1 + 0x5c) = (float)local_38;
        }
        uVar6 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
        *(undefined4 *)(param_1 + 0xb) = uVar6;
        lVar1 = param_1[2];
        cVar2 = FUN_004113d0(lVar1,&PTR_FUN_006c6e18);
        if (cVar2 == '\0') {
          uVar7 = FUN_00786090(param_1);
          uVar3 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
          local_80 = CONCAT22(uVar3,4);
          thunk_FUN_0413e052(uVar7,0x114,(longlong)local_80,0);
        }
        else if (*(char *)(lVar1 + 0x4a1) == '\x03') {
          dVar8 = (double)FUN_0040c850((double)*(float *)((longlong)param_1 + 0x5c) -
                                       (double)*(float *)((longlong)param_1 + 0x54));
          if (1.0 <= dVar8) {
            uVar7 = FUN_00786090(param_1);
            iVar4 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c) -
                                 (double)*(float *)((longlong)param_1 + 0x54));
            thunk_FUN_041b2403(uVar7,0x1014,(longlong)iVar4,0);
            *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x5c);
          }
        }
        else {
          dVar8 = (double)FUN_0040c850((double)*(float *)((longlong)param_1 + 0x5c) -
                                       (double)*(float *)((longlong)param_1 + 0x54));
          if (0.5 <= dVar8) {
            uVar7 = FUN_00786090(param_1);
            iVar4 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c) -
                                 (double)*(float *)((longlong)param_1 + 0x54));
            thunk_FUN_041b2403(uVar7,0x1014,(longlong)iVar4,0);
            *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x5c);
          }
        }
        (**(code **)(*param_1 + 0xa0))(param_1);
        *(undefined1 *)(param_1 + 4) = 1;
      }
    }
  }
  else {
    if (((char)param_1[10] != '\x18') && ((char)param_1[10] == '\x17')) {
      *(undefined1 *)(param_1 + 10) = 0x16;
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    if (((char)param_1[0xe] != '\x1c') && ((char)param_1[0xe] == '\x1b')) {
      *(undefined1 *)(param_1 + 0xe) = 0x1a;
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    if ((*(char *)((longlong)param_1 + 0x51) != '\f') &&
       (*(char *)((longlong)param_1 + 0x51) == '\v')) {
      *(undefined1 *)((longlong)param_1 + 0x51) = 10;
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    if (((char)param_1[8] != '\x10') && ((char)param_1[8] == '\x0f')) {
      *(undefined1 *)(param_1 + 8) = 0xe;
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    if ((*(char *)((longlong)param_1 + 0x71) != '\x04') &&
       (*(char *)((longlong)param_1 + 0x71) == '\x03')) {
      *(undefined1 *)((longlong)param_1 + 0x71) = 2;
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    if (((char)param_1[0xc] != '\b') && ((char)param_1[0xc] == '\a')) {
      *(undefined1 *)(param_1 + 0xc) = 6;
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    FUN_00785c20(param_1,param_2);
    if (*(char *)((longlong)param_1 + 0x52) != '\0') {
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

