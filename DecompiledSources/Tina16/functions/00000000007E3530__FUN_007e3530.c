/* Ghidra address: 007e3530 */
/* Ghidra symbol: FUN_007e3530 */


void FUN_007e3530(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = param_1;
  if ((*(longlong *)(param_1 + 200) == 0) &&
     (cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 8),&PTR_FUN_007da970), cVar1 != '\0')) {
    lVar2 = 0;
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    (**(code **)(param_1 + 0x100))(*(undefined8 *)(param_1 + 0x108),param_1,lVar2,param_2);
  }
  return;
}

