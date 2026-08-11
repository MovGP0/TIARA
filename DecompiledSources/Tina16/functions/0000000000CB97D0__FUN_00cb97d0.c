/* Ghidra address: 00cb97d0 */
/* Ghidra symbol: FUN_00cb97d0 */


undefined8 FUN_00cb97d0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x100));
  uVar1 = *(uint *)(param_1 + 0x128);
  if ((uVar1 != *(ushort *)(param_1 + 0x16e)) && (0 < (int)uVar1)) {
    FUN_0043f750(&local_10,uVar1);
    FUN_00416cd0(param_2,3,*(undefined8 *)(param_1 + 0x100),&LAB_00cb9894,local_10);
  }
  FUN_00414480(&local_10);
  return param_2;
}

