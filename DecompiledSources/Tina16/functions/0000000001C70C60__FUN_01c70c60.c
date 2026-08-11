/* Ghidra address: 01c70c60 */
/* Ghidra symbol: FUN_01c70c60 */


void FUN_01c70c60(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  
  local_2c = FUN_01d07010(*(undefined8 *)(param_1 + 200));
  uVar2 = FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x27a8));
  FUN_01d049d0(*(undefined8 *)(param_1 + 200),uVar2,*(undefined4 *)(param_1 + 0xc4),
               *(undefined4 *)(param_1 + 0xc0));
  if (local_2c != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x27a8);
    iVar4 = *(int *)(lVar1 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_00b94e60(lVar1,iVar3);
        FUN_01c70bd0(auStack_58,uVar2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

