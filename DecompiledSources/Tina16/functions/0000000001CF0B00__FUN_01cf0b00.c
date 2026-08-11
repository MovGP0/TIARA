/* Ghidra address: 01cf0b00 */
/* Ghidra symbol: FUN_01cf0b00 */


void FUN_01cf0b00(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  (**(code **)(*param_1 + 0x158))(param_1,param_2);
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  return;
}

