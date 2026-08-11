/* Ghidra address: 010dba30 */
/* Ghidra symbol: FUN_010dba30 */


undefined8 FUN_010dba30(char param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1 == '\x01') {
    uVar1 = FUN_00e1ded0(param_2,param_3);
  }
  else if ((char)param_2 == '\x0e') {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

