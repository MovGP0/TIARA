/* Ghidra address: 00ad5060 */
/* Ghidra symbol: FUN_00ad5060 */


void FUN_00ad5060(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x81) != '\0') {
    uVar3 = FUN_00af6c00(*(undefined8 *)(param_1 + 0x98));
    FUN_00a72f50(*(undefined8 *)(param_1 + 0x70),uVar3,
                 *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28));
    FUN_00a72f00(*(undefined8 *)(param_1 + 0x70));
    *(undefined1 *)(param_1 + 0x81) = 0;
  }
  FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),99);
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe8);
    uVar3 = FUN_004aeac0(lVar2,*(int *)(lVar2 + 0x10) + -1);
    FUN_00ab5240(lVar1,0,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(param_1 + 0x70),0,uVar3);
  }
  return;
}

