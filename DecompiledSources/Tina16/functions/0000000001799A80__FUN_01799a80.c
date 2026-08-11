/* Ghidra address: 01799a80 */
/* Ghidra symbol: FUN_01799a80 */


void FUN_01799a80(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0xcf8) = param_2;
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xc70) + 0x310) + 0x78),0);
  FUN_005fd6d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xc70) + 0x310) + 0x78),2);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xc70) + 0x310) + 0x80),param_2
              );
  lVar1 = *(longlong *)(param_1 + 0xc70);
  (**(code **)(**(longlong **)(lVar1 + 0x310) + 0xf8))
            (*(longlong **)(lVar1 + 0x310),1,1,*(int *)(lVar1 + 0x98) + -1,
             *(int *)(lVar1 + 0x9c) + -1);
  return;
}

