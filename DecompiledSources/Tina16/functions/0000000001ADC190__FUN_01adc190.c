/* Ghidra address: 01adc190 */
/* Ghidra symbol: FUN_01adc190 */


undefined8 FUN_01adc190(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + -4);
  }
  FUN_004169f0(param_1,uVar2);
  iVar5 = 0;
  iVar6 = 0;
  if (param_2 != 0) {
    iVar6 = *(int *)(param_2 + -4);
  }
  iVar4 = 1;
  if (0 < iVar6) {
    do {
      cVar1 = FUN_00432270(param_2 + -2 + (longlong)iVar4 * 2);
      if (cVar1 == '\0') {
        iVar5 = iVar5 + 1;
        lVar3 = FUN_00414de0(param_1);
        *(undefined2 *)(lVar3 + -2 + (longlong)iVar5 * 2) =
             *(undefined2 *)(param_2 + -2 + (longlong)iVar4 * 2);
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_004169f0(param_1,iVar5);
  return param_1;
}

