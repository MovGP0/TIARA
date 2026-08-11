/* Ghidra address: 00ec8160 */
/* Ghidra symbol: FUN_00ec8160 */


void FUN_00ec8160(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x260))(*(longlong **)(param_1 + 0x808));
  (**(code **)(**(longlong **)(param_1 + 0x818) + 0x128))(*(longlong **)(param_1 + 0x818),uVar1);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x818) + 0xf0))(*(longlong **)(param_1 + 0x818));
  (**(code **)(**(longlong **)(param_1 + 0x820) + 0x128))
            (*(longlong **)(param_1 + 0x820),
             CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 == '\0') & 0xffffffff);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0xf0))(*(longlong **)(param_1 + 0x820));
  (**(code **)(**(longlong **)(param_1 + 0x828) + 0x128))(*(longlong **)(param_1 + 0x828),uVar1);
  return;
}

