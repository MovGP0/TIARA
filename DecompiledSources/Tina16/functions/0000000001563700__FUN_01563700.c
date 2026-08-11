/* Ghidra address: 01563700 */
/* Ghidra symbol: FUN_01563700 */


undefined8 FUN_01563700(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x528) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_01d01390(param_2);
  }
  return uVar1;
}

