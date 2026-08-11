/* Ghidra address: 00c5a390 */
/* Ghidra symbol: FUN_00c5a390 */


void FUN_00c5a390(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((char)param_1[0x9e] != '\0') {
    cVar1 = FUN_00680640(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + -0x38))(param_1,param_2);
    }
  }
  return;
}

