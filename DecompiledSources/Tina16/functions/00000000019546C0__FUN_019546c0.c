/* Ghidra address: 019546c0 */
/* Ghidra symbol: FUN_019546c0 */


void FUN_019546c0(longlong param_1)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_0180d9d0(&local_48,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
               *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0x118) = local_48;
  *(undefined8 *)(param_1 + 0x120) = uStack_40;
  *(undefined8 *)(param_1 + 0x128) = uStack_38;
  *(undefined8 *)(param_1 + 0x130) = uStack_30;
  return;
}

