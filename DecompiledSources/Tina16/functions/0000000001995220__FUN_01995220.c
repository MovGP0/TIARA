/* Ghidra address: 01995220 */
/* Ghidra symbol: FUN_01995220 */


void FUN_01995220(longlong param_1,char param_2)

{
  undefined1 local_28 [24];
  
  if (param_2 != *(char *)(param_1 + 0x241)) {
    *(char *)(param_1 + 0x241) = param_2;
    FUN_00b956d0(local_28,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    FUN_01995090(param_1,local_28,*(undefined1 *)(param_1 + 0x241));
  }
  return;
}

