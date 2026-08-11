/* Ghidra address: 016d4ce0 */
/* Ghidra symbol: FUN_016d4ce0 */


char FUN_016d4ce0(longlong param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0x568) == '\0') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x528 + (longlong)param_2 * 8) + 8) = 0;
    cVar1 = '\0';
  }
  else {
    if (*(longlong *)(param_1 + 0x590) == 0) {
      cVar1 = '\x01';
      *(undefined4 *)(*(longlong *)(param_1 + 0x528 + (longlong)param_2 * 8) + 8) = param_3;
    }
    else {
      local_1c = param_3;
      cVar1 = (**(code **)(param_1 + 0x590))
                        (*(undefined8 *)(param_1 + 0x598),
                         *(undefined8 *)(param_1 + 0x548 + (longlong)param_2 * 8),&local_1c);
      *(undefined4 *)(*(longlong *)(param_1 + 0x528 + (longlong)param_2 * 8) + 8) = local_1c;
    }
    if (cVar1 != '\0') {
      *(int *)(param_1 + 0x57c) = *(int *)(param_1 + 0x57c) + 1;
    }
    *(int *)(param_1 + 0x580) = *(int *)(param_1 + 0x57c) - *(int *)(param_1 + 0x584);
  }
  return cVar1;
}

