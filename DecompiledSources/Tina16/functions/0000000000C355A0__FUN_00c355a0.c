/* Ghidra address: 00c355a0 */
/* Ghidra symbol: FUN_00c355a0 */


void FUN_00c355a0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f92e8);
  if (cVar1 == '\0') {
    uVar2 = FUN_00c34b10(param_1);
    (**(code **)(*param_2 + 0x10))(param_2,uVar2);
  }
  else {
    uVar2 = FUN_00c34b10(param_1);
    (**(code **)(*param_2 + 0x10))(param_2,uVar2);
  }
  return;
}

