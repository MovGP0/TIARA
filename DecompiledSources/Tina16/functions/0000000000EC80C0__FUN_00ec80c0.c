/* Ghidra address: 00ec80c0 */
/* Ghidra symbol: FUN_00ec80c0 */


void FUN_00ec80c0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x810) + 0x260))(*(longlong **)(param_1 + 0x810));
  (**(code **)(**(longlong **)(param_1 + 0x820) + 0x128))(*(longlong **)(param_1 + 0x820),uVar1);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0xf0))(*(longlong **)(param_1 + 0x820));
  (**(code **)(**(longlong **)(param_1 + 0x828) + 0x128))(*(longlong **)(param_1 + 0x828),uVar1);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0xf0))(*(longlong **)(param_1 + 0x820));
  (**(code **)(**(longlong **)(param_1 + 0x818) + 0x128))
            (*(longlong **)(param_1 + 0x818),
             CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 == '\0') & 0xffffffff);
  return;
}

