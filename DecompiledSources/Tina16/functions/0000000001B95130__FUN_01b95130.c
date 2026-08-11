/* Ghidra address: 01b95130 */
/* Ghidra symbol: FUN_01b95130 */


undefined8 FUN_01b95130(longlong param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) ||
     (*(short *)**(undefined8 **)(param_1 + 0x18) != 0x5b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)**(undefined8 **)(param_1 + 0x18) >> 8),1);
  }
  return uVar1;
}

