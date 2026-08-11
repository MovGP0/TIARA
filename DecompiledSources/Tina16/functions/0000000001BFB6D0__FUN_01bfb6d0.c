/* Ghidra address: 01bfb6d0 */
/* Ghidra symbol: FUN_01bfb6d0 */


void FUN_01bfb6d0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_004b2680(param_1,param_2,param_3);
  if ((char)param_3 == '\x04') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bee940);
    if ((cVar1 != '\0') && (*(longlong *)(param_2 + 0x18) != 0)) {
      *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x498) = 0;
    }
  }
  return;
}

