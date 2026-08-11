/* Ghidra address: 017a5510 */
/* Ghidra symbol: FUN_017a5510 */


void FUN_017a5510(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x6f0);
  lVar3 = FUN_006e2530(uVar1);
  if (lVar3 != 0) {
    lVar3 = FUN_006e2530(uVar1);
    if (*(int *)(lVar3 + 0x18) == 0x66) {
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      goto LAB_017a5541;
    }
  }
  uVar2 = 0;
LAB_017a5541:
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0xe8))(*(longlong **)(param_1 + 0x730),uVar2);
  return;
}

