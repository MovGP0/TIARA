/* Ghidra address: 01086ef0 */
/* Ghidra symbol: FUN_01086ef0 */


void FUN_01086ef0(longlong param_1)

{
  char cVar1;
  
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  thunk_FUN_0419965d(100);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  FUN_01086bc0(param_1);
  FUN_01086350(param_1);
  FUN_01086e70(param_1);
  cVar1 = FUN_00f81d20(*(undefined4 *)(param_1 + 0xad8));
  if (cVar1 == '\0') {
    FUN_010888b0(param_1);
  }
  return;
}

