/* Ghidra address: 007244a0 */
/* Ghidra symbol: FUN_007244a0 */


void FUN_007244a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(char *)(*(longlong *)PTR_DAT_02004030 + 400) == '\0') {
    lVar1 = FUN_00721cc0();
  }
  else {
    lVar1 = FUN_0080f430(*(undefined8 *)PTR_DAT_02004030);
    if (lVar1 == 0) {
      lVar1 = FUN_00721cc0();
    }
  }
  FUN_007245a0(param_1,param_2,lVar1);
  return;
}

