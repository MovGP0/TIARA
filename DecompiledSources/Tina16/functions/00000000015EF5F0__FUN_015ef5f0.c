/* Ghidra address: 015ef5f0 */
/* Ghidra symbol: FUN_015ef5f0 */


undefined8 FUN_015ef5f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_2 + 0x288))(param_2,local_20);
  if (local_20[0] == 0) {
    FUN_004169a0(local_20,(longlong)param_2 + 0xfe);
    iVar1 = FUN_004170c0(&LAB_015ef6c4,local_20[0],1);
    if (iVar1 == 0) {
      iVar1 = 0xff;
    }
    FUN_00416dc0(local_20,local_20[0],1,iVar1 + -1);
  }
  FUN_00414ad0(param_1,local_20[0]);
  FUN_00414480(local_20);
  return param_1;
}

