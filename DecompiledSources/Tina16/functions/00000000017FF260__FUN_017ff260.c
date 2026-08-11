/* Ghidra address: 017ff260 */
/* Ghidra symbol: FUN_017ff260 */


void FUN_017ff260(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  *(undefined1 *)((longlong)param_1 + 0x52) = param_3;
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  return;
}

