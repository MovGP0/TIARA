/* Ghidra address: 016e9e20 */
/* Ghidra symbol: FUN_016e9e20 */


void FUN_016e9e20(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 4) == '\0') {
    uVar1 = FUN_00409570((uint)param_2 << 3);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    *(byte *)(param_1 + 4) = param_2;
  }
  else {
    FUN_01b04d70(0x21d,&LAB_016e9e74,0);
  }
  return;
}

