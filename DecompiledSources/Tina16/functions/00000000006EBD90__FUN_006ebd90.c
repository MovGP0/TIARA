/* Ghidra address: 006ebd90 */
/* Ghidra symbol: FUN_006ebd90 */


undefined1 FUN_006ebd90(longlong param_1)

{
  undefined1 uVar1;
  undefined1 local_29 [9];
  
  local_29[0] = 1;
  uVar1 = 0;
  if (((*(int *)(param_1 + 0x4ac) < *(int *)(param_1 + 0x4a0)) && (*(int *)(param_1 + 0x4b0) < 0))
     || ((*(int *)(param_1 + 0x4a4) < *(int *)(param_1 + 0x4ac) && (0 < *(int *)(param_1 + 0x4b0))))
     ) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x4b0) < 0) {
    uVar1 = 2;
  }
  else if (0 < *(int *)(param_1 + 0x4b0)) {
    uVar1 = 1;
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    (**(code **)(param_1 + 0x4d8))(*(undefined8 *)(param_1 + 0x4e0),param_1,local_29);
  }
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    (**(code **)(param_1 + 0x4e8))
              (*(undefined8 *)(param_1 + 0x4f0),param_1,local_29,*(undefined4 *)(param_1 + 0x4ac),
               uVar1);
  }
  return local_29[0];
}

