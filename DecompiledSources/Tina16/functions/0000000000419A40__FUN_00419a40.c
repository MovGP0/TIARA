/* Ghidra address: 00419a40 */
/* Ghidra symbol: FUN_00419a40 */


int FUN_00419a40(char *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; (param_1 != (char *)0x0 && (*param_1 == '\x11')); param_1 = (char *)FUN_00419a20(param_1))
  {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

