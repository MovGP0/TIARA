/* Ghidra address: 0162d0c0 */
/* Ghidra symbol: FUN_0162d0c0 */


undefined1 FUN_0162d0c0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0;
  local_11 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 3)) && ((char)param_1[0x2c] != '\0')) {
    FUN_004167a0(&local_10,*(undefined8 *)(param_1 + 0x10));
    cVar1 = FUN_016479d0(param_2,local_10,param_3);
    if (cVar1 != '\0') {
      local_11 = 1;
    }
  }
  FUN_00414480(&local_10);
  return local_11;
}

