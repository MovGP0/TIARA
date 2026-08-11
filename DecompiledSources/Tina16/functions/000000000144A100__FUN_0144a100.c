/* Ghidra address: 0144a100 */
/* Ghidra symbol: FUN_0144a100 */


void FUN_0144a100(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = *param_1;
  FUN_01449ab0(0,param_1[1] & 0xffffffff,param_2,param_3);
  iVar3 = 0;
  if (-1 < (int)param_2[1]) {
    iVar5 = (int)param_2[1] + 1;
    do {
      lVar2 = *param_2;
      lVar4 = (longlong)iVar3;
      *(undefined8 *)(lVar2 + lVar4 * 0x10) = *(undefined8 *)(lVar1 + lVar4 * 0x10);
      *(undefined8 *)(lVar2 + 8 + lVar4 * 0x10) = *(undefined8 *)(lVar1 + 8 + lVar4 * 0x10);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

