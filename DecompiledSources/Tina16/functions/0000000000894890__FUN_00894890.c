/* Ghidra address: 00894890 */
/* Ghidra symbol: FUN_00894890 */


undefined8 FUN_00894890(uint param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0xffffffff;
  if (param_1 < 0x21) {
    uVar1 = 0x32;
  }
  else {
    uVar1 = 0x57;
  }
  return uVar1;
}

