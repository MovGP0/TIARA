/* Ghidra address: 01acfe60 */
/* Ghidra symbol: FUN_01acfe60 */


void FUN_01acfe60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar4 + -1);
      lVar3 = FUN_004113f0(uVar2,&DAT_01cdd500);
      *(undefined8 *)(lVar3 + 0xa0) = param_3;
      FUN_01ce52c0(lVar3,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78),param_2);
      FUN_01ce4cf0(lVar3,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

