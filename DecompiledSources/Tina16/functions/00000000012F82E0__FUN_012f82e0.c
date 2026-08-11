/* Ghidra address: 012f82e0 */
/* Ghidra symbol: FUN_012f82e0 */


void FUN_012f82e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  if (lVar1 != 0) {
    lVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    if ((*(uint *)(*(longlong *)(lVar1 + 0x18) + 4) & 0x20) == 0x20) {
      uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
      FUN_01301c40(param_1,uVar2,1);
    }
  }
  return;
}

