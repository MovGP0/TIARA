/* Ghidra address: 00b897e0 */
/* Ghidra symbol: FUN_00b897e0 */


void FUN_00b897e0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)PTR_DAT_02002560 == 0) {
    iVar1 = FUN_007e2ef0();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = FUN_007e2f10(*(undefined8 *)(param_2 + 0x80),iVar3);
        FUN_00b89770(param_1,uVar2);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

