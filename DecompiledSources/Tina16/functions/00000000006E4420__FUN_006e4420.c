/* Ghidra address: 006e4420 */
/* Ghidra symbol: FUN_006e4420 */


void FUN_006e4420(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x538) != 0) {
    FUN_007d7c60(*(longlong *)(param_1 + 0x538),*(undefined8 *)(param_1 + 0x540));
  }
  *(longlong *)(param_1 + 0x538) = param_2;
  if (param_2 == 0) {
    FUN_006e4280(param_1,0,2);
  }
  else {
    FUN_007d7c70(param_2,*(undefined8 *)(param_1 + 0x540));
    FUN_004d26c0(*(undefined8 *)(param_1 + 0x538),param_1);
    uVar1 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x538));
    FUN_006e4280(param_1,uVar1,2);
  }
  return;
}

