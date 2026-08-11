/* Ghidra address: 01435f60 */
/* Ghidra symbol: FUN_01435f60 */


undefined8 FUN_01435f60(longlong param_1,undefined8 param_2)

{
  if (**(longlong **)(param_1 + 0x10) != 0) {
    FUN_004b37d0(**(longlong **)(param_1 + 0x10),param_2);
  }
  return param_2;
}

