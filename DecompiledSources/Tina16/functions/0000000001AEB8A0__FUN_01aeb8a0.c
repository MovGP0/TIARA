/* Ghidra address: 01aeb8a0 */
/* Ghidra symbol: FUN_01aeb8a0 */


void FUN_01aeb8a0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*PTR_DAT_020052b8 != '\0') {
    uVar1 = FUN_007fd7d0(param_1);
    uVar2 = FUN_007fd800(param_1);
    FUN_01aeeaf0(local_20,0x3fc,*(undefined4 *)(param_1 + 0x6b8),uVar1,uVar2,
                 *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_20[0]);
  }
  FUN_007fdb10(param_1);
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    FUN_01ca0db0(*(undefined8 *)PTR_DAT_02004e40,param_1);
  }
  FUN_00414480(local_20);
  return;
}

