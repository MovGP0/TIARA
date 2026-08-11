/* Ghidra address: 012c45e0 */
/* Ghidra symbol: FUN_012c45e0 */


undefined8 FUN_012c45e0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x62c);
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x62c);
  if (iVar2 < iVar1) {
    uVar3 = 0xffffffff;
  }
  else if (iVar1 < iVar2) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_00416740(*(undefined8 *)(param_1 + 0x10));
    uVar4 = FUN_00416740(*(undefined8 *)(param_2 + 0x10));
    uVar3 = thunk_FUN_0418240f(uVar3,uVar4);
  }
  return uVar3;
}

