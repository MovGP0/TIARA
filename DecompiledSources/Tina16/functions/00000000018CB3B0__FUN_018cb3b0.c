/* Ghidra address: 018cb3b0 */
/* Ghidra symbol: FUN_018cb3b0 */


void FUN_018cb3b0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0192e210);
  if ((cVar1 == '\0') || (*(char *)(param_2 + 0x240) == '\0')) {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_019317f0);
    if (cVar1 == '\0') {
      return;
    }
    if (*(char *)(param_2 + 0x255) == '\0') {
      return;
    }
  }
  if ((*(char *)(param_1 + 0xf1) == '\0') ||
     (uVar3 = FUN_004113d0(param_2,&PTR_FUN_0192e210), (char)uVar3 != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  FUN_018c5930(*(undefined8 *)(param_1 + 0xc0),param_2,*(undefined8 *)(param_1 + 0x130),uVar2);
  return;
}

