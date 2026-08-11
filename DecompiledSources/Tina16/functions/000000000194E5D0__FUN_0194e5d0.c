/* Ghidra address: 0194e5d0 */
/* Ghidra symbol: FUN_0194e5d0 */


undefined1 FUN_0194e5d0(longlong param_1)

{
  undefined1 local_19 [9];
  
  local_19[0] = 0;
  if ((*(char *)(param_1 + 0x1b5) == '\x02') &&
     ((*(int *)(param_1 + 0x1b8) <= *(int *)(param_1 + 0x234) ||
      (*(char *)(param_1 + 0x1b2) != '\0')))) {
    local_19[0] = 1;
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    (**(code **)(param_1 + 0x1d0))(*(undefined8 *)(param_1 + 0x1d8),param_1,local_19);
  }
  return local_19[0];
}

