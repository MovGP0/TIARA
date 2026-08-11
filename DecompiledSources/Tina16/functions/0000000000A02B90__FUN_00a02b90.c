/* Ghidra address: 00a02b90 */
/* Ghidra symbol: FUN_00a02b90 */


void FUN_00a02b90(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)*param_2)(param_2);
  iVar2 = FUN_004b6da0(param_2);
  iVar1 = iVar1 - iVar2;
  FUN_00419260(param_1 + 8,&DAT_009f2be0,1,(longlong)(iVar1 + 2));
  if (0 < iVar1) {
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(param_1 + 8),iVar1);
  }
  *(undefined2 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1) = 0;
  FUN_00a02a30(param_1);
  return;
}

