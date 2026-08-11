/* Ghidra address: 00afc0d0 */
/* Ghidra symbol: FUN_00afc0d0 */


void FUN_00afc0d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_00a77a90(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  *(undefined8 *)(lVar1 + 0x128) = *param_2;
  *(undefined8 *)(lVar1 + 0x130) = param_2[1];
  return;
}

