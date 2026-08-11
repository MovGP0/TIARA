/* Ghidra address: 008ff2d0 */
/* Ghidra symbol: FUN_008ff2d0 */


undefined8 FUN_008ff2d0(short param_1)

{
  undefined8 uVar1;
  
  if ((((ushort)(param_1 - 9U) < 2) || (param_1 == 0xd)) || ((ushort)(param_1 - 0x20U) < 0xffde)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

