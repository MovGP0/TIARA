/* Ghidra address: 01cf0b60 */
/* Ghidra symbol: FUN_01cf0b60 */


void FUN_01cf0b60(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(int *)(param_1 + 2) = (int)param_1[3];
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  (**(code **)(*param_1 + 0x160))(param_1,param_2);
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  return;
}

