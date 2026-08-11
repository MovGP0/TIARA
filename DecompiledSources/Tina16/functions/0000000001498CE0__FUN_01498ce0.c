/* Ghidra address: 01498ce0 */
/* Ghidra symbol: FUN_01498ce0 */


void FUN_01498ce0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x929) != '\0') {
    iVar2 = FUN_00c0faf0(*(undefined8 *)(param_1 + 0x8b8));
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x748),iVar2 != 0);
    iVar2 = FUN_00c0faf0(*(undefined8 *)(param_1 + 0x8b8));
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x750),iVar2 != 0);
    uVar1 = FUN_006a6030();
    uVar3 = FUN_006a5ff0(uVar1,1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x758),uVar3);
    iVar2 = FUN_00c0faf0(*(undefined8 *)(param_1 + 0x8b8));
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x760),iVar2 != 0);
  }
  return;
}

