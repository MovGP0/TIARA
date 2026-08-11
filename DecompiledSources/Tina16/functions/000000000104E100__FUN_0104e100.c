/* Ghidra address: 0104e100 */
/* Ghidra symbol: FUN_0104e100 */


void FUN_0104e100(longlong param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x914) = param_2;
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 0x958) = *(undefined8 *)(*(longlong *)(param_1 + 0x800) + 0x510);
    *(undefined8 *)(param_1 + 0x950) = *(undefined8 *)(*(longlong *)(param_1 + 0x800) + 0x4d8);
    *(undefined8 *)(param_1 + 0x960) = *(undefined8 *)(*(longlong *)(param_1 + 0x800) + 0x4f0);
    *(undefined8 *)(param_1 + 0x968) = *(undefined8 *)(*(longlong *)(param_1 + 0x800) + 0x4f8);
  }
  else {
    *(undefined8 *)(param_1 + 0x958) = *(undefined8 *)(*(longlong *)(param_1 + 0x828) + 0x510);
    *(undefined8 *)(param_1 + 0x950) = *(undefined8 *)(*(longlong *)(param_1 + 0x828) + 0x4d8);
    *(undefined8 *)(param_1 + 0x960) = *(undefined8 *)(*(longlong *)(param_1 + 0x828) + 0x4f0);
    *(undefined8 *)(param_1 + 0x968) = *(undefined8 *)(*(longlong *)(param_1 + 0x828) + 0x4f8);
  }
  if (*(longlong *)(param_1 + 0x9d8) != 0) {
    iVar1 = FUN_01052670(param_1);
    FUN_006807e0(*(undefined8 *)(param_1 + 0x958),iVar1 == 2);
  }
  return;
}

