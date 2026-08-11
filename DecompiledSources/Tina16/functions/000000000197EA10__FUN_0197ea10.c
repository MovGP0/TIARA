/* Ghidra address: 0197ea10 */
/* Ghidra symbol: FUN_0197ea10 */


void FUN_0197ea10(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  iVar1 = FUN_0197e8b0();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00452320(param_1 + 8);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

