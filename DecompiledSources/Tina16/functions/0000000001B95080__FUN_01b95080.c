/* Ghidra address: 01b95080 */
/* Ghidra symbol: FUN_01b95080 */


longlong FUN_01b95080(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_00418560(0x18,&DAT_01b94ff0);
  FUN_00414ad0(lVar1,param_1);
  FUN_00414ad0(lVar1 + 8,param_2);
  *(undefined1 *)(lVar1 + 0x10) = param_3;
  return lVar1;
}

