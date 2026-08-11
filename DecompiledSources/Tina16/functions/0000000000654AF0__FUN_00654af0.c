/* Ghidra address: 00654af0 */
/* Ghidra symbol: FUN_00654af0 */


void FUN_00654af0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *local_38;
  undefined8 local_30;
  
  local_38 = param_2;
  local_30 = param_1;
  FUN_0064fca0(param_1,0xb036,param_2,0);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00640c18);
  if (cVar1 == '\0') {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_0064e4c0(param_2,*(undefined1 *)((longlong)param_2 + 0xa9),0);
    }
  }
  else {
    FUN_00654870(param_2,1);
    (**(code **)(*param_2 + 0x1e8))(param_2);
  }
  FUN_00654910(param_1,param_2);
  FUN_0064fca0(param_1,0xb02c,param_2,0);
  FUN_0064fca0(param_1,0xb04c,&local_38,0);
  FUN_00654320(param_1,0);
  return;
}

