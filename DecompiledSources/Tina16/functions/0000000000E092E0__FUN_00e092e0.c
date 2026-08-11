/* Ghidra address: 00e092e0 */
/* Ghidra symbol: FUN_00e092e0 */


void FUN_00e092e0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220 [66];
  
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220[0] = 0;
  if (param_2 < 8) {
    if (param_2 == 7) {
      FUN_00e0ab90(&local_228,
                   *(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8));
      lVar2 = FUN_00e0a6e0(&DAT_00e0a208,1,local_228);
      FUN_00e0aab0(&local_230,
                   *(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8));
      FUN_00414ad0(lVar2 + 0x10,local_230);
      *(longlong *)(param_1 + 0x1030) = lVar2;
    }
    else if (param_2 < 5) {
      if (param_2 == 4) {
        FUN_00e0ab90(local_220,
                     *(undefined8 *)
                      (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8));
        lVar2 = FUN_00e0a980(&DAT_00e0a480,1,local_220[0]);
        *(undefined8 *)(lVar2 + 0x10) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8);
        *(longlong *)(param_1 + 0x1030) = lVar2;
      }
      else if (param_2 == 1) {
        uVar1 = *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
        *(undefined8 *)(param_1 + 0x1030) = uVar1;
        *(undefined8 *)(*(longlong *)(param_1 + 0x3060) + 0x20) = uVar1;
        FUN_00e08640(*(undefined8 *)(*(longlong *)(param_1 + 0x3060) + 8));
      }
      else if (param_2 == 2) {
        uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
        *(undefined8 *)(param_1 + 0x1030) = uVar1;
        FUN_004ae7e0(uVar1,*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
      }
      else if (param_2 == 3) {
        FUN_004ae7e0(*(undefined8 *)
                      (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8),
                     *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8);
      }
    }
    else if (param_2 == 5) {
      uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)(param_1 + 0x1030) = uVar1;
      FUN_004ae7e0(uVar1,*(undefined8 *)
                          (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
    }
    else if (param_2 == 6) {
      FUN_004ae7e0(*(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8),
                   *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
      *(undefined8 *)(param_1 + 0x1030) =
           *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8);
    }
  }
  else if (param_2 < 0xb) {
    if (param_2 == 10) {
      FUN_00e0ab90(&local_250,
                   *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
      plVar3 = *(longlong **)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8);
      (**(code **)(*plVar3 + 0x78))(plVar3,local_250);
      *(undefined8 *)(param_1 + 0x1030) =
           *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8);
    }
    else if (param_2 == 8) {
      FUN_00e0ab90(&local_238,
                   *(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -4) * 8));
      lVar2 = FUN_00e0a6e0(&DAT_00e0a208,1,local_238);
      FUN_00e0aab0(&local_240,
                   *(undefined8 *)
                    (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8));
      FUN_00414ad0(lVar2 + 0x10,local_240);
      *(undefined1 *)(lVar2 + 0x20) = 1;
      *(longlong *)(param_1 + 0x1030) = lVar2;
    }
    else if (param_2 == 9) {
      plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      *(longlong **)(param_1 + 0x1030) = plVar3;
      FUN_00e0ab90(&local_248,
                   *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
      (**(code **)(*plVar3 + 0x78))(plVar3,local_248);
    }
  }
  else if (param_2 == 0xb) {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x10) + 8) + 0x20);
    iVar4 = 0;
    if (lVar2 != 0) {
      iVar4 = *(int *)(lVar2 + -4);
    }
    uVar1 = FUN_00442b60(iVar4 + 1);
    *(undefined8 *)(param_1 + 0x1030) = uVar1;
    FUN_00442620(uVar1,*(undefined8 *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x10) + 8) +
                        0x20));
  }
  else if (param_2 == 0xc) {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x10) + 8) + 0x20);
    iVar4 = 0;
    if (lVar2 != 0) {
      iVar4 = *(int *)(lVar2 + -4);
    }
    uVar1 = FUN_00442b60(iVar4 + 1);
    *(undefined8 *)(param_1 + 0x1030) = uVar1;
    FUN_00442620(uVar1,*(undefined8 *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3060) + 0x10) + 8) +
                        0x20));
  }
  FUN_00414560(&local_250,7);
  return;
}

