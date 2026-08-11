/* Ghidra address: 0065c2a0 */
/* Ghidra symbol: FUN_0065c2a0 */


void FUN_0065c2a0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  pcVar1 = (code *)*param_2;
  uVar2 = param_2[1];
  iVar3 = FUN_00654c00();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar4 = FUN_00654bc0(param_1,iVar5);
      if (*(longlong *)(lVar4 + 8) == param_3) {
        (*pcVar1)(uVar2,lVar4);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

