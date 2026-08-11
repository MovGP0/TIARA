/* Ghidra address: 01155500 */
/* Ghidra symbol: FUN_01155500 */


void FUN_01155500(longlong param_1,byte param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 local_48;
  undefined8 local_40 [4];
  
  local_48 = 0;
  local_40[0] = 0;
  if (param_2 < 3) {
    if (param_2 == 2) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x260))
                        (*(longlong **)(param_1 + 0x7b0));
      *(undefined1 *)(param_1 + 0x897) = uVar1;
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x260))();
      *(char *)(param_1 + 0x895) = cVar2;
      if (cVar2 == '\0') {
        dVar8 = 1.0;
        lVar4 = FUN_019a4600();
        iVar6 = *(int *)(*(longlong *)(lVar4 + 0x470) + 0x10);
        iVar5 = 0;
        if (-1 < iVar6 + -1) {
          do {
            lVar4 = FUN_019a4600();
            lVar4 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x470),iVar5);
            dVar8 = dVar8 * (double)(int)*(short *)(lVar4 + 0x11c);
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else {
        dVar8 = 1.0;
        lVar4 = FUN_019a4600();
        if (0 < *(int *)(*(longlong *)(lVar4 + 0x470) + 0x10)) {
          lVar4 = FUN_019a4600();
          lVar4 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x470),0);
          dVar8 = (double)(int)*(short *)(lVar4 + 0x11c);
          lVar4 = FUN_019a4600();
          iVar5 = *(int *)(*(longlong *)(lVar4 + 0x470) + 0x10) + -1;
          iVar6 = 1;
          if (0 < iVar5) {
            do {
              lVar4 = FUN_019a4600();
              lVar4 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x470),iVar6);
              dVar8 = (double)FUN_00b90650(dVar8,(double)(int)*(short *)(lVar4 + 0x11c));
              iVar6 = iVar6 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
      }
      *(double *)(param_1 + 0x88d) = dVar8;
    }
    else if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x88d) = 0x3ff0000000000000;
    }
    else if (param_2 == 1) {
      uVar7 = FUN_00b90090(*(undefined8 *)(param_1 + 0x720));
      *(undefined8 *)(param_1 + 0xbe8) = uVar7;
      uVar7 = FUN_00b90090(*(undefined8 *)(param_1 + 0x728));
      *(undefined8 *)(param_1 + 0xbf0) = uVar7;
      uVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x730));
      *(undefined2 *)(param_1 + 0xbe6) = uVar3;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))
                        (*(longlong **)(param_1 + 0x7a8));
      *(undefined1 *)(param_1 + 0x896) = uVar1;
      if ((((*(double *)(param_1 + 0xbe8) <= -100.0 && *(double *)(param_1 + 0xbe8) != -100.0) ||
           (500.0 < *(double *)(param_1 + 0xbe8))) ||
          (*(double *)(param_1 + 0xbf0) <= -100.0 && *(double *)(param_1 + 0xbf0) != -100.0)) ||
         ((500.0 < *(double *)(param_1 + 0xbf0) ||
          (*(double *)(param_1 + 0xbe8) == *(double *)(param_1 + 0xbf0))))) {
        uVar7 = FUN_00b89270();
        FUN_00b8e520(uVar7,local_40,0x134);
        FUN_01155400(param_1,local_40[0]);
      }
      else if (*(char *)(*(longlong *)(param_1 + 0x7b8) + 0x4a8) == '\x02') {
        *(double *)(param_1 + 0x88d) = (double)*(int *)(*(longlong *)(param_1 + 0xbf8) + 0x10);
      }
      else {
        *(double *)(param_1 + 0x88d) = (double)(int)*(short *)(param_1 + 0xbe6);
      }
      *(undefined1 *)(param_1 + 0xc00) = *(undefined1 *)(*(longlong *)(param_1 + 0x7b8) + 0x4a8);
    }
  }
  else if (param_2 == 3) {
    uVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x750));
    *(undefined2 *)(param_1 + 0xd6d) = uVar3;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    *(undefined1 *)(param_1 + 0xd6c) = uVar1;
    *(undefined1 *)(param_1 + 0xd6b) = *(undefined1 *)(*(longlong *)(param_1 + 0x758) + 0x4a8);
    *(double *)(param_1 + 0x88d) = (double)(int)*(short *)(param_1 + 0xd6d);
    if (*(char *)(param_1 + 0xd6c) != '\0') {
      *(double *)(param_1 + 0x88d) = *(double *)(param_1 + 0x88d) + 1.0;
    }
  }
  else if (param_2 == 4) {
    dVar8 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x780));
    *(float *)(param_1 + 0xd71) = (float)dVar8;
    uVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x778));
    *(undefined2 *)(param_1 + 0xd6f) = uVar3;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))(*(longlong **)(param_1 + 0x788))
    ;
    *(undefined1 *)(param_1 + 0xd6c) = uVar1;
    if ((*(float *)(param_1 + 0xd71) < 0.0) || (100.0 < *(float *)(param_1 + 0xd71))) {
      uVar7 = FUN_00b89270();
      FUN_00b8e520(uVar7,&local_48,0x134);
      FUN_01155400(param_1,local_48);
    }
    else {
      *(double *)(param_1 + 0x88d) = (double)(int)*(short *)(param_1 + 0xd6f);
      if (*(char *)(param_1 + 0xd6c) != '\0') {
        *(double *)(param_1 + 0x88d) = *(double *)(param_1 + 0x88d) + 1.0;
      }
    }
  }
  FUN_00414560(&local_48,2);
  return;
}

