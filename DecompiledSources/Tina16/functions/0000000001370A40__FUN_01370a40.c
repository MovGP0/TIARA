/* Ghidra address: 01370a40 */
/* Ghidra symbol: FUN_01370a40 */


void FUN_01370a40(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30[0] = 0;
  cVar2 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x7a8));
  *(char *)(param_1 + 0x7b1) = cVar2;
  if (cVar2 == '\0') {
    if (*(int *)(*(longlong *)(param_1 + 0x6b8) + 0x4a8) == 1) {
      iVar8 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x7b8) + 0xa0) + 0x468) +
                      0x10);
      iVar6 = 1;
      if (0 < iVar8) {
        pdVar7 = (double *)&DAT_021082d0;
        do {
          lVar5 = FUN_004aeac0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x7b8) + 0xa0) + 0x468),
                               iVar6 + -1);
          if (*pdVar7 <= *(double *)(lVar5 + 0xc) && *(double *)(lVar5 + 0xc) != *pdVar7) {
            *pdVar7 = *(double *)(lVar5 + 0xc);
          }
          if (*(double *)(lVar5 + 0x14) <= *pdVar7 && *pdVar7 != *(double *)(lVar5 + 0x14)) {
            *pdVar7 = *(double *)(lVar5 + 0x14);
          }
          *(double *)(lVar5 + 0x1c) = *pdVar7;
          iVar6 = iVar6 + 1;
          pdVar7 = pdVar7 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    lVar5 = FUN_004aeac0(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x7b8) + 0xa0) + 0x478),0);
    *(undefined1 *)(lVar5 + 0x12) = *(undefined1 *)(*(longlong *)(param_1 + 0x6b8) + 0x4a8);
    uVar9 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
    *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x778) = uVar9;
    uVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x6d8));
    *(undefined2 *)(*(longlong *)(param_1 + 0x7b8) + 0xd9f) = uVar3;
    uVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x788));
    *(undefined2 *)(*(longlong *)(param_1 + 0x7b8) + 0xda1) = uVar3;
    uVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x7a0));
    lVar5 = *(longlong *)(param_1 + 0x7b8);
    *(undefined2 *)(lVar5 + 0xda3) = uVar3;
    *(undefined1 *)(lVar5 + 0xda5) = *(undefined1 *)(*(longlong *)(param_1 + 0x790) + 0x4a8);
    if (*(char *)(param_1 + 0x7b0) == '\x01') {
      uVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x750));
      *(undefined2 *)(*(longlong *)(param_1 + 0x7b8) + 0x838) = uVar3;
      uVar9 = FUN_00b90090(*(undefined8 *)(param_1 + 0x748));
      *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x83a) = uVar9;
      lVar5 = *(longlong *)(param_1 + 0x7b8);
      uVar9 = FUN_00b90090(*(undefined8 *)(param_1 + 0x740));
      *(undefined8 *)(lVar5 + 0x842) = uVar9;
      if (*(double *)(*(longlong *)(param_1 + 0x7b8) + 0x842) <= *(double *)(lVar5 + 0x83a)) {
        uVar9 = FUN_00b89270();
        FUN_00b8e520(uVar9,local_30,0x134);
        FUN_01370060(param_1,local_30[0]);
      }
      plVar1 = *(longlong **)(param_1 + 0x758);
      uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_38,uVar4);
      FUN_00414ad0(*(longlong *)(param_1 + 0x7b8) + 0xda6,local_38);
      FUN_012b2e80(*(longlong *)(param_1 + 0x7b8),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0xda6));
      if (*(char *)(*(longlong *)(param_1 + 0x7b8) + 0x4c8) == '\0') {
        FUN_00de8980(&local_48,0x107,*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x1310));
        local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0xda6);
        local_50 = 0x11;
        FUN_00442f70(&local_40,local_48,&local_58,0);
        FUN_01b05080(local_40,0x1582,0);
      }
    }
    else {
      uVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x750));
      *(undefined2 *)(*(longlong *)(param_1 + 0x7b8) + 0x870) = uVar3;
      uVar9 = FUN_00b90090(*(undefined8 *)(param_1 + 0x748));
      *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x872) = uVar9;
      uVar9 = FUN_00b90090(*(undefined8 *)(param_1 + 0x740));
      *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x87a) = uVar9;
      lVar5 = *(longlong *)(param_1 + 0x7b8);
      if ((((*(double *)(lVar5 + 0x872) <= -100.0 && *(double *)(lVar5 + 0x872) != -100.0) ||
           (500.0 < *(double *)(*(longlong *)(param_1 + 0x7b8) + 0x872))) ||
          (*(double *)(lVar5 + 0x87a) <= -100.0 && *(double *)(lVar5 + 0x87a) != -100.0)) ||
         ((500.0 < *(double *)(lVar5 + 0x87a) ||
          (*(double *)(lVar5 + 0x87a) <= *(double *)(*(longlong *)(param_1 + 0x7b8) + 0x872))))) {
        if (*(double *)(lVar5 + 0x87a) <= *(double *)(*(longlong *)(param_1 + 0x7b8) + 0x872)) {
          uVar9 = FUN_00b89270();
          FUN_00b8e520(uVar9,&local_60,0x134);
          FUN_01370060(param_1,local_60);
        }
      }
    }
  }
  FUN_00414480(&local_60);
  FUN_00414560(&local_48,4);
  return;
}

