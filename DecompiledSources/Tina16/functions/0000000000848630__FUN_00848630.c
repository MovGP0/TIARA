/* Ghidra address: 00848630 */
/* Ghidra symbol: FUN_00848630 */


void FUN_00848630(longlong *param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != (char)param_1[0x97]) {
    *(char *)(param_1 + 0x97) = param_2;
    *(char *)((longlong)param_1 + 0x55c) = param_2;
    if ((char)param_1[0x97] == '\x01') {
      cVar1 = FUN_00777ce0(param_1);
      if (cVar1 == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x55c) = 0;
      }
    }
    (**(code **)(*param_1 + 0x188))(param_1);
  }
  return;
}

