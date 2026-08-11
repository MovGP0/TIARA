/* Ghidra address: 0074a400 */
/* Ghidra symbol: FUN_0074a400 */


void FUN_0074a400(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x90))(*(longlong **)(param_1 + 0x4a0));
  FUN_00652e80(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x4a8);
  if (((iVar1 == -1) || (iVar1 < 0)) || (*(int *)(*(longlong *)(param_1 + 0x498) + 0x10) <= iVar1))
  {
    *(undefined4 *)(param_1 + 0x4a8) = 0xffffffff;
  }
  else {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x498),iVar1);
    FUN_0064e1d0(uVar2);
    FUN_0064dbe0(uVar2,1);
    FUN_0064c650(uVar2,5);
  }
  return;
}

