/* Ghidra address: 01799b60 */
/* Ghidra symbol: FUN_01799b60 */


void FUN_01799b60(longlong param_1,int param_2)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0xcfc) = param_2;
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xc88) + 0x310) + 0x78),0);
  FUN_005fd6d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xc88) + 0x310) + 0x78),2);
  if (param_2 == -2) {
    param_2 = -0xfffff1;
  }
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xc88) + 0x310) + 0x80),param_2
              );
  lVar1 = *(longlong *)(param_1 + 0xc88);
  (**(code **)(**(longlong **)(lVar1 + 0x310) + 0xf8))
            (*(longlong **)(lVar1 + 0x310),1,1,*(int *)(lVar1 + 0x98) + -1,
             *(int *)(lVar1 + 0x9c) + -1);
  return;
}

