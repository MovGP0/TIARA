/* Ghidra address: 0194e7f0 */
/* Ghidra symbol: FUN_0194e7f0 */


void FUN_0194e7f0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0xb0))
                    (*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x68));
  *(bool *)(param_2 + 0x3f) = iVar1 != -1;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x30));
  return;
}

