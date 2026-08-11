/* Ghidra address: 00d7c160 */
/* Ghidra symbol: FUN_00d7c160 */


void FUN_00d7c160(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d61470);
  if (cVar1 == '\0') {
    FUN_00d75b60(param_1,param_2);
  }
  else {
    FUN_00d75b60(param_1,param_2);
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d61470);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(lVar2 + 0x120);
    FUN_00d7c2f0(param_1,*(undefined8 *)(lVar2 + 0x128));
  }
  return;
}

