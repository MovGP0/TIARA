/* Ghidra address: 007dcdf0 */
/* Ghidra symbol: FUN_007dcdf0 */


undefined8 FUN_007dcdf0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_005b4b00(param_1);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_007e8f20(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x78),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xd0)), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

