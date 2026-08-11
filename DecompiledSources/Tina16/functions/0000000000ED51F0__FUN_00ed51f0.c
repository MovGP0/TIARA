/* Ghidra address: 00ed51f0 */
/* Ghidra symbol: FUN_00ed51f0 */


void FUN_00ed51f0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x840) + 0x260))(*(longlong **)(param_1 + 0x840));
  (**(code **)(**(longlong **)(param_1 + 0x858) + 0x128))(*(longlong **)(param_1 + 0x858),uVar1);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0xf0))(*(longlong **)(param_1 + 0x858));
  (**(code **)(**(longlong **)(param_1 + 0x850) + 0x128))
            (*(longlong **)(param_1 + 0x850),
             CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 == '\0') & 0xffffffff);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x850) + 0xf0))(*(longlong **)(param_1 + 0x850));
  (**(code **)(**(longlong **)(param_1 + 0x860) + 0x128))(*(longlong **)(param_1 + 0x860),uVar1);
  return;
}

