/* Ghidra address: 006fd690 */
/* Ghidra symbol: FUN_006fd690 */


void FUN_006fd690(longlong *param_1)

{
  code *pcVar1;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  if ((*(char *)((longlong)param_1 + 0x601) != '\0') && ((char)param_1[0xc0] != '\0')) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar1)(param_1);
  }
  return;
}

