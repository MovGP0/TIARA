/* Ghidra address: 007e6890 */
/* Ghidra symbol: FUN_007e6890 */


void FUN_007e6890(longlong param_1)

{
  undefined1 auStack_48 [39];
  char local_21;
  undefined1 *local_20;
  undefined1 local_a;
  char local_9;
  
  local_20 = auStack_48;
  if (PTR_DAT_02005bd0[0xd] != '\0') {
    local_21 = *(char *)(param_1 + 0x78);
    local_a = *(undefined1 *)(param_1 + 0x91);
    local_9 = local_21;
    if (local_21 == '\0') {
      local_20 = auStack_48;
      FUN_007e7030(param_1,1);
    }
    else {
      FUN_007e7030(param_1,0);
    }
    FUN_007e7030(param_1,local_9);
    *(undefined1 *)(param_1 + 0x91) = local_a;
  }
  return;
}

