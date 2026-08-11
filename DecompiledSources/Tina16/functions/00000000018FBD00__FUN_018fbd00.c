/* Ghidra address: 018fbd00 */
/* Ghidra symbol: FUN_018fbd00 */


void FUN_018fbd00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_38 [24];
  
  lVar1 = *(longlong *)(param_1 + 0x700);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar1 + 0x310) + 0x80),*(undefined4 *)(lVar1 + 200));
  FUN_00498350(local_38,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x98),
               *(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x9c));
  (**(code **)(**(longlong **)(lVar1 + 0x310) + 0xa8))(*(longlong **)(lVar1 + 0x310),local_38);
  lVar2 = *(longlong *)(param_1 + 0x708);
  FUN_007d6c70(lVar2,*(undefined8 *)(lVar1 + 0x310),
               (longlong)(*(int *)(*(longlong *)(param_1 + 0x700) + 0x98) - *(int *)(lVar2 + 0x94))
               / 2 & 0xffffffff,
               (longlong)(*(int *)(*(longlong *)(param_1 + 0x700) + 0x9c) - *(int *)(lVar2 + 0x90))
               / 2 & 0xffffffff,0,1);
  return;
}

