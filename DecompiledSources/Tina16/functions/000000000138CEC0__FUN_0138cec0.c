/* Ghidra address: 0138cec0 */
/* Ghidra symbol: FUN_0138cec0 */


void FUN_0138cec0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_20;
  
  uVar1 = (ulonglong)(*(byte *)(param_1 + 0xe90) + 1) % 2;
  FUN_0064de00(*(undefined8 *)(param_1 + 0xd48),(&PTR_DAT_01f38d80)[(int)uVar1]);
  *(char *)(param_1 + 0xe90) = (char)uVar1;
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x80))
            (*(longlong **)(param_1 + 0xe88),*(longlong *)(param_1 + 0x870) + 0x2a,&local_20,uVar1,1
            );
  FUN_00b90440(*(undefined8 *)(param_1 + 0xcb8),local_20);
  return;
}

