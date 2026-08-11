/* Ghidra address: 01635130 */
/* Ghidra symbol: FUN_01635130 */


undefined8 FUN_01635130(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x578) + 0x30))
                    (*(longlong **)(param_1 + 0x578),param_3);
  if (*(char *)(lVar1 + 8) == '\0') {
    FUN_00414ad0(param_2,&LAB_01635198);
  }
  else {
    FUN_00414ad0(param_2,&DAT_01635188);
  }
  return param_2;
}

