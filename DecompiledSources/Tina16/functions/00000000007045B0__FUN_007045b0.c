/* Ghidra address: 007045b0 */
/* Ghidra symbol: FUN_007045b0 */


void FUN_007045b0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_007d7c60(*(longlong *)(param_1 + 0x568),*(undefined8 *)(param_1 + 0x560));
  }
  *(longlong *)(param_1 + 0x568) = param_2;
  if (param_2 == 0) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_0064fca0(param_1,0x402,0,0);
      FUN_00655b90(param_1);
    }
  }
  else {
    FUN_007d7c70(param_2,*(undefined8 *)(param_1 + 0x560));
    FUN_004d26c0(*(undefined8 *)(param_1 + 0x568),param_1);
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_0065b870(param_1);
      uVar3 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x568));
      thunk_FUN_0413e052(uVar2,0x402,0,uVar3);
    }
  }
  return;
}

