/* Ghidra address: 00407830 */
/* Ghidra symbol: FUN_00407830 */


longlong FUN_00407830(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_68 [24];
  ulonglong local_50;
  int local_48;
  
  uVar3 = (*(ulonglong *)(param_1 + -8) & 0xfffffffffffffff0) - 0x28;
  if (uVar3 < param_2) {
    uVar4 = uVar3 + (uVar3 >> 2);
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    lVar2 = param_1 + -0x20 + (*(ulonglong *)(param_1 + -8) & 0xfffffffffffffff0);
    thunk_FUN_0413c1ac(lVar2,local_68,0x30);
    if ((local_48 == 0x10000) &&
       (local_50 = local_50 & 0xffffffffffff0000, param_2 - uVar3 < local_50)) {
      uVar3 = (uVar4 + 0xffff) - uVar3 & 0xffffffffffff0000;
      if (local_50 < uVar3) {
        uVar3 = local_50;
      }
      lVar1 = thunk_FUN_041b4712(lVar2,uVar3,0x2000,4);
      if ((lVar1 != 0) && (lVar2 = thunk_FUN_041b4712(lVar2,uVar3,0x1000,4), lVar2 != 0)) {
        *(ulonglong *)(param_1 + -0x10) = param_2;
        *(ulonglong *)(param_1 + -8) = *(longlong *)(param_1 + -8) + uVar3 | 8;
        return param_1;
      }
    }
    lVar2 = FUN_004079c0(uVar4);
    if (lVar2 != 0) {
      if (0x40a28 < uVar4) {
        *(ulonglong *)(lVar2 + -0x10) = param_2;
      }
      FUN_004073a0(param_1,lVar2,*(undefined8 *)(param_1 + -0x10));
      FUN_00407d90(param_1);
    }
  }
  else if (param_2 < uVar3 >> 1) {
    lVar2 = FUN_004079c0(param_2);
    if (lVar2 != 0) {
      if (0x40a28 < param_2) {
        *(ulonglong *)(param_1 + -0x10) = param_2;
      }
      FUN_004073a0(param_1,lVar2,param_2);
      FUN_00407d90(param_1);
    }
  }
  else {
    *(ulonglong *)(param_1 + -0x10) = param_2;
    lVar2 = param_1;
  }
  return lVar2;
}

