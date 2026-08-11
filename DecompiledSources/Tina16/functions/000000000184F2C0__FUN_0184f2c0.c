/* Ghidra address: 0184f2c0 */
/* Ghidra symbol: FUN_0184f2c0 */


void FUN_0184f2c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x28);
  cVar1 = FUN_004113d0(lVar2,&PTR_FUN_01846bd8);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar2 + 0x30);
  }
  lVar2 = FUN_018332d0(*(undefined8 *)(param_1 + 0x30));
  if (lVar2 != 0) {
    uVar3 = FUN_018332d0(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x40) = uVar3;
  }
  return;
}

