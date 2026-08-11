/* Ghidra address: 01626ce0 */
/* Ghidra symbol: FUN_01626ce0 */


void FUN_01626ce0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if ((*(char *)(param_2 + 0x139e0) != '\0') && (*(char *)(param_2 + 0x139e1) != '\0')) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    FUN_0163f970(uVar1,local_20,1);
    FUN_0163f970(uVar1,&local_28,2);
    lVar3 = FUN_004113f0(*(undefined8 *)(param_1 + 0x1a8),&PTR_FUN_01763148);
    cVar2 = FUN_01613620(local_20[0],&local_2c);
    if (cVar2 != '\0') {
      cVar2 = FUN_01613620(local_28,&local_30);
      if (cVar2 != '\0') {
        if (local_2c != local_30) {
          FUN_01613110(L"Model mismatch");
        }
        *(int *)(lVar3 + 0x120) = local_2c;
      }
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

