/* Ghidra address: 00c0a8a0 */
/* Ghidra symbol: FUN_00c0a8a0 */


void FUN_00c0a8a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00c0a6b0(param_1);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bbdc60);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  else {
    FUN_004b3260(param_1[0x9d]);
    FUN_00bff3e0(param_1);
    FUN_004b3390(param_1[0x9d]);
  }
  FUN_00c09f90(param_1,1);
  return;
}

