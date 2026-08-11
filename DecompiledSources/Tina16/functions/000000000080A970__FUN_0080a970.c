/* Ghidra address: 0080a970 */
/* Ghidra symbol: FUN_0080a970 */


undefined8 FUN_0080a970(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((*(char *)(DAT_02012668 + 0x193) == '\0') || (*(longlong *)(DAT_02012668 + 0xa8) == 0)) {
    lVar1 = *(longlong *)(DAT_02012668 + 0x2d0);
  }
  else {
    lVar1 = FUN_0065b870(*(undefined8 *)(DAT_02012668 + 0xa8));
  }
  if (DAT_02012668 == 0) {
    return 0xffffffff;
  }
  lVar2 = thunk_FUN_03f32902(param_1,4);
  if (lVar2 != lVar1) {
    return 0xffffffff;
  }
  uVar3 = thunk_FUN_04118143(param_1,0xffffffec);
  if (((uVar3 & 8) != 0) &&
     (((*(longlong *)(DAT_02012668 + 0xa8) == 0 || ((char)param_2[1] != '\0')) ||
      (((*(ushort *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x34) & 8) == 0 &&
       (lVar1 = FUN_0065b870(*(longlong *)(DAT_02012668 + 0xa8)), param_1 != lVar1)))))) {
    FUN_004ae7e0(*(undefined8 *)(DAT_02012668 + 0x120),param_1);
    return 0xffffffff;
  }
  *param_2 = param_1;
  return 0;
}

