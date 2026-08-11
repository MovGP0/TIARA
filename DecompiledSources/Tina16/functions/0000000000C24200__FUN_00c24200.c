/* Ghidra address: 00c24200 */
/* Ghidra symbol: FUN_00c24200 */


void FUN_00c24200(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&LAB_00c13300);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00c12858);
    if (cVar1 == '\0') {
      FUN_004b1060(param_1,param_2);
    }
    else {
      FUN_00c241d0(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),param_2);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
              (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  }
  return;
}

