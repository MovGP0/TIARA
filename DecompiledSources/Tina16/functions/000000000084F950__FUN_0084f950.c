/* Ghidra address: 0084f950 */
/* Ghidra symbol: FUN_0084f950 */


void FUN_0084f950(longlong *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)param_1 + 0x53a);
  FUN_008502c0(param_1);
  if ((((char)param_2 == '\0') && ((char)param_1[0xa6] == '\x01')) && (cVar1 != '\0')) {
    (**(code **)(*param_1 + 0x2e8))(param_1);
  }
  FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  return;
}

