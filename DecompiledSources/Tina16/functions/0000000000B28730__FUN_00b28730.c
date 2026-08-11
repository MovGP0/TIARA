/* Ghidra address: 00b28730 */
/* Ghidra symbol: FUN_00b28730 */


void FUN_00b28730(longlong param_1,undefined8 param_2,longlong param_3,char param_4,
                 undefined2 param_5)

{
  longlong lVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = FUN_00b28180(&DAT_00b25b98,1);
  *(char *)(lVar1 + 0x20) = param_4;
  if (param_4 == '\0') {
    FUN_00414b90(lVar1 + 8,param_2);
  }
  else {
    FUN_00b27d20(local_20,param_4);
    FUN_00414b90(lVar1 + 8,local_20[0]);
  }
  *(undefined2 *)(lVar1 + 0x10) = param_5;
  if (param_3 != 0) {
    FUN_00b222c0(*(undefined8 *)(lVar1 + 0x18),param_3);
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),lVar1);
  FUN_00414520(local_20);
  return;
}

