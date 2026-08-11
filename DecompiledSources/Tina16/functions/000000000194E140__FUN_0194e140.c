/* Ghidra address: 0194e140 */
/* Ghidra symbol: FUN_0194e140 */


undefined8 FUN_0194e140(char param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 == '\0') {
    uVar1 = FUN_01956770(&PTR_FUN_01920040,1);
  }
  else if (param_1 == '\x01') {
    uVar1 = FUN_01956c90(&PTR_FUN_01920448,1);
  }
  else if (param_1 == '\x02') {
    uVar1 = FUN_01957da0(&PTR_FUN_01920928,1);
  }
  return uVar1;
}

