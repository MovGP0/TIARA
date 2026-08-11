/* Ghidra address: 006e4390 */
/* Ghidra symbol: FUN_006e4390 */


void FUN_006e4390(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FUN_007d7c60(*(longlong *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4e0));
  }
  *(longlong *)(param_1 + 0x4e8) = param_2;
  if (param_2 == 0) {
    FUN_006e4280(param_1,0,0);
  }
  else {
    FUN_007d7c70(param_2,*(undefined8 *)(param_1 + 0x4e0));
    FUN_004d26c0(*(undefined8 *)(param_1 + 0x4e8),param_1);
    uVar1 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x4e8));
    FUN_006e4280(param_1,uVar1,0);
  }
  return;
}

