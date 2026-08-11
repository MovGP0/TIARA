/* Ghidra address: 017be9e0 */
/* Ghidra symbol: FUN_017be9e0 */


void FUN_017be9e0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0xaa) == '\0') {
    FUN_017feb70(param_1,param_2);
  }
  else {
    lVar1 = param_1[1];
    if ((char)lVar1 != '\0') {
      (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    }
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    if ((char)lVar1 != '\0') {
      (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    }
  }
  return;
}

