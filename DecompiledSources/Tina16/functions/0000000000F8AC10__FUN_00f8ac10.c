/* Ghidra address: 00f8ac10 */
/* Ghidra symbol: FUN_00f8ac10 */


void FUN_00f8ac10(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00f8b910(param_1,*(undefined4 *)(param_1 + 0x345c));
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x24);
    if (param_2 < uVar1) {
      if (uVar1 < param_2 + param_3) {
        param_3 = uVar1 - param_2;
      }
    }
    else {
      param_2 = *(uint *)(lVar2 + 0x20);
      if (*(uint *)(lVar2 + 0x28) < param_3) {
        param_3 = *(uint *)(lVar2 + 0x28);
      }
    }
    *(uint *)(lVar2 + 0x30) = param_2;
    *(uint *)(lVar2 + 0x2c) = param_3;
  }
  return;
}

