/* Ghidra address: 00a4e380 */
/* Ghidra symbol: FUN_00a4e380 */


undefined8 FUN_00a4e380(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((*(int *)(*(longlong *)(param_2 + 0x18) + 0x28) == *(int *)(param_1 + 0x5c)) &&
      (*(char *)(*(longlong *)(param_2 + 0x18) + 0x31) ==
       *(char *)(*(longlong *)(param_1 + 0x88) + 0x10))) &&
     (cVar1 = FUN_005fcf90(param_2), cVar1 == *(char *)(*(longlong *)(param_1 + 0x88) + 0x1c))) {
    return 1;
  }
  return 0;
}

