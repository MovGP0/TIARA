/* Ghidra address: 017fe910 */
/* Ghidra symbol: FUN_017fe910 */


void FUN_017fe910(longlong param_1)

{
  code *local_28;
  longlong local_20;
  
  if (*(char *)(param_1 + 0x709) != '\0') {
    FUN_017fe450(param_1,"ExitProgram()",2,1);
  }
  *(undefined1 *)(param_1 + 0x708) = 0;
  FUN_017fe8f0(param_1,*(undefined8 *)(param_1 + 0x6d0),*(undefined8 *)(param_1 + 0x6d8),
               param_1 + 0x709);
  FUN_01b1e860(L"ExitProgram()",1);
  if (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x27c1) == '\0') {
    FUN_0080d170(*(undefined8 *)PTR_DAT_02004030);
  }
  else {
    local_28 = FUN_017fe910;
    local_20 = param_1;
    FUN_00f836b0(&local_28);
  }
  return;
}

