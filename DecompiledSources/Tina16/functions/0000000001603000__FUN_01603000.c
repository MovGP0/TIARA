/* Ghidra address: 01603000 */
/* Ghidra symbol: FUN_01603000 */


undefined8 FUN_01603000(int param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 == '\0') {
    if (10 < param_1) {
      uVar1 = 1;
    }
  }
  else if (200 < param_1) {
    uVar1 = 1;
  }
  return uVar1;
}

