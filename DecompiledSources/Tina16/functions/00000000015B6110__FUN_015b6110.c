/* Ghidra address: 015b6110 */
/* Ghidra symbol: FUN_015b6110 */


void FUN_015b6110(longlong param_1)

{
  undefined4 local_c;
  
  local_c = 0;
  do {
    *(undefined1 *)(param_1 + local_c) = (undefined1)local_c;
    local_c = local_c + 1;
  } while (local_c != 0x100);
  return;
}

