/* Ghidra address: 017c29f0 */
/* Ghidra symbol: FUN_017c29f0 */


void FUN_017c29f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1[1];
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  uVar2 = FUN_00b92120(*(undefined4 *)((longlong)param_1 + 0x14),(int)param_1[3]);
  FUN_017c2e60(param_1,uVar2);
  FUN_017c2bc0(param_1);
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  (**(code **)(*param_1 + 0x160))(param_1,param_2);
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  return;
}

