/* Ghidra address: 00800610 */
/* Ghidra symbol: FUN_00800610 */


undefined8 FUN_00800610(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xff000005;
  if (*(char *)(param_1 + 0x4d6) == '\x02') {
    uVar1 = 0xff00000c;
  }
  return uVar1;
}

