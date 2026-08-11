/* Ghidra address: 00c239e0 */
/* Ghidra symbol: FUN_00c239e0 */


void FUN_00c239e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00c12858);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_00c230d0(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
    *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}

