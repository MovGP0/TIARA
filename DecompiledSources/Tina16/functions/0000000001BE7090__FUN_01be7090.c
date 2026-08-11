/* Ghidra address: 01be7090 */
/* Ghidra symbol: FUN_01be7090 */


void FUN_01be7090(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_0044f0c0(5,1);
  if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x678) != 0)) {
    FUN_0064e6f0(*(undefined8 *)(param_1 + 0x678));
    FUN_0064e6f0(*(undefined8 *)(param_1 + 0x668));
  }
  return;
}

