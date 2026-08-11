/* Ghidra address: 0136ee20 */
/* Ghidra symbol: FUN_0136ee20 */


void FUN_0136ee20(longlong param_1)

{
  char cVar1;
  undefined2 uVar2;
  longlong lVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  cVar1 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x780));
  *(char *)(param_1 + 0x7a1) = cVar1;
  if (cVar1 == '\0') {
    if (*(int *)(*(longlong *)(param_1 + 0x6b8) + 0x4a8) == 1) {
      iVar6 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x7a8) + 0xa0) + 0x468) +
                      0x10);
      iVar4 = 1;
      if (0 < iVar6) {
        pdVar5 = (double *)&DAT_02108278;
        do {
          lVar3 = FUN_004aeac0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x7a8) + 0xa0) + 0x468),
                               iVar4 + -1);
          if (*pdVar5 <= *(double *)(lVar3 + 0xc) && *(double *)(lVar3 + 0xc) != *pdVar5) {
            *pdVar5 = *(double *)(lVar3 + 0xc);
          }
          if (*(double *)(lVar3 + 0x14) <= *pdVar5 && *pdVar5 != *(double *)(lVar3 + 0x14)) {
            *pdVar5 = *(double *)(lVar3 + 0x14);
          }
          *(double *)(lVar3 + 0x1c) = *pdVar5;
          iVar4 = iVar4 + 1;
          pdVar5 = pdVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    lVar3 = FUN_004aeac0(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x7a8) + 0xa0) + 0x478),0);
    *(undefined1 *)(lVar3 + 0x12) = *(undefined1 *)(*(longlong *)(param_1 + 0x6b8) + 0x4a8);
    uVar7 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
    *(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x778) = uVar7;
    uVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x6d8));
    *(undefined2 *)(*(longlong *)(param_1 + 0x7a8) + 0xd9f) = uVar2;
    uVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x790));
    *(undefined2 *)(*(longlong *)(param_1 + 0x7a8) + 0xda1) = uVar2;
    uVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x778));
    lVar3 = *(longlong *)(param_1 + 0x7a8);
    *(undefined2 *)(lVar3 + 0xda3) = uVar2;
    *(undefined1 *)(lVar3 + 0xda5) = *(undefined1 *)(*(longlong *)(param_1 + 0x798) + 0x4a8);
    uVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x750));
    *(undefined2 *)(*(longlong *)(param_1 + 0x7a8) + 0x963) = uVar2;
    uVar7 = FUN_00b90090(*(undefined8 *)(param_1 + 0x748));
    *(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x965) = uVar7;
    uVar7 = FUN_00b90090(*(undefined8 *)(param_1 + 0x740));
    *(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x96d) = uVar7;
    if (((*(double *)(*(longlong *)(param_1 + 0x7a8) + 0x96d) <=
          *(double *)(*(longlong *)(param_1 + 0x7a8) + 0x965)) ||
        (*(double *)(*(longlong *)(param_1 + 0x7a8) + 0x965) <= 0.0)) ||
       (1e+50 < *(double *)(*(longlong *)(param_1 + 0x7a8) + 0x96d))) {
      uVar7 = FUN_00b89270();
      FUN_00b8e520(uVar7,local_30,0x134);
      FUN_0136eb10(param_1,local_30[0]);
    }
  }
  FUN_00414480(local_30);
  return;
}

