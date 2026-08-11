/* Ghidra address: 00d49c30 */
/* Ghidra symbol: FUN_00d49c30 */


undefined8 FUN_00d49c30(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
  uVar2 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
  FUN_00423010(param_2,0,0,uVar1,uVar2);
  iVar3 = FUN_00d49ca0(param_1);
  iVar4 = FUN_00d49ca0(param_1);
  thunk_FUN_04176532(param_2,-iVar3,-iVar4);
  return param_2;
}

