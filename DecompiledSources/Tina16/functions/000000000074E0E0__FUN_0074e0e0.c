/* Ghidra address: 0074e0e0 */
/* Ghidra symbol: FUN_0074e0e0 */


void FUN_0074e0e0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    uVar1 = FUN_0060ce20(*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x20) = uVar1;
    if (*(char *)(param_1 + 0xd4) != '\0') {
      FUN_0074e130(param_1,1);
    }
  }
  return;
}

