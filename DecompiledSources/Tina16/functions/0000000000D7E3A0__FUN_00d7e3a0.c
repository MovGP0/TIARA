/* Ghidra address: 00d7e3a0 */
/* Ghidra symbol: FUN_00d7e3a0 */


void FUN_00d7e3a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d5abb8);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    bVar3 = 0;
    do {
      lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d5abb8);
      *(undefined4 *)(param_1 + 8 + (ulonglong)bVar3 * 4) =
           *(undefined4 *)(lVar2 + 8 + (ulonglong)bVar3 * 4);
      bVar3 = bVar3 + 1;
    } while (bVar3 != 0x20);
  }
  return;
}

