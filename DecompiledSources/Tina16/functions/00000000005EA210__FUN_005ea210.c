/* Ghidra address: 005ea210 */
/* Ghidra symbol: FUN_005ea210 */


undefined8 FUN_005ea210(char param_1)

{
  undefined8 uVar1;
  
  if (param_1 == '\x01') {
    uVar1 = 1;
  }
  else if (param_1 == '\x02') {
    uVar1 = 2;
  }
  else if (param_1 == '\x03') {
    uVar1 = 4;
  }
  else if (param_1 == '\x04') {
    uVar1 = 3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

