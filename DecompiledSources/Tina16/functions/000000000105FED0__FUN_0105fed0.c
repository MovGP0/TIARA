/* Ghidra address: 0105fed0 */
/* Ghidra symbol: FUN_0105fed0 */


/* WARNING: Removing unreachable block (ram,0x0105ff4c) */

undefined1 FUN_0105fed0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_29;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414480(param_1);
  local_29 = 0;
  cVar1 = FUN_0105ede0(param_2,&local_28);
  if (cVar1 != '\0') {
    FUN_00414b50(local_20,*(undefined8 *)(PTR_DAT_020030c0 + 0x48));
    if (local_20[0] == 0) {
      local_29 = 0;
    }
    else {
      FUN_00414ad0(param_1,local_20[0]);
      local_29 = 1;
    }
  }
  FUN_00414560(&local_28,2);
  return local_29;
}

