/* Ghidra address: 00f793d0 */
/* Ghidra symbol: FUN_00f793d0 */


undefined1 FUN_00f793d0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  if (*(char *)(param_2 + 0x30) == '\b') {
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00f6bf08);
    uVar1 = *(undefined1 *)(lVar2 + 0x110);
  }
  return uVar1;
}

