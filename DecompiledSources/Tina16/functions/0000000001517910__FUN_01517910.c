/* Ghidra address: 01517910 */
/* Ghidra symbol: FUN_01517910 */


undefined4 FUN_01517910(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_38;
  int local_28;
  undefined4 local_24;
  
  local_40 = auStack_68;
  local_24 = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined2 *)(param_1 + 0xe2) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  *(undefined1 *)(param_1 + 0xa9) = 1;
  *(undefined1 *)(param_1 + 0xaa) = 1;
  *(undefined2 *)(param_1 + 0xac) = 0;
  *(undefined2 *)(param_1 + 0xae) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0xffff;
  *(undefined2 *)(param_1 + 0xb2) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  puVar1 = auStack_68;
  if (*(int *)(param_1 + 0x88) == 1) {
    lVar3 = *(longlong *)
             (*(longlong *)(param_1 + 0x50) + 0x148 + (longlong)*(int *)(param_1 + 0x18) * 8);
    if (lVar3 == 0) {
      return 2;
    }
    lVar3 = FUN_004113f0(lVar3,&PTR_FUN_0150a9d8);
    uVar4 = (**(code **)(**(longlong **)(lVar3 + 0xee0) + 0xc0))(*(longlong **)(lVar3 + 0xee0));
    *(undefined8 *)(param_1 + 0xa0) = uVar4;
    puVar1 = local_40;
  }
  local_40 = puVar1;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  uVar4 = FUN_004095c0((longlong)(int)((uint)*(ushort *)(param_1 + 0x98) * iVar2));
  *(undefined8 *)(param_1 + 200) = uVar4;
  if (*(int *)(param_1 + 0x84) == 1) {
    while ((*(char *)(param_1 + 0xf1) == '\0' && (*(char *)(param_1 + 0xf0) == '\0'))) {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
    if ((*(char *)(param_1 + 0xf0) == '\0') &&
       (*(longlong *)
         (*(longlong *)(param_1 + 0x50) + 0x148 + (longlong)*(int *)(param_1 + 0x18) * 8) != 0)) {
      lVar3 = FUN_004113f0(*(undefined8 *)
                            (*(longlong *)(param_1 + 0x50) + 0x148 +
                            (longlong)*(int *)(param_1 + 0x18) * 8),&PTR_FUN_0150a9d8);
      iVar2 = (**(code **)(**(longlong **)(lVar3 + 0xee0) + 0x78))(*(longlong **)(lVar3 + 0xee0));
      if (iVar2 == 0) {
        while ((*(short *)(param_1 + 0xb0) != 0 && (*(char *)(param_1 + 0xf0) == '\0'))) {
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        }
      }
      else {
        FUN_0153b7f0(*(double *)(param_1 + 0xa0) * (double)*(ushort *)(param_1 + 0x98));
        FUN_0153ba10(0,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
      }
    }
  }
  else {
    FUN_0153b7f0(*(double *)(param_1 + 0xa0) * (double)*(ushort *)(param_1 + 0x98));
    FUN_0153ba10(0,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  FUN_004095f0(*(undefined8 *)(param_1 + 200),
               (longlong)(int)((uint)*(ushort *)(param_1 + 0x98) * iVar2));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  local_28 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),local_28);
      local_38 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_01106728);
      FUN_00410f20(local_38[0x15]);
      local_38[0x15] = 0;
      if (((local_38[0xb] != 0) && (*(char *)(param_1 + 0xaa) != '\0')) &&
         (*(char *)(param_1 + 0xe0) != '\0')) {
        (**(code **)(*local_38 + 0x10))(local_38,local_38[10],*param_2);
      }
      local_38[0xb] = 0;
      local_28 = local_28 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(char *)(param_1 + 0xaa) != '\0') {
    if (*param_2 != 0) {
      FUN_01cc6030(*param_2);
    }
    *param_2 = 0;
  }
  if ((*(char *)(param_1 + 0xe0) != '\0') && (*(longlong *)(param_1 + 0xd0) != 0)) {
    FUN_01cc6030(*(undefined8 *)(param_1 + 0xd0));
  }
  if (*(char *)(param_1 + 0x79) != '\0') {
    local_24 = 1;
  }
  return local_24;
}

