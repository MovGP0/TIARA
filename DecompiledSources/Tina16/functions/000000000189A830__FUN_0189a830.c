/* Ghidra address: 0189a830 */
/* Ghidra symbol: FUN_0189a830 */


void FUN_0189a830(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  FUN_0065f2f0(param_1);
  uVar1 = (longlong)*(int *)(param_1 + 0x98) / 2;
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x78),0xff000010);
  iVar2 = (int)uVar1 + -1;
  (**(code **)(**(longlong **)(param_1 + 0x310) + 200))(*(longlong **)(param_1 + 0x310),iVar2,2);
  (**(code **)(**(longlong **)(param_1 + 0x310) + 0xc0))
            (*(longlong **)(param_1 + 0x310),iVar2,*(int *)(param_1 + 0x9c) + -2);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x78),0xff000014);
  (**(code **)(**(longlong **)(param_1 + 0x310) + 200))
            (*(longlong **)(param_1 + 0x310),uVar1 & 0xffffffff,2);
  (**(code **)(**(longlong **)(param_1 + 0x310) + 0xc0))
            (*(longlong **)(param_1 + 0x310),uVar1 & 0xffffffff,*(int *)(param_1 + 0x9c) + -2);
  return;
}

