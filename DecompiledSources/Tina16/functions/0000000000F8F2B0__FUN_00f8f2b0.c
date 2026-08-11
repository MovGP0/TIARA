/* Ghidra address: 00f8f2b0 */
/* Ghidra symbol: FUN_00f8f2b0 */


void FUN_00f8f2b0(longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  if (param_3 != '\0') {
    iVar1 = FUN_00f8e980();
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_00f8b820(param_1,iVar2);
        FUN_00f8fbf0(param_1,iVar2);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00f8b5f0(param_1);
  }
  FUN_006806a0(*(undefined8 *)(param_1 + 8),0);
  if (param_4 != '\0') {
    if (*(int *)(param_1 + 0x3488) == 1) {
      FUN_006807e0(*(undefined8 *)(param_1 + 8),1);
    }
    else if (*(char *)(param_1 + 0x3510) == '\0') {
      FUN_00f8e240(param_1);
    }
    else {
      FUN_00f8bd10(param_1);
    }
  }
  if (param_4 != '\0') {
    FUN_00f8e720(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xa30));
  }
  FUN_00f8e6d0(param_1,*(undefined4 *)(param_1 + 0x345c));
  FUN_006806a0(*(undefined8 *)(param_1 + 8),0);
  FUN_00414560(&local_28,2);
  return;
}

