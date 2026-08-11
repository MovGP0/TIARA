/* Ghidra address: 00e0c0f0 */
/* Ghidra symbol: FUN_00e0c0f0 */


void FUN_00e0c0f0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  *(undefined4 *)(param_1 + 0x71c) = uVar2;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  *(undefined4 *)(param_1 + 0x720) = uVar2;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0));
  *(undefined4 *)(param_1 + 0x724) = uVar2;
  puVar1 = *(undefined4 **)(param_1 + 0x708);
  *puVar1 = *(undefined4 *)(param_1 + 0x71c);
  puVar1[1] = *(undefined4 *)(param_1 + 0x720);
  puVar1[2] = *(undefined4 *)(param_1 + 0x724);
  return;
}

