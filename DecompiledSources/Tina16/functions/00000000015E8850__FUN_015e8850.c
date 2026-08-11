/* Ghidra address: 015e8850 */
/* Ghidra symbol: FUN_015e8850 */


void FUN_015e8850(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [520];
  
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  if (param_2 < 0xe) {
    if (param_2 == 0xd) {
      *(undefined **)(param_1 + 0x1030) = &DAT_015e95dc;
    }
    else if (param_2 < 8) {
      if (param_2 == 7) {
        *(undefined **)(param_1 + 0x1030) = &DAT_015e95dc;
      }
      else if (param_2 < 5) {
        if (param_2 == 4) {
          uVar5 = FUN_00e0df00(&DAT_00e0c6b0,1);
          *(undefined8 *)(*(longlong *)(param_1 + 0x3060) + 0x20) = uVar5;
          FUN_01b20340(&local_220,
                       *(undefined8 *)
                        (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -0xf) * 8));
          FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 8,local_220);
          FUN_01b20340(&local_228,
                       *(undefined8 *)
                        (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -0xb) * 8));
          FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 0x10,local_228);
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20);
          *(undefined8 *)(lVar1 + 0x30) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -7) * 8);
          *(undefined8 *)(lVar1 + 0x38) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -5) * 8);
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20);
          *(undefined8 *)(lVar1 + 0x58) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8);
          FUN_004167d0(lVar1 + 0x18,
                       *(undefined8 *)
                        (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8));
          FUN_004167d0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 0x20,
                       *(undefined8 *)
                        (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
          FUN_004167d0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 0x28,
                       *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8))
          ;
        }
        else if (param_2 == 1) {
          FUN_00e08640(*(undefined8 *)(*(longlong *)(param_1 + 0x3060) + 8));
        }
        else if (param_2 == 2) {
          FUN_00e08640(*(undefined8 *)(*(longlong *)(param_1 + 0x3060) + 8));
        }
        else if (param_2 == 3) {
          FUN_00e08640(*(undefined8 *)(*(longlong *)(param_1 + 0x3060) + 8));
        }
      }
      else if (param_2 == 5) {
        uVar5 = FUN_00e0df00(&DAT_00e0c6b0,1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x3060) + 0x20) = uVar5;
        FUN_01b20340(&local_230,
                     *(undefined8 *)
                      (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -0x13) * 8));
        FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 8,local_230);
        FUN_01b20340(&local_238,
                     *(undefined8 *)
                      (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -0xf) * 8));
        FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 0x10,local_238);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20);
        *(undefined8 *)(lVar1 + 0x30) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -0xb) * 8);
        *(undefined8 *)(lVar1 + 0x38) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -9) * 8);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20);
        *(undefined8 *)(lVar1 + 0x40) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -7) * 8);
        *(undefined8 *)(lVar1 + 0x48) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -5) * 8);
        *(undefined8 *)(lVar1 + 0x58) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8);
        FUN_004167d0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 0x18,
                     *(undefined8 *)
                      (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8));
        FUN_004167d0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 0x20,
                     *(undefined8 *)
                      (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
        FUN_004167d0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 0x28,
                     *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
      }
      else if (param_2 == 6) {
        uVar5 = FUN_00e0df00(&DAT_00e0c6b0,1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x3060) + 0x20) = uVar5;
        FUN_01b20340(&local_240,
                     *(undefined8 *)
                      (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -0x11) * 8));
        FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 8,local_240);
        FUN_01b20340(&local_248,
                     *(undefined8 *)
                      (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -0xd) * 8));
        FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 0x10,local_248);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20);
        *(undefined8 *)(lVar1 + 0x30) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -9) * 8);
        *(undefined8 *)(lVar1 + 0x38) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -7) * 8);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20);
        *(undefined8 *)(lVar1 + 0x48) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -5) * 8);
        *(undefined8 *)(lVar1 + 0x58) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8);
        FUN_004167d0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 0x18,
                     *(undefined8 *)
                      (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8));
        FUN_004167d0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 0x20,
                     *(undefined8 *)
                      (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
        FUN_004167d0(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x20) + 0x28,
                     *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
      }
    }
    else if (param_2 < 0xb) {
      if (param_2 == 10) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
      }
      else if (param_2 == 8) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8);
      }
      else if (param_2 == 9) {
        uVar5 = FUN_004b6930(&PTR_FUN_00e0c328,1);
        *(undefined8 *)(param_1 + 0x1030) = uVar5;
      }
    }
    else if (param_2 == 0xb) {
      *(undefined **)(param_1 + 0x1030) = &DAT_015e95dc;
    }
    else if (param_2 == 0xc) {
      *(undefined8 *)(param_1 + 0x1030) =
           *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8);
    }
  }
  else if (param_2 < 0x14) {
    if (param_2 == 0x13) {
      FUN_01b20340(&local_260,
                   *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
      plVar7 = *(longlong **)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8);
      (**(code **)(*plVar7 + 0x78))(plVar7,local_260);
      *(undefined8 *)(param_1 + 0x1030) =
           *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8);
    }
    else if (param_2 < 0x11) {
      if (param_2 == 0x10) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8);
      }
      else if (param_2 == 0xe) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8);
      }
      else if (param_2 == 0xf) {
        uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
        *(undefined8 *)(param_1 + 0x1030) = uVar5;
      }
    }
    else if (param_2 == 0x11) {
      iVar2 = FUN_00414d00(*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8));
      iVar3 = FUN_00414d00(*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
      uVar5 = FUN_00442b60(iVar2 + iVar3 + 3);
      *(undefined8 *)(param_1 + 0x1030) = uVar5;
      FUN_004167d0(&local_250,
                   *(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8));
      uVar5 = FUN_00442620(uVar5,local_250);
      *(undefined8 *)(param_1 + 0x1030) = uVar5;
      uVar6 = FUN_00442620(local_218,&DAT_015e95ec);
      FUN_00442690(uVar5,uVar6);
      FUN_00442690(*(undefined8 *)(param_1 + 0x1030),
                   *(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
      uVar5 = FUN_00442620(local_218,&DAT_015e95fc);
      FUN_00442690(*(undefined8 *)(param_1 + 0x1030),uVar5);
      FUN_00442c30(*(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8));
      FUN_00442c30(*(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
    }
    else if (param_2 == 0x12) {
      plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      *(longlong **)(param_1 + 0x1030) = plVar7;
      FUN_01b20340(&local_258,
                   *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
      (**(code **)(*plVar7 + 0x78))(plVar7,local_258);
    }
  }
  else if (param_2 < 0x17) {
    if (param_2 == 0x16) {
      iVar3 = FUN_00414d00(*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8));
      iVar4 = FUN_00414d00(*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
      iVar2 = 0;
      if (*(longlong *)PTR_PTR_02001558 != 0) {
        iVar2 = *(int *)(*(longlong *)PTR_PTR_02001558 + -4);
      }
      uVar5 = FUN_00442b60(iVar3 + iVar4 + iVar2 + 1);
      *(undefined8 *)(param_1 + 0x1030) = uVar5;
      FUN_004167d0(&local_268,
                   *(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8));
      uVar5 = FUN_00442620(uVar5,local_268);
      *(undefined8 *)(param_1 + 0x1030) = uVar5;
      uVar6 = FUN_00442620(local_218,*(undefined8 *)PTR_PTR_02001558);
      FUN_00442690(uVar5,uVar6);
      FUN_00442690(*(undefined8 *)(param_1 + 0x1030),
                   *(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
      FUN_00442c30(*(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8));
      FUN_00442c30(*(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
    }
    else if (param_2 == 0x14) {
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x10) + 8) + 0x20);
      iVar2 = 0;
      if (lVar1 != 0) {
        iVar2 = *(int *)(lVar1 + -4);
      }
      uVar5 = FUN_00442b60(iVar2 + 1);
      *(undefined8 *)(param_1 + 0x1030) = uVar5;
      FUN_00442620(uVar5,*(undefined8 *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x10) + 8)
                          + 0x20));
    }
    else if (param_2 == 0x15) {
      *(undefined8 *)(param_1 + 0x1030) =
           *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
    }
  }
  else if (param_2 == 0x17) {
    uVar5 = FUN_004b6930(&PTR_FUN_00e0c328,1);
    *(undefined8 *)(param_1 + 0x1030) = uVar5;
    FUN_01b20340(&local_270,
                 *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
    FUN_00e0f090(uVar5,local_270);
  }
  else if (param_2 == 0x18) {
    FUN_01b20340(&local_278,
                 *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
    FUN_00e0f090(*(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8)
                 ,local_278);
    *(undefined8 *)(param_1 + 0x1030) =
         *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8);
  }
  FUN_00414560(&local_278,0xc);
  return;
}

