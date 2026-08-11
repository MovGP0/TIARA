/* Ghidra address: 01a26680 */
/* Ghidra symbol: FUN_01a26680 */


void FUN_01a26680(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (param_5 < param_3) {
    local_38 = param_5;
    uStack_34 = param_6;
    uVar3 = param_3 - param_5 >> 0x1f;
    iVar2 = (param_3 - param_5 ^ uVar3) - uVar3;
    local_40 = param_3;
    uStack_3c = param_4;
  }
  else {
    local_40 = param_5;
    uStack_3c = param_6;
    uVar3 = param_5 - param_3 >> 0x1f;
    iVar2 = (param_5 - param_3 ^ uVar3) - uVar3;
    local_38 = param_3;
    uStack_34 = param_4;
  }
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_34,local_38);
  *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_34,local_38 + iVar2);
  *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_3c,local_40);
  *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_3c,local_40 - iVar2);
  iVar2 = 0;
  iVar4 = 4;
  do {
    lVar1 = (longlong)((iVar2 + 1) % 4);
    FUN_01a267b0(param_1,param_2,*(undefined4 *)(param_1 + 0x20 + (longlong)iVar2 * 8),
                 *(undefined4 *)(param_1 + 0x24 + (longlong)iVar2 * 8),
                 *(undefined4 *)(param_1 + 0x20 + lVar1 * 8),
                 *(undefined4 *)(param_1 + 0x24 + lVar1 * 8));
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

