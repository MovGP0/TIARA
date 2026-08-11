/* Ghidra address: 00d7d950 */
/* Ghidra symbol: FUN_00d7d950 */


void FUN_00d7d950(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char local_29;
  
  (**(code **)(*param_2 + 0x18))(param_2,&local_29,1);
  bVar1 = 0;
  local_29 = local_29 + '\x01';
  do {
    (**(code **)(*param_2 + 0x18))(param_2,param_1 + 8 + (ulonglong)bVar1,1);
    bVar1 = bVar1 + 1;
    local_29 = local_29 + -1;
  } while (local_29 != '\0');
  return;
}

