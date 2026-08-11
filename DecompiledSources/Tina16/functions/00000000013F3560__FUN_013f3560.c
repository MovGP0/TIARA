/* Ghidra address: 013f3560 */
/* Ghidra symbol: FUN_013f3560 */


void FUN_013f3560(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x128))
            (*(longlong **)(param_1 + 0x6b0),
             CONCAT71((int7)((ulonglong)uVar2 >> 8),0 < (int)uVar2) & 0xffffffff);
  return;
}

