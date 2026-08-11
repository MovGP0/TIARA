/* Ghidra address: 00bf2cd0 */
/* Ghidra symbol: FUN_00bf2cd0 */


undefined1 FUN_00bf2cd0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  iVar4 = FUN_00bf2b30(param_1);
  if (iVar4 < 2) {
    local_20 = FUN_00bf2b90(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
              (*(longlong **)(param_1 + 0x4e8),local_30,*(int *)(param_1 + 0x4cc) + -1);
    iVar4 = 0;
    if (local_30[0] != 0) {
      iVar4 = *(int *)(local_30[0] + -4);
    }
    bVar1 = iVar4 < (int)local_20;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    cVar2 = FUN_00bf2c80(param_1);
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_00bf2d57;
    }
  }
  uVar3 = 0;
LAB_00bf2d57:
  FUN_00414480(local_30);
  return uVar3;
}

