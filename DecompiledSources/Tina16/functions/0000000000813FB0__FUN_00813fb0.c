/* Ghidra address: 00813fb0 */
/* Ghidra symbol: FUN_00813fb0 */


void FUN_00813fb0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  thunk_FUN_0418d03a(0);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  if (*(int *)(param_1 + 8) != -1) {
    uVar3 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    lVar4 = thunk_FUN_04129e10(uVar3);
    lVar5 = FUN_00786090(*(undefined8 *)(param_1 + 0x20));
    if (lVar4 == lVar5) {
      iVar1 = FUN_00814c90(param_1);
      if (iVar1 != -1) {
        uVar2 = FUN_00814c90(param_1);
        *(undefined4 *)(param_1 + 8) = uVar2;
        *(undefined4 *)(param_1 + 0xb0) = uVar2;
        goto LAB_00814043;
      }
    }
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
LAB_00814043:
  FUN_00814f60(param_1);
  return;
}

