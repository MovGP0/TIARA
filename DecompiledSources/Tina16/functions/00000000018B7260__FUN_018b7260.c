/* Ghidra address: 018b7260 */
/* Ghidra symbol: FUN_018b7260 */


void FUN_018b7260(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar3 = FUN_01804370(*(undefined8 *)(param_2 + 0x28),param_2);
    iVar4 = FUN_01803a10(*(undefined8 *)(param_2 + 0x28));
    if (iVar3 + 1 < iVar4) {
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      while( true ) {
        iVar4 = FUN_01803a10(uVar1);
        if (iVar4 <= iVar3 + 1) break;
        iVar4 = FUN_01803a10(uVar1);
        uVar2 = FUN_018039f0(uVar1,iVar4 + -1);
        FUN_00410f20(uVar2);
      }
    }
  }
  return;
}

