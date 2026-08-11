/* Ghidra address: 008f8710 */
/* Ghidra symbol: FUN_008f8710 */


void FUN_008f8710(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_008f5158);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else if (param_2 != param_1) {
    (**(code **)(*param_1 + 0x88))(param_1);
    (**(code **)(*param_1 + 0x90))(param_1);
    (**(code **)(*param_1 + 0x78))(param_1,param_2);
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  return;
}

