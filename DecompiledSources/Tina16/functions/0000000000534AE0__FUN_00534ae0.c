/* Ghidra address: 00534ae0 */
/* Ghidra symbol: FUN_00534ae0 */


void FUN_00534ae0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x18) + -8);
  }
  if (iVar1 == 0) {
    FUN_00419260(param_1 + 0x18,&DAT_0048cb50,1,4);
  }
  else if (iVar1 == *(int *)(param_1 + 0x20)) {
    FUN_00419260(param_1 + 0x18,&DAT_0048cb50,1,(longlong)(iVar1 * 2));
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 8) = param_2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}

