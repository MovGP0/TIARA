/* Ghidra address: 0139e570 */
/* Ghidra symbol: FUN_0139e570 */


void FUN_0139e570(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_01d31a40(*(undefined8 *)(param_2 + 0x58));
  if (iVar1 != 0) {
    uVar2 = FUN_01d31a40(*(undefined8 *)(param_2 + 0x58));
    FUN_00b047e0(uVar2);
  }
  if (*(longlong *)PTR_DAT_02003a18 != 0) {
    uVar3 = (**(code **)**(undefined8 **)PTR_DAT_02003a18)(*(undefined8 **)PTR_DAT_02003a18);
    FUN_00418590(uVar3,&DAT_01984da0);
  }
  *(undefined8 *)PTR_DAT_02003a18 = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  return;
}

