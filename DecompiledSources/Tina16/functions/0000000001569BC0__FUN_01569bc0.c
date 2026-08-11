/* Ghidra address: 01569bc0 */
/* Ghidra symbol: FUN_01569bc0 */


undefined8 FUN_01569bc0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_950 [278];
  uint local_a0;
  
  puVar2 = local_950;
  for (lVar1 = 0x127; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_01569cb0(param_1,local_950);
  if ((local_a0 & 0xf) == 0) {
    FUN_00414ad0(param_2,&DAT_01569c8c);
  }
  else if ((local_a0 & 0xf) == 1) {
    FUN_00414ad0(param_2,&DAT_01569c9c);
  }
  else {
    FUN_00414ad0(param_2,&DAT_01569cac);
  }
  FUN_00417740(local_950,&DAT_01d0d0b8);
  return param_2;
}

