/* Ghidra address: 005ebee0 */
/* Ghidra symbol: FUN_005ebee0 */


undefined8 FUN_005ebee0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  FUN_00414b50(&local_28,param_2);
  uVar1 = FUN_005ea1f0(local_28);
  if ((char)uVar1 == '\0') {
    FUN_00416e20(&local_28,1,1);
  }
  local_20[0] = 0;
  uVar2 = FUN_005ea6e0(param_1,uVar1);
  uVar3 = FUN_00416740(local_28);
  thunk_FUN_03ecc02e(uVar2,uVar3,0,*(undefined4 *)(param_1 + 0x2c),local_20);
  FUN_00414480(&local_28);
  return local_20[0];
}

