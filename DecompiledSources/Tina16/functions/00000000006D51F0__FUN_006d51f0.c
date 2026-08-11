/* Ghidra address: 006d51f0 */
/* Ghidra symbol: FUN_006d51f0 */


void FUN_006d51f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FUN_007d7c60(*(longlong *)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0x4a0));
  }
  *(longlong *)(param_1 + 0x4a8) = param_2;
  if (param_2 == 0) {
    FUN_0064fca0(param_1,0x1303,0,0);
  }
  else {
    FUN_007d7c70(param_2,*(undefined8 *)(param_1 + 0x4a0));
    FUN_004d26c0(*(undefined8 *)(param_1 + 0x4a8),param_1);
    uVar1 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x4a8));
    FUN_0064fca0(param_1,0x1303,0,uVar1);
  }
  return;
}

