/* Ghidra address: 01449ab0 */
/* Ghidra symbol: FUN_01449ab0 */


void FUN_01449ab0(longlong param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_004095c0((longlong)(int)((param_2 + 1) * 0x10));
  *param_3 = lVar1;
  *(uint *)(param_3 + 1) = param_2;
  iVar3 = 0;
  if (param_2 < 0x80000000) {
    iVar2 = param_2 + 1;
    do {
      lVar1 = *param_3;
      *(undefined8 *)(lVar1 + (longlong)iVar3 * 0x10) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)iVar3 * 0x10) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((param_1 != 0) && (iVar3 = 0, param_2 < 0x80000000)) {
    iVar2 = param_2 + 1;
    do {
      lVar1 = *param_3;
      uVar4 = FUN_019b9700(param_1,iVar3,param_4);
      *(undefined8 *)(lVar1 + (longlong)iVar3 * 0x10) = uVar4;
      *(undefined8 *)(lVar1 + 8 + (longlong)iVar3 * 0x10) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

