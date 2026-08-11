/* Ghidra address: 0169d820 */
/* Ghidra symbol: FUN_0169d820 */


undefined8 FUN_0169d820(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 local_2048 [32];
  int aiStack_2028 [1016];
  undefined1 local_1048;
  int local_1024;
  int local_1020;
  int local_101c [1013];
  undefined1 local_48;
  
  local_48 = 0;
  local_1048 = 0;
  local_2048[0] = 0;
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(lVar2 + 8) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0xc) = 0;
  *(undefined4 *)(lVar2 + 0x14) = 0;
  local_101c[0] = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0;
  iVar6 = 0;
LAB_0169d884:
  local_101c[0] = local_101c[0] + 1;
  if (0x400 < local_101c[0]) {
    FUN_00e085e0(*(undefined8 *)(param_1 + 0x10),L"yyparse stack overflow");
    FUN_01697c40(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),0x202);
    return 1;
  }
  aiStack_2028[local_101c[0]] = iVar6;
  local_101c[local_101c[0]] = local_1020;
  do {
    if (((&DAT_01f8dfc4)[iVar6] == 0) && (*(int *)(*(longlong *)(param_1 + 0x10) + 8) == -1)) {
      iVar4 = FUN_01697c10(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(int *)(lVar2 + 8) = iVar4;
      if (iVar4 < 0) {
        *(undefined4 *)(lVar2 + 8) = 0;
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x10) != '\0') {
      uVar5 = FUN_0040f200(PTR_DAT_02002680,L"state ");
      uVar5 = FUN_0040ef30(uVar5,iVar6);
      uVar5 = FUN_0040f200(uVar5,L", char ");
      uVar5 = FUN_0040ef30(uVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8));
      FUN_0040f590(uVar5);
      FUN_00409900();
    }
    local_1024 = (&DAT_01f8dfc4)[iVar6];
    if (local_1024 == 0) {
      cVar3 = FUN_0169d760(local_2048,iVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8),
                           &local_1024);
      if (cVar3 != '\0') {
        if (local_1024 < 1) {
          if (-1 < local_1024) {
            return 0;
          }
          goto LAB_0169dbff;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0xffffffff;
        local_1020 = *(int *)(param_1 + 0x18);
        iVar6 = local_1024;
        if (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x14)) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x14);
          *piVar1 = *piVar1 + -1;
        }
        goto LAB_0169d884;
      }
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x14) == 0) {
        FUN_00e085e0(*(longlong *)(param_1 + 0x10),L"syntax error");
        FUN_01697c40(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),1);
      }
    }
    else {
LAB_0169dbff:
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x10) != '\0') {
        uVar5 = FUN_0040f200(PTR_DAT_02002680,L"reduce ");
        uVar5 = FUN_0040ef30(uVar5,-local_1024);
        FUN_0040f590(uVar5);
        FUN_00409900();
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x11) = 0;
      FUN_0169caa0(local_2048,-local_1024);
      local_101c[0] = local_101c[0] - *(int *)(&DAT_01f8e7b4 + (longlong)-local_1024 * 8);
      cVar3 = FUN_0169d7c0(local_2048,aiStack_2028[local_101c[0]],
                           *(undefined4 *)(&DAT_01f8e7b8 + (longlong)-local_1024 * 8),&local_1024);
      if (cVar3 != '\0') {
        iVar6 = local_1024;
      }
      cVar3 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x11);
      if (cVar3 == '\x01') {
        return 0;
      }
      if (cVar3 == '\x02') {
        return 1;
      }
      if (cVar3 != '\x03') goto LAB_0169d884;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x14) == 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0xc);
      *piVar1 = *piVar1 + 1;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (*(int *)(lVar2 + 0x14) < 3) break;
    if (*(char *)(lVar2 + 0x10) != '\0') {
      uVar5 = FUN_0040f200(PTR_DAT_02002680,L"error recovery discards char ");
      uVar5 = FUN_0040ef30(uVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8));
      FUN_0040f590(uVar5);
      FUN_00409900();
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 8) == 0) {
      return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0xffffffff;
  } while( true );
  *(undefined4 *)(lVar2 + 0x14) = 3;
  while ((0 < local_101c[0] &&
         ((cVar3 = FUN_0169d760(local_2048,aiStack_2028[local_101c[0]],0x100,&local_1024),
          cVar3 == '\0' || (local_1024 < 1))))) {
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x10) != '\0') {
      if (local_101c[0] < 2) {
        uVar5 = FUN_0040f200(PTR_DAT_02002680,L"error recovery fails ... abort");
        FUN_0040f590(uVar5);
        FUN_00409900();
      }
      else {
        uVar5 = FUN_0040f200(PTR_DAT_02002680,L"error recovery pops state ");
        uVar5 = FUN_0040ef30(uVar5,aiStack_2028[local_101c[0]]);
        uVar5 = FUN_0040f200(uVar5,L", uncovers ");
        uVar5 = FUN_0040ef30(uVar5,aiStack_2028[local_101c[0] + -1]);
        FUN_0040f590(uVar5);
        FUN_00409900();
      }
    }
    local_101c[0] = local_101c[0] + -1;
  }
  iVar6 = local_1024;
  if (local_101c[0] == 0) {
    return 1;
  }
  goto LAB_0169d884;
}

