/* Ghidra address: 01888670 */
/* Ghidra symbol: FUN_01888670 */


undefined8 FUN_01888670(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 == '\x02') {
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar1 = FUN_01886fb0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  else {
    uVar1 = FUN_01886fb0(*(undefined8 *)(param_1 + 0x18));
  }
  return uVar1;
}

