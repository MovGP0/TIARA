/* Ghidra address: 01c00ad0 */
/* Ghidra symbol: FUN_01c00ad0 */


void FUN_01c00ad0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 *param_6)

{
  char cVar1;
  undefined1 uVar2;
  
  FUN_0064eb60(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*(char *)(param_1 + 0x4c0) == '\0') {
LAB_01c00b37:
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2778);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2d50);
      if ((cVar1 == '\0') || (*(longlong *)(param_2 + 0x58) == *(longlong *)(param_1 + 0x498)))
      goto LAB_01c00b37;
    }
    uVar2 = 1;
  }
  *param_6 = uVar2;
  return;
}

