/* Ghidra address: 00d7eca0 */
/* Ghidra symbol: FUN_00d7eca0 */


void FUN_00d7eca0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  byte bVar4;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_00d5bbb8);
  if (cVar2 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    bVar4 = 0;
    do {
      lVar3 = FUN_004113f0(param_2,&PTR_FUN_00d5bbb8);
      plVar1 = *(longlong **)(param_1 + 8 + (ulonglong)bVar4 * 8);
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(lVar3 + 8 + (ulonglong)bVar4 * 8));
      bVar4 = bVar4 + 1;
    } while (bVar4 != 0x5d);
  }
  return;
}

