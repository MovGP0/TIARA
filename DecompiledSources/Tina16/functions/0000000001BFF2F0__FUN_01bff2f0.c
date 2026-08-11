/* Ghidra address: 01bff2f0 */
/* Ghidra symbol: FUN_01bff2f0 */


void FUN_01bff2f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_004d2dc0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf3cc0);
    if (cVar1 != '\0') {
      iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x78),param_2);
      if (iVar2 != -1) {
        FUN_004ae870(*(undefined8 *)(param_1 + 0x78),iVar2);
      }
    }
  }
  return;
}

