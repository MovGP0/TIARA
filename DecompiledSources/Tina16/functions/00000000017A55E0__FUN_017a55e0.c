/* Ghidra address: 017a55e0 */
/* Ghidra symbol: FUN_017a55e0 */


void FUN_017a55e0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x6f0);
  lVar2 = FUN_006e2530(uVar3);
  if (lVar2 != 0) {
    uVar3 = FUN_006e2530(uVar3);
    lVar2 = FUN_006dd390(uVar3);
    if (lVar2 == 0) {
      uVar1 = 1;
      goto LAB_017a5618;
    }
  }
  uVar1 = 0;
LAB_017a5618:
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0xe8))(*(longlong **)(param_1 + 0x748),uVar1);
  return;
}

