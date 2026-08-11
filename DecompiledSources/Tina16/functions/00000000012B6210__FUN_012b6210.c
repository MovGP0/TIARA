/* Ghidra address: 012b6210 */
/* Ghidra symbol: FUN_012b6210 */


void FUN_012b6210(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6d0),param_2);
  iVar1 = FUN_00b905f0(param_2,0xc);
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x6d0),
               iVar1 * (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4b4) + 1));
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x6c8),*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x9c) + 3)
  ;
  FUN_007fdf10(param_1,*(int *)(*(longlong *)(param_1 + 0x6c8) + 0x9c) + *(int *)(param_1 + 0x728));
  return;
}

