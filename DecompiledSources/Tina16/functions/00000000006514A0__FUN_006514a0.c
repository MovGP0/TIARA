/* Ghidra address: 006514a0 */
/* Ghidra symbol: FUN_006514a0 */


void FUN_006514a0(longlong *param_1,longlong param_2)

{
  char local_29 [9];
  
  local_29[0] = '\0';
  if (param_1[0x51] != 0) {
    (*(code *)param_1[0x51])(param_1[0x52],param_1,*(undefined8 *)(param_2 + 0x10),local_29);
  }
  if (local_29[0] == '\0') {
    (**(code **)(*param_1 + 0xc0))(param_1,*(undefined8 *)(param_2 + 0x10),local_29);
  }
  if (local_29[0] == '\0') {
    if ((**(short **)(param_2 + 0x10) == 0) && (param_1[0xf] != 0)) {
      FUN_0064fca0(param_1[0xf],0xb052,0,*(undefined8 *)(param_2 + 0x10));
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

