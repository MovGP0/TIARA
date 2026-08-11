/* Ghidra address: 01d3b850 */
/* Ghidra symbol: FUN_01d3b850 */


undefined1 FUN_01d3b850(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  
  local_40 = auStack_68;
  local_30 = 0;
  local_24 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < local_24) {
    do {
      uVar2 = FUN_00b94e60(param_1,local_24);
      cVar1 = FUN_01d3b830(auStack_68,uVar2);
      if (cVar1 != '\0') {
        local_30 = FUN_00b94e60(param_1,local_24);
        break;
      }
      local_24 = local_24 + -1;
    } while (local_24 != -1);
  }
  return *(undefined1 *)(local_30 + 0x10);
}

