/* Ghidra address: 00ce2770 */
/* Ghidra symbol: FUN_00ce2770 */


void FUN_00ce2770(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_0043ea00(&local_10,param_2);
  if (local_10 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  }
  else {
    FUN_00874ee0(&local_18,&local_10,&DAT_00ce28d8,1,1);
    if (local_18 == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
      FUN_00874ee0(&local_28,&local_10,&LAB_00ce28e8,1,1);
      uVar1 = FUN_0043fd00(local_28,0xffffffffffffffff);
      *(undefined8 *)(param_1 + 0x28) = uVar1;
    }
    else {
      uVar1 = FUN_0043fd00(local_18,0xffffffffffffffff);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      FUN_00874ee0(&local_20,&local_10,&LAB_00ce28e8,1,1);
      uVar1 = FUN_0043fd00(local_20,0xffffffffffffffff);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
    }
  }
  FUN_00414560(&local_28,4);
  return;
}

