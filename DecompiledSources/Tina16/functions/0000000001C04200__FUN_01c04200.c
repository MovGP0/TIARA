/* Ghidra address: 01c04200 */
/* Ghidra symbol: FUN_01c04200 */


int FUN_01c04200(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((((param_1[100] == 0) || (cVar1 = (**(code **)(*param_1 + 0x1c0))(param_1), cVar1 == '\0')) &&
      (cVar1 = FUN_01c06f30(param_1), cVar1 != '\0')) &&
     (lVar2 = FUN_01bfd960(param_1[100]), *(char *)(lVar2 + 0x48) != '\x02')) {
    return 0;
  }
  return (int)param_1[0x6b] - (int)param_1[0x6a];
}

