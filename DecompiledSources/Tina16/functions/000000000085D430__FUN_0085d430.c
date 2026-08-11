/* Ghidra address: 0085d430 */
/* Ghidra symbol: FUN_0085d430 */


void FUN_0085d430(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (param_2 < 4) {
    if (*(char *)(param_1 + 0x80) == '\0') {
      FUN_0085a5f0(&local_18,param_3);
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x88),0x472,(longlong)(char)param_2,local_18);
    }
    else {
      FUN_0085a610(&local_10,param_3);
      FUN_0064de00(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x6b8 + (ulonglong)param_2 * 8),
                   local_10);
    }
  }
  else if (param_2 == 4) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      FUN_0064de00(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x6e0),param_3);
    }
  }
  else if ((param_2 == 5) && (*(char *)(param_1 + 0x80) != '\0')) {
    FUN_0064de00(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x6e8),param_3);
  }
  FUN_00414560(&local_18,2);
  return;
}

