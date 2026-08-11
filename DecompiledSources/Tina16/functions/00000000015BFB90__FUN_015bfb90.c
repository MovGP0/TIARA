/* Ghidra address: 015bfb90 */
/* Ghidra symbol: FUN_015bfb90 */


void FUN_015bfb90(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong local_48;
  int local_1c;
  
  local_48 = *(longlong *)(param_1 + 8);
  if (local_48 != 0) {
    local_48 = *(longlong *)(local_48 + -8);
  }
  local_1c = 0;
  if (-1 < (int)local_48 + -1) {
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 8) + (longlong)local_1c * 8);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*puVar2;
        FUN_00418590(puVar2,&DAT_015b9720);
        puVar2 = puVar1;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)local_1c * 8) = 0;
      local_1c = local_1c + 1;
      local_48._0_4_ = (int)local_48 + -1;
    } while ((int)local_48 != 0);
  }
  return;
}

