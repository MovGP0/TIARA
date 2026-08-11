/* Ghidra address: 00d02ff0 */
/* Ghidra symbol: FUN_00d02ff0 */


undefined4 FUN_00d02ff0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  FUN_00d07930(*(undefined8 *)(param_1 + 0xc0),&local_10);
  iVar1 = (**(code **)PTR_PTR_020018b0)(&DAT_00d030e8,local_10);
  if (0 < iVar1) {
    FUN_00416dc0(&local_10,local_10,1,iVar1 + -1);
  }
  FUN_0043ea00(&local_28,local_10);
  FUN_00416ba0(local_20,&LAB_00d030f8,local_28);
  uVar2 = FUN_00877cc0(local_20[0],0);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return uVar2;
}

