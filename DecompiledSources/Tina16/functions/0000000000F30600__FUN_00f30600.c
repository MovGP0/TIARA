/* Ghidra address: 00f30600 */
/* Ghidra symbol: FUN_00f30600 */


void FUN_00f30600(longlong param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + -4);
  }
  uVar2 = 1;
  if (param_2 != '\0') {
    uVar2 = 3;
  }
  if (param_3 != '\0') {
    uVar2 = uVar2 | 4;
  }
  FUN_00f30220(param_1,0,uVar1,uVar2);
  return;
}

