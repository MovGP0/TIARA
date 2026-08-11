/* Ghidra address: 00d9d150 */
/* Ghidra symbol: FUN_00d9d150 */


void FUN_00d9d150(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 local_50 [32];
  undefined1 local_30 [24];
  
  FUN_00d83520(local_30,*(undefined8 *)(param_1 + 0x88),0,param_2);
  FUN_00d83540(local_50,*(undefined8 *)(param_1 + 0x88),0,4,param_3);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x348))
            (*(longlong **)(param_1 + 0x48),1,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8),
             local_30,local_50,L"default");
  return;
}

