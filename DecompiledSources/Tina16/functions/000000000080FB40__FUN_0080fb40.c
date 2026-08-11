/* Ghidra address: 0080fb40 */
/* Ghidra symbol: FUN_0080fb40 */


void FUN_0080fb40(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_007ee060);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x38);
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

