/* Ghidra address: 007462a0 */
/* Ghidra symbol: FUN_007462a0 */


undefined8 FUN_007462a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_00746290(*(undefined8 *)(param_1 + 0x50),param_3);
  cVar1 = *(char *)(lVar2 + 0x18);
  if (cVar1 == '\0') {
    FUN_0041ddd0(param_2,PTR_PTR_02003430);
  }
  else if (cVar1 == '\x01') {
    FUN_0041ddd0(param_2,PTR_PTR_02005180);
  }
  else if (cVar1 == '\x02') {
    FUN_0041ddd0(param_2,PTR_PTR_020038f8);
  }
  else {
    FUN_00414480(param_2);
  }
  return param_2;
}

