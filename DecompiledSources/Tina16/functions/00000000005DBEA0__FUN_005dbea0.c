/* Ghidra address: 005dbea0 */
/* Ghidra symbol: FUN_005dbea0 */


undefined8 FUN_005dbea0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x4a) == '\0') {
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x32) & 8) == 0) {
      FUN_0043e130(param_2,param_3);
    }
    else {
      FUN_0043e5a0(param_2,param_3);
    }
  }
  else {
    FUN_00414ad0(param_2,param_3);
  }
  return param_2;
}

