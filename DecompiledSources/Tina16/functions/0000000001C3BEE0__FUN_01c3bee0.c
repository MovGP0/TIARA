/* Ghidra address: 01c3bee0 */
/* Ghidra symbol: FUN_01c3bee0 */


void FUN_01c3bee0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530);
  if (lVar1 == *(longlong *)(param_1 + 0x6c0)) {
    *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(param_1 + 0x9c);
    uVar2 = FUN_01c37170(0x1ae);
    FUN_0064cc50(param_1,uVar2);
    FUN_007ff680(param_1,3);
  }
  else if (lVar1 == *(longlong *)(param_1 + 0x6c8)) {
    FUN_0064cc50(param_1,*(undefined4 *)(param_1 + 0x984));
    FUN_007ff680(param_1,2);
  }
  else if (lVar1 == *(longlong *)(param_1 + 0x6f0)) {
    FUN_007ff680(param_1,3);
    *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(param_1 + 0x9c);
    uVar2 = FUN_01c37170(0xdc);
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x710),uVar2);
    uVar2 = FUN_01c37170(0x208);
    FUN_0064cc50(param_1,uVar2);
  }
  else if (lVar1 == *(longlong *)(param_1 + 0x6f8)) {
    uVar2 = FUN_01c37170(500);
    uVar2 = FUN_00b905e0(*(undefined4 *)(param_1 + 0x984),uVar2);
    FUN_0064cc50(param_1,uVar2);
    FUN_007ff680(param_1,2);
    FUN_01c26f70(*(undefined8 *)(param_1 + 0x900));
  }
  else if (lVar1 == *(longlong *)(param_1 + 0x830)) {
    uVar2 = FUN_01c37170(200);
    FUN_0064cc50(param_1,uVar2);
    FUN_007ff680(param_1,3);
  }
  return;
}

