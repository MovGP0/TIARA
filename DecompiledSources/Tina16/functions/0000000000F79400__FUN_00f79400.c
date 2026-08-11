/* Ghidra address: 00f79400 */
/* Ghidra symbol: FUN_00f79400 */


longlong FUN_00f79400(longlong param_1,undefined4 param_2)

{
  undefined8 in_RAX;
  longlong lVar1;
  
  lVar1 = FUN_00f753d0(*(undefined8 *)(param_1 + 0x90),
                       CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,param_2,
                       param_1 + 0x80);
  if (lVar1 == 0) {
    FUN_00f60670(L" No Interrupt process ");
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_004113f0(lVar1,&PTR_FUN_00f6bf08);
    lVar1 = FUN_00f75470(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(lVar1 + 0x118));
    if (lVar1 == 0) {
      FUN_00f60670(L" IT name error");
    }
  }
  return lVar1;
}

