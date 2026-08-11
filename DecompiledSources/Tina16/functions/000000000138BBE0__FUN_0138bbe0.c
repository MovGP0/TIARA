/* Ghidra address: 0138bbe0 */
/* Ghidra symbol: FUN_0138bbe0 */


void FUN_0138bbe0(longlong param_1)

{
  undefined4 local_1c;
  
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x128))
            (*(longlong **)(param_1 + 0xe88),&local_1c,param_1 + 0xe74);
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x130))
            (*(longlong **)(param_1 + 0xe88),&local_1c,param_1 + 0xe74,0);
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x120))
            (*(longlong **)(param_1 + 0xe88),local_1c,*(undefined1 *)(param_1 + 0xe74));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0xc38),local_1c);
  *(undefined4 *)(param_1 + 0xe70) = local_1c;
  return;
}

