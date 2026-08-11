/* Ghidra address: 010b3af0 */
/* Ghidra symbol: FUN_010b3af0 */


undefined8 FUN_010b3af0(longlong param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  
  if ((param_2 == 0x800) &&
     (((param_3 != '\0' && ((*(uint *)(param_1 + 0x2a) & 2) == 0)) || (param_3 == '\0')))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

