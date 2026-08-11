/* Ghidra address: 00745270 */
/* Ghidra symbol: FUN_00745270 */


void FUN_00745270(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = (code *)*param_2;
  uVar2 = param_2[1];
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4c0) + 0x10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_00747090(*(undefined8 *)(param_1 + 0x4c0),iVar4);
      lVar3 = *(longlong *)(lVar3 + 0x18);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) == param_3)) {
        (*pcVar1)(uVar2,lVar3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

