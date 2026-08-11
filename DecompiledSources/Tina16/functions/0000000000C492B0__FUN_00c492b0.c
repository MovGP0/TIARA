/* Ghidra address: 00c492b0 */
/* Ghidra symbol: FUN_00c492b0 */


undefined1 FUN_00c492b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_41;
  longlong local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  undefined4 local_1c;
  
  local_30[0] = 0;
  local_38 = 0x11;
  local_40 = param_2;
  FUN_00442f70(local_30,L"SM send string \"%s\"",&local_40,0);
  FUN_00c4c420(local_30[0]);
  local_41 = 0;
  if (param_2 != 0) {
    local_1c = 0;
    if (param_2 != 0) {
      local_1c = *(undefined4 *)(param_2 + -4);
    }
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
              (*(longlong **)(param_1 + 0x48),&local_1c,4);
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = *(int *)(param_2 + -4);
    }
    uVar1 = FUN_00416740(param_2);
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
              (*(longlong **)(param_1 + 0x48),uVar1,iVar2 * 2);
    local_41 = FUN_00c488d0(param_1);
  }
  FUN_00414480(local_30);
  return local_41;
}

