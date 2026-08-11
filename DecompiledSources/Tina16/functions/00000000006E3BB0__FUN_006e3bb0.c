/* Ghidra address: 006e3bb0 */
/* Ghidra symbol: FUN_006e3bb0 */


void FUN_006e3bb0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uStack_24;
  undefined1 local_20 [8];
  
  FUN_0064ec10(param_1);
  lVar2 = *(longlong *)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  if (lVar2 == 0) {
    thunk_FUN_03cc0d62(local_20);
    uVar1 = FUN_0064d3a0(param_1,local_20);
    uStack_24 = (undefined4)(uVar1 >> 0x20);
    lVar2 = FUN_006e21e0(param_1,uVar1 & 0xffffffff,uStack_24);
  }
  if (lVar2 != 0) {
    uVar3 = FUN_0065b870(param_1);
    lVar2 = thunk_FUN_041b2403(uVar3,0x1112,0,*(undefined8 *)(lVar2 + 0x20));
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x4c0);
      FUN_007d5670(uVar3,lVar2);
      FUN_0065ff40(uVar3,0,2,2);
    }
  }
  return;
}

