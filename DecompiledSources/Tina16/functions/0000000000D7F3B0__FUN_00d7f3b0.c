/* Ghidra address: 00d7f3b0 */
/* Ghidra symbol: FUN_00d7f3b0 */


void FUN_00d7f3b0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d68118);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_00414ad0(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
              (*(longlong **)(param_1 + 8),*(undefined8 *)(param_2 + 8));
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
              (*(longlong **)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28));
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))
              (*(longlong **)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  }
  return;
}

