/* Ghidra address: 010d15b0 */
/* Ghidra symbol: FUN_010d15b0 */


undefined8 FUN_010d15b0(undefined8 param_1)

{
  undefined8 uVar1;
  char local_9;
  
  FUN_010d1500(param_1,&local_9);
  if ((local_9 == '\0') || (local_9 == '\x02')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

