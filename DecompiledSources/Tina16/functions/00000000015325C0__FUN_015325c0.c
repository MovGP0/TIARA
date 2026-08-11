/* Ghidra address: 015325c0 */
/* Ghidra symbol: FUN_015325c0 */


void FUN_015325c0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_0152fca0(param_1,0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x930) + 0x4a0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_019a9ed0(*(undefined8 *)(param_1 + 0x1c28),PTR_DAT_02003e38,*PTR_DAT_02004638,
               *PTR_DAT_020044c8,1,*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x4a0),0,0xf);
  FUN_016cedb0(*(undefined8 *)(*(longlong *)(param_1 + 0x1c28) + 0xe70),
               *(undefined8 *)(param_1 + 0x1c10));
  FUN_0152fd80(param_1);
  return;
}

