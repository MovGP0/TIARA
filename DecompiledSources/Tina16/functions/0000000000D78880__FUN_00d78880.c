/* Ghidra address: 00d78880 */
/* Ghidra symbol: FUN_00d78880 */


void FUN_00d78880(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d5f6a8);
  if (cVar1 == '\0') {
    FUN_00d75b60(param_1,param_2);
  }
  else {
    FUN_00d75b60(param_1,param_2);
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d5f6a8);
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x10))
              (*(longlong **)(param_1 + 0x120),*(undefined8 *)(lVar2 + 0x120));
    *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(lVar2 + 0x128);
    FUN_00d7a060(param_1,*(undefined1 *)(lVar2 + 0x129));
    *(undefined1 *)(param_1 + 0x12a) = *(undefined1 *)(lVar2 + 0x12a);
    *(undefined1 *)(param_1 + 299) = *(undefined1 *)(lVar2 + 299);
  }
  return;
}

