/* Ghidra address: 017f14b0 */
/* Ghidra symbol: FUN_017f14b0 */


void FUN_017f14b0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x868) != 0) {
    iVar1 = FUN_00c0faf0(*(longlong *)(param_1 + 0x868));
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x710),iVar1 != 0);
    iVar1 = FUN_00c0faf0(*(undefined8 *)(param_1 + 0x868));
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x718),iVar1 != 0);
    uVar3 = FUN_006a6030();
    uVar2 = FUN_006a5ff0(uVar3,1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x720),uVar2);
    iVar1 = FUN_00c0faf0(*(undefined8 *)(param_1 + 0x868));
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x728),iVar1 != 0);
  }
  return;
}

