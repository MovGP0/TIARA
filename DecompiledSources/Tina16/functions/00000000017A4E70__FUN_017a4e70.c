/* Ghidra address: 017a4e70 */
/* Ghidra symbol: FUN_017a4e70 */


void FUN_017a4e70(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_0043f750(param_2 + 0x20,*(undefined4 *)(param_2 + 0x84));
  FUN_00416ba0(param_2 + 0x28,L"Picture #",*(undefined8 *)(param_2 + 0x20));
  uVar1 = FUN_006dee40(*(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x550),
                       *(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x70) = uVar1;
  FUN_006dcbd0(*(undefined8 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x84));
  FUN_006dc990(*(undefined8 *)(param_2 + 0x70),0x66);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x78));
  return;
}

