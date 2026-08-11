/* Ghidra address: 017bea50 */
/* Ghidra symbol: FUN_017bea50 */


void FUN_017bea50(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0xaa) == '\0') {
    FUN_01cf0b60(param_1,param_2);
  }
  else {
    lVar1 = param_1[1];
    if ((char)lVar1 != '\0') {
      (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0xa4) = (int)param_1[3];
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    if ((char)lVar1 != '\0') {
      (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    }
  }
  return;
}

