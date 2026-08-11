/* Ghidra address: 0080adb0 */
/* Ghidra symbol: FUN_0080adb0 */


undefined8 FUN_0080adb0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int local_2c;
  
  lVar2 = thunk_FUN_03f32902(param_1,4);
  if ((lVar2 == 0) || (lVar2 == *(longlong *)(DAT_02012668 + 0x2d0))) {
    local_2c = 0;
  }
  else {
    thunk_FUN_039b6ab1(lVar2,&local_2c);
  }
  iVar1 = thunk_FUN_0417a31e();
  if (local_2c == iVar1) {
    iVar1 = FUN_004aeba0(*(undefined8 *)(DAT_02012668 + 0x130),lVar2);
    if (iVar1 < 0) {
      FUN_004ae7e0(*(undefined8 *)(DAT_02012668 + 0x130),lVar2);
    }
  }
  if ((((lVar2 != 0) && (param_1 != *(longlong *)(DAT_02012668 + 0x2d0))) &&
      (lVar2 == *(longlong *)(DAT_02012668 + 0x2d0))) && (param_1 != param_2)) {
    iVar1 = thunk_FUN_0419e3da(param_1);
    if (iVar1 != 0) {
      lVar2 = 0;
      if (*(longlong *)(DAT_02012668 + 0x1a0) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(DAT_02012668 + 0x1a0) + -8);
      }
      FUN_00419260(DAT_02012668 + 0x1a0,&DAT_007f4810,1,lVar2 + 1);
      lVar2 = 0;
      if (*(longlong *)(DAT_02012668 + 0x1a0) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(DAT_02012668 + 0x1a0) + -8);
      }
      *(longlong *)(*(longlong *)(DAT_02012668 + 0x1a0) + -8 + lVar2 * 8) = param_1;
    }
  }
  return 0xffffffff;
}

