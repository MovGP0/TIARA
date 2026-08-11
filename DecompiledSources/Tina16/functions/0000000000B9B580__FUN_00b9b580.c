/* Ghidra address: 00b9b580 */
/* Ghidra symbol: FUN_00b9b580 */


void FUN_00b9b580(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  if (0 < iVar3) {
    uVar2 = FUN_00416740(param_2);
    FUN_004b89e0(uVar1,uVar2,(longlong)(iVar3 * 2));
  }
  FUN_004b6dc0(uVar1,0);
  (**(code **)(*param_1 + 8))(param_1,uVar1,1,0);
  uVar1 = FUN_00b97c30(&PTR_FUN_0043a338);
  FUN_00b9bde0(param_1,uVar1);
  return;
}

