/* Ghidra address: 01d2b060 */
/* Ghidra symbol: FUN_01d2b060 */


bool FUN_01d2b060(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x50))(param_1,0);
  }
  else {
    (**(code **)(*param_1 + 0x50))(param_1,1);
  }
  return cVar1 != '\0';
}

