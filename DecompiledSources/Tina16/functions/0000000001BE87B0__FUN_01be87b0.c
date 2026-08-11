/* Ghidra address: 01be87b0 */
/* Ghidra symbol: FUN_01be87b0 */


char FUN_01be87b0(longlong *param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = FUN_01c03ee0(param_1,param_2);
  if (((cVar1 == '\0') && (*param_2 == 0x100)) && ((param_2[2] == 0x1b || (param_2[2] - 0x25U < 4)))
     ) {
    if ((*(longlong *)(param_2 + 2) == 0x1b) && (*(char *)((longlong)param_1 + 0x592) != '\0')) {
      (**(code **)(*param_1 + 0x408))(param_1);
      if ((char)param_1[0x98] != '\0') {
        (**(code **)(**(longlong **)PTR_DAT_02001a48 + 0x40))
                  (*(longlong **)PTR_DAT_02001a48,param_1);
      }
    }
    cVar1 = '\x01';
  }
  return cVar1;
}

