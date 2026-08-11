/* Ghidra address: 01cfb240 */
/* Ghidra symbol: FUN_01cfb240 */


void FUN_01cfb240(longlong param_1,longlong *param_2)

{
  *(undefined1 *)(param_1 + 9) = 1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x98))(param_2,param_1,*PTR_DAT_02002480,*PTR_DAT_02001560);
  }
  FUN_01cfb0b0(param_1,param_2);
  FUN_01d04360(param_1,param_2);
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_1 + 0x533) == '\0') {
    FUN_017befb0(param_1,param_2);
  }
  FUN_01cf09b0(param_1,param_2);
  return;
}

