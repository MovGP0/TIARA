/* Ghidra address: 00ed5150 */
/* Ghidra symbol: FUN_00ed5150 */


void FUN_00ed5150(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x848) + 0x260))(*(longlong **)(param_1 + 0x848));
  (**(code **)(**(longlong **)(param_1 + 0x850) + 0x128))(*(longlong **)(param_1 + 0x850),uVar1);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x850) + 0xf0))(*(longlong **)(param_1 + 0x850));
  (**(code **)(**(longlong **)(param_1 + 0x860) + 0x128))(*(longlong **)(param_1 + 0x860),uVar1);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x850) + 0xf0))(*(longlong **)(param_1 + 0x850));
  (**(code **)(**(longlong **)(param_1 + 0x858) + 0x128))
            (*(longlong **)(param_1 + 0x858),
             CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 == '\0') & 0xffffffff);
  return;
}

