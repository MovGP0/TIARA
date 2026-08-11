/* Ghidra address: 00c10950 */
/* Ghidra symbol: FUN_00c10950 */


void FUN_00c10950(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_007265c0(param_2);
  iVar2 = FUN_00c08890(param_1);
  if (iVar2 == *(int *)(param_1 + 0x8f8)) {
    iVar2 = FUN_00c0faf0(param_1);
    if (iVar2 == *(int *)(param_1 + 0x8fc)) {
      FUN_00c08950(param_1,0);
      FUN_00c0fb50(param_1,0);
    }
  }
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0071b8e8);
  if (cVar1 != '\0') {
    iVar2 = FUN_00c10a40(param_1,param_2);
    if (iVar2 == 0) {
      iVar2 = FUN_00c08890(param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_00c0faf0(param_1);
        if (iVar2 == 0) {
          FUN_00c08950(param_1,*(undefined4 *)(param_1 + 0x8f8));
          FUN_00c0fb50(param_1,*(undefined4 *)(param_1 + 0x8fc));
        }
      }
    }
  }
  return;
}

