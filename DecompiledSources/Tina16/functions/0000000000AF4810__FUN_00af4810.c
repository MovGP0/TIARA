/* Ghidra address: 00af4810 */
/* Ghidra symbol: FUN_00af4810 */


undefined4 FUN_00af4810(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_30 [2];
  
  uVar2 = FUN_00a9bfa0(*(undefined8 *)(param_1 + 0x8b0),param_2,param_3,local_30);
  if ((char)uVar2 != '\0') {
    cVar1 = FUN_004113d0(local_30[0],&PTR_FUN_00a84e18);
    if (cVar1 != '\0') {
      lVar3 = FUN_00a94a50(*(undefined8 *)(local_30[0] + 0x118),
                           param_2 - *(int *)(local_30[0] + 0x68));
      if (lVar3 == 0) {
        *param_4 = 0;
      }
      else {
        *param_4 = *(undefined8 *)(lVar3 + 0x38);
      }
    }
  }
  return uVar2;
}

