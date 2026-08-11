/* Ghidra address: 013f7de0 */
/* Ghidra symbol: FUN_013f7de0 */


void FUN_013f7de0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*PTR_DAT_020039a8 == '\0') {
    cVar2 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6e0));
    if ((cVar2 == '\0') &&
       (iVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x718)),
       iVar3 <= *(int *)(*(longlong *)(param_1 + 0x750) + 0x10))) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    *(char *)(param_1 + 0x740) = cVar2;
    if (cVar2 != '\0') {
      FUN_013f82b0(param_1,L"Error in pulse generator settings");
    }
    if (*(char *)(param_1 + 0x740) == '\0') {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x738) + 8);
      FUN_00b95290(lVar1);
      FUN_01d3bb20(lVar1,*(undefined8 *)(param_1 + 0x750));
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))
                        (*(longlong **)(param_1 + 0x710));
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x760) = 0;
      }
      else {
        uVar4 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x718));
        *(undefined4 *)(param_1 + 0x760) = uVar4;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x760);
      *(undefined4 *)(lVar1 + 0x20) = uVar4;
      *(undefined4 *)(*(longlong *)(param_1 + 0x738) + 0x18) = uVar4;
    }
    return;
  }
  FUN_00b0a960(*(undefined8 *)(param_1 + 0x6e0));
  if (*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x638) != 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x508) = 1;
  return;
}

