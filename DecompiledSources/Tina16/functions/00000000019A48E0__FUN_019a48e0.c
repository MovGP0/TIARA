/* Ghidra address: 019a48e0 */
/* Ghidra symbol: FUN_019a48e0 */


undefined8 FUN_019a48e0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x138))
                      (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x210),
                       *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
    **(undefined4 **)(param_1 + 0x70) = uVar1;
    uVar2 = CONCAT71((int7)((ulonglong)*(int **)(param_1 + 0x70) >> 8),
                     **(int **)(param_1 + 0x70) != -1);
  }
  return uVar2;
}

