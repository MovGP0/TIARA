/* Ghidra address: 00fc5c40 */
/* Ghidra symbol: FUN_00fc5c40 */


void FUN_00fc5c40(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x748),local_20);
  if (local_20[0] != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xba8);
    uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x748));
    FUN_00fc5910(param_1,uVar1,uVar2);
  }
  FUN_00414480(local_20);
  return;
}

