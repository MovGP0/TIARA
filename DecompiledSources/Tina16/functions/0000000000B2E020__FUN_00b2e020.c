/* Ghidra address: 00b2e020 */
/* Ghidra symbol: FUN_00b2e020 */


void FUN_00b2e020(longlong param_1)

{
  int iVar1;
  undefined1 auStack_68 [52];
  int local_34;
  int local_2c;
  char *local_20;
  
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x28) + 0x10);
  local_2c = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_20 = (char *)FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28),local_2c
                                     );
      local_20[0x1b] = '\x01';
      local_20[0x1c] = '\0';
      local_20[0x1d] = '\0';
      local_20[0x1e] = '\0';
      if (*local_20 == '\0') {
        local_34 = 2;
        FUN_00b2df90(auStack_68);
      }
      else if (*local_20 == '\x01') {
        local_34 = *(int *)(local_20 + 0x11) + 1;
        FUN_00b2df90(auStack_68);
      }
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

