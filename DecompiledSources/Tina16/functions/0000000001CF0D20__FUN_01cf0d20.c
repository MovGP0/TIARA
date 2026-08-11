/* Ghidra address: 01cf0d20 */
/* Ghidra symbol: FUN_01cf0d20 */


void FUN_01cf0d20(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  return;
}

