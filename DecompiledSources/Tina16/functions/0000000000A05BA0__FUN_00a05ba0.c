/* Ghidra address: 00a05ba0 */
/* Ghidra symbol: FUN_00a05ba0 */


void FUN_00a05ba0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_00a074d0(0xb);
  }
  lVar1 = FUN_004095c0(0x9058);
  *(longlong *)(param_1 + 0x48) = lVar1;
  if (lVar1 == 0) {
    FUN_0044d470();
  }
  FUN_0040d200(*(undefined8 *)(param_1 + 0x48),0x9058,0);
  **(longlong **)(param_1 + 0x48) = param_2;
  uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x1c));
  *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = uVar2;
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x10),0);
  return;
}

