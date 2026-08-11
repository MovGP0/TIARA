/* Ghidra address: 01340be0 */
/* Ghidra symbol: FUN_01340be0 */


void FUN_01340be0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_010e1630(3,1,0,0);
  lVar2 = FUN_004113f0(uVar1,&PTR_FUN_01133e90);
  if ((*(char *)(param_1 + 0xd9e) != '\0') && (lVar2 != 0)) {
    FUN_010e19d0(lVar2);
    uVar1 = FUN_0065b870(lVar2);
    thunk_FUN_041b2403(uVar1,0x1234,0,*(undefined8 *)(param_1 + 0xa0));
  }
  return;
}

