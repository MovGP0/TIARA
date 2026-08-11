/* Ghidra address: 00d9c5c0 */
/* Ghidra symbol: FUN_00d9c5c0 */


void FUN_00d9c5c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_30 [32];
  
  FUN_00d835b0(local_30,*(undefined8 *)(param_1 + 0xe8),param_2,param_3);
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x380))
            (*(longlong **)(param_1 + 0x98),1,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),
             local_30,L"default");
  return;
}

