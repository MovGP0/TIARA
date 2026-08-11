/* Ghidra address: 016ee6b0 */
/* Ghidra symbol: FUN_016ee6b0 */


void FUN_016ee6b0(longlong param_1,ulonglong param_2,byte param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 *param_6,undefined4 *param_7,longlong param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_8 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_2 & 0xff) * 8);
    uVar2 = FUN_01b05600(*(undefined8 *)(*(longlong *)(lVar1 + 0x40) + -8 + (ulonglong)param_3 * 8),
                         param_4);
    *param_6 = uVar2;
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + -8 + (ulonglong)param_3 * 8);
    if (*(byte *)(lVar1 + 5) < 2) {
      *param_7 = 0;
    }
    else {
      uVar2 = FUN_01b05600(lVar1,param_5);
      *param_7 = uVar2;
    }
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_8 + 0x40) + -8 + (param_2 & 0xff) * 8);
    uVar2 = FUN_01b05600(*(undefined8 *)(*(longlong *)(lVar1 + 0x40) + -8 + (ulonglong)param_3 * 8),
                         param_4);
    *param_6 = uVar2;
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + -8 + (ulonglong)param_3 * 8);
    if (*(byte *)(lVar1 + 5) < 2) {
      *param_7 = 0;
    }
    else {
      uVar2 = FUN_01b05600(lVar1,param_5);
      *param_7 = uVar2;
    }
  }
  return;
}

