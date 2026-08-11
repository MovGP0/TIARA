/* Ghidra address: 0089c870 */
/* Ghidra symbol: FUN_0089c870 */


void FUN_0089c870(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_28 = 0;
  (**(code **)*DAT_01e23f28)(DAT_01e23f28);
  if (DAT_01e23f20 == 0) {
    if (DAT_01e23f08 != 0) {
      FUN_0041ddd0(&local_28,PTR_PTR_02003a38);
      uVar1 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_28);
      FUN_004134c0(uVar1);
    }
    if (PTR_PTR_01e23f18 == (undefined *)0x0) {
      FUN_0041ddd0(&local_30,PTR_PTR_020026d0);
      uVar1 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_30);
      FUN_004134c0(uVar1);
    }
    DAT_01e23f08 = (**(code **)(PTR_PTR_01e23f18 + 0x28))(PTR_PTR_01e23f18,1);
  }
  DAT_01e23f20 = DAT_01e23f20 + 1;
  (**(code **)(*DAT_01e23f28 + 8))(DAT_01e23f28);
  FUN_00414560(&local_30,2);
  return;
}

