/* Ghidra address: 01871060 */
/* Ghidra symbol: FUN_01871060 */


undefined8 FUN_01871060(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  else if (param_2 == '\x01') {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

