/* Ghidra address: 007e3080 */
/* Ghidra symbol: FUN_007e3080 */


void FUN_007e3080(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = (code *)*param_2;
  uVar2 = param_2[1];
  iVar4 = FUN_007e2ef0();
  iVar5 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar3 = FUN_007e2f10(param_1,iVar5);
      (*pcVar1)(uVar2,uVar3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

