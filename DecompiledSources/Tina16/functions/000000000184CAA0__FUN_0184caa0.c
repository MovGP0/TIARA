/* Ghidra address: 0184caa0 */
/* Ghidra symbol: FUN_0184caa0 */


void FUN_0184caa0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x80))
            (*(longlong **)(param_1 + 0xa8),param_2,param_3);
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_01842f58);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_1 + 0x78);
  }
  return;
}

