/* Ghidra address: 01493a30 */
/* Ghidra symbol: FUN_01493a30 */


void FUN_01493a30(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x800) + 0xd1) = 0;
  lVar1 = *(longlong *)(param_1 + 0x8a0);
  local_30[0] = FUN_00498310(0,*(int *)(lVar1 + 0x9c) + 2);
  uVar3 = FUN_0064d1f0(lVar1,local_30);
  local_20._4_4_ = (undefined4)(uVar3 >> 0x20);
  uVar2 = local_20._4_4_;
  local_20 = uVar3;
  (**(code **)(**(longlong **)(param_1 + 0x800) + 0xa8))
            (*(longlong **)(param_1 + 0x800),uVar3 & 0xffffffff,uVar2);
  return;
}

