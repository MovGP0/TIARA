/* Ghidra address: 00d9d1f0 */
/* Ghidra symbol: FUN_00d9d1f0 */


void FUN_00d9d1f0(longlong param_1,undefined4 param_2)

{
  undefined1 local_28 [16];
  
  FUN_00d83500(local_28,*(undefined8 *)(param_1 + 0x88));
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x330))
            (*(longlong **)(param_1 + 0x48),param_2,
             *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8),local_28,L"default");
  return;
}

