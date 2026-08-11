/* Ghidra address: 00687ae0 */
/* Ghidra symbol: FUN_00687ae0 */


void FUN_00687ae0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00671da0);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

