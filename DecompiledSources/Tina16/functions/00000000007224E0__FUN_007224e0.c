/* Ghidra address: 007224e0 */
/* Ghidra symbol: FUN_007224e0 */


void FUN_007224e0(longlong *param_1)

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
  (**(code **)(*param_1 + 0xb0))(param_1,lVar1);
  return;
}

