/* Ghidra address: 01cf09c0 */
/* Ghidra symbol: FUN_01cf09c0 */


void FUN_01cf09c0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(int *)(param_1 + 3) = (int)param_1[2];
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_3;
  lVar1 = param_1[1];
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  *(undefined1 *)((longlong)param_1 + 0xb) = 1;
  (**(code **)(*param_1 + 0x148))(param_1,param_2,param_3);
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  return;
}

