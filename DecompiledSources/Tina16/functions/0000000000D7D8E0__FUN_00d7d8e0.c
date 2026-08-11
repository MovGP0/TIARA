/* Ghidra address: 00d7d8e0 */
/* Ghidra symbol: FUN_00d7d8e0 */


void FUN_00d7d8e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d67a90);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    bVar3 = 0;
    do {
      lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d67a90);
      *(undefined1 *)(param_1 + 8 + (ulonglong)bVar3) =
           *(undefined1 *)(lVar2 + 8 + (ulonglong)bVar3);
      bVar3 = bVar3 + 1;
    } while (bVar3 != 2);
  }
  return;
}

