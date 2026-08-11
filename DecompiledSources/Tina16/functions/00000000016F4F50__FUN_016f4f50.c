/* Ghidra address: 016f4f50 */
/* Ghidra symbol: FUN_016f4f50 */


undefined1 FUN_016f4f50(longlong param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28 [3];
  
  local_40 = auStack_68;
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + 0x1380);
  (**(code **)*puVar2)
            (puVar2,CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x60) >> 8),
                             *(char *)(*(longlong *)(param_1 + 0x60) + 0x326) == '\0'));
  local_38 = 0;
  local_28[0] = 1;
  local_30 = FUN_01b10530(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x1380));
  while ((*(char *)(*(longlong *)(param_1 + 0x60) + 0x49c) == '\0' && (local_38 < local_30))) {
    pdVar1 = (double *)(*(longlong *)(param_1 + 0x60) + 0x478);
    *(bool *)(param_1 + 0x2f) = *pdVar1 <= 1.0 && *pdVar1 != 1.0;
    FUN_01af25d0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xf10),1,1,local_28);
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x331) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x358) = 0x3ff0000000000000;
    FUN_016f6430(*(undefined8 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x68),0);
    *(undefined1 *)(param_1 + 0x2e) = 0;
    FUN_016f3620(*(undefined8 *)(param_1 + 0x60),0,*(undefined1 *)(param_1 + 0x68));
    if (*(char *)(param_1 + 0x2e) == '\0') {
      FUN_01b07850(*(undefined8 *)(param_1 + 0x60),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x118),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x128));
      FUN_017c51f0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x1b8),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 400),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x31c));
      local_28[0] = local_28[0] + 1;
      if ((*PTR_DAT_020052b8 == '\0') && (100 < local_28[0])) {
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x1380);
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      *(undefined1 *)(param_1 + 0x2d) = uVar4;
      if (*(char *)(param_1 + 0x2d) != '\0') break;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x1380);
      (**(code **)(*plVar3 + 8))(plVar3);
      local_38 = local_38 + 1;
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x1380);
      (**(code **)(*plVar3 + 8))(plVar3);
      *(undefined1 *)(param_1 + 0x2d) = 0;
      local_38 = local_38 + 1;
    }
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x60) + 0x49c) == '\x01') ||
     ((*(char *)(param_1 + 0x2d) == '\0' && (local_38 == local_30)))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x300) = local_28[0];
  return uVar4;
}

