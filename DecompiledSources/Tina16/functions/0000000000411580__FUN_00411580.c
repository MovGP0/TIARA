/* Ghidra address: 00411580 */
/* Ghidra symbol: FUN_00411580 */


undefined8 FUN_00411580(longlong param_1,longlong param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return 1;
    }
    if (*(longlong **)(param_1 + -0x78) == (longlong *)0x0) break;
    param_1 = **(longlong **)(param_1 + -0x78);
  }
  return 0;
}

