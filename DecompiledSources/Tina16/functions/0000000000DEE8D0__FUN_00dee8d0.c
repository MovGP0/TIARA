/* Ghidra address: 00dee8d0 */
/* Ghidra symbol: FUN_00dee8d0 */


void FUN_00dee8d0(undefined8 param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_016ed930(param_2);
  if ((param_3 == '\x01') || ((byte)(param_3 - 5U) < 3)) {
    FUN_016ed5d0(param_1,2,0,0,0,*(undefined8 *)(param_2 + 0x430),0);
  }
  else if (param_3 == '\b') {
    FUN_016ed5d0(param_1,2,0x3ff0000000000000,0x3ff0000000000000,uVar1,0x3ff0000000000000,0);
  }
  return;
}

