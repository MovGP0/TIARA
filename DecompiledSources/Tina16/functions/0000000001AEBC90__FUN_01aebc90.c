/* Ghidra address: 01aebc90 */
/* Ghidra symbol: FUN_01aebc90 */


void FUN_01aebc90(longlong param_1,undefined8 param_2)

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
  FUN_006587a0(param_1,param_2);
  FUN_00414480(local_20);
  return;
}

