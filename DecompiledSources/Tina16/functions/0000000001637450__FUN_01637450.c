/* Ghidra address: 01637450 */
/* Ghidra symbol: FUN_01637450 */


void FUN_01637450(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0162ea80();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = FUN_01615ab0(param_1,iVar2);
      *param_2 = uVar3;
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

