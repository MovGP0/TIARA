/* Ghidra address: 00658b40 */
/* Ghidra symbol: FUN_00658b40 */


void FUN_00658b40(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  char local_9;
  
  local_20 = auStack_48;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_9 = '\0';
    if ((*(longlong *)(param_1 + 0x310) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x310) == 0)) {
      *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x310) = *(longlong *)(param_1 + 0x310);
      local_9 = '\x01';
    }
    FUN_0064c450(param_1);
    if (local_9 != '\0') {
      *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x310) = 0;
    }
  }
  return;
}

