/* Ghidra address: 00708850 */
/* Ghidra symbol: FUN_00708850 */


void FUN_00708850(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),0xb,0,0);
  uVar1 = thunk_FUN_03a65bf1(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x58),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),*param_2,
                             *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  *(undefined8 *)(param_2 + 6) = uVar1;
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),0xb,1,0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x60) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x61) = 0;
  thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),0,0,1);
  FUN_007082b0(*(undefined8 *)(param_1 + 0x60));
  *(undefined1 *)(param_1 + 0x3f) = 0;
  return;
}

