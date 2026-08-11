/* Ghidra address: 00d065e0 */
/* Ghidra symbol: FUN_00d065e0 */


undefined4 FUN_00d065e0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x100) == -1) {
    FUN_00414b50(&local_10,*(undefined8 *)(param_1 + 0x108));
    FUN_00874ee0(&local_20,&local_10,&DAT_00d06708,1,1);
    FUN_0043ea00(&local_28,local_10);
    FUN_00414b50(&local_10,local_28);
    FUN_00874ee0(&local_18,&local_10,&DAT_00d06708,0,1);
    FUN_00874ee0(&local_10,&local_18,&LAB_00d06718,0,1);
    uVar1 = FUN_00877cc0(local_10,0xffffffff);
    *(undefined4 *)(param_1 + 0x100) = uVar1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x100);
  FUN_00414560(&local_28,4);
  return uVar1;
}

