/* Ghidra address: 01a30160 */
/* Ghidra symbol: FUN_01a30160 */


void FUN_01a30160(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x710);
  if (param_2 != '\0') {
    FUN_01a2f9d0(param_1,0);
  }
  if (*(char *)(param_1 + 0x708) != '\0') {
    FUN_01a41fd0(uVar1);
    *(undefined1 *)(param_1 + 0x708) = 0;
  }
  return;
}

