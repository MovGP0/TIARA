/* Ghidra address: 01832990 */
/* Ghidra symbol: FUN_01832990 */


void FUN_01832990(longlong param_1,undefined8 param_2,char param_3)

{
  FUN_01832950(param_1);
  if (param_3 == '\x05') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x48) = 7;
  }
  return;
}

