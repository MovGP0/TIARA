/* Ghidra address: 00d7e740 */
/* Ghidra symbol: FUN_00d7e740 */


void FUN_00d7e740(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d5af60);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    iVar3 = 0;
    do {
      lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d5af60);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar3 * 4) =
           *(undefined4 *)(lVar2 + 8 + (longlong)iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x17);
  }
  return;
}

