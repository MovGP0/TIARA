/* Ghidra address: 0113da00 */
/* Ghidra symbol: FUN_0113da00 */


void FUN_0113da00(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0xa70) = 1;
  FUN_00680570(*(undefined8 *)(param_1 + 0x9f0),1);
  FUN_00680570(*(undefined8 *)(param_1 + 0x960),0);
  if (*(char *)(*(longlong *)(param_1 + 0x958) + 0x328) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x960) + 0x278))(*(longlong **)(param_1 + 0x960))
    ;
    *(undefined4 *)(param_1 + 0xa6c) = uVar1;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x960),local_20);
    iVar2 = 0;
    if (local_20[0] != 0) {
      iVar2 = *(int *)(local_20[0] + -4);
    }
    if (iVar2 + -1 < *(int *)(param_1 + 0xa6c)) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x960),&local_28);
      iVar2 = 0;
      if (local_28 != 0) {
        iVar2 = *(int *)(local_28 + -4);
      }
      *(int *)(param_1 + 0xa6c) = iVar2 + -1;
      (**(code **)(**(longlong **)(param_1 + 0x960) + 0x290))
                (*(longlong **)(param_1 + 0x960),iVar2 + -1);
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x960),&local_30);
    if (*(short *)(local_30 + -2 + (longlong)(*(int *)(param_1 + 0xa6c) + 1) * 2) ==
        *(short *)PTR_DAT_020032f8) {
      *(int *)(param_1 + 0xa6c) = *(int *)(param_1 + 0xa6c) + 1;
      (**(code **)(**(longlong **)(param_1 + 0x960) + 0x290))
                (*(longlong **)(param_1 + 0x960),*(undefined4 *)(param_1 + 0xa6c));
    }
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x288))(*(longlong **)(param_1 + 0x960),1);
  }
  FUN_00414560(&local_30,3);
  return;
}

