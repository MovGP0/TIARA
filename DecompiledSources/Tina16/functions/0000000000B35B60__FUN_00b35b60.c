/* Ghidra address: 00b35b60 */
/* Ghidra symbol: FUN_00b35b60 */


void FUN_00b35b60(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  byte local_b;
  ushort local_a;
  
  local_20 = 0;
  local_18 = 0;
  FUN_00b256e0(*(undefined8 *)(param_1 + 0x68),&local_a);
  if (local_a != 0) {
    FUN_00b256b0(*(undefined8 *)(param_1 + 0x68),&local_b);
    FUN_00416660(param_2,local_a);
    if ((local_b & 1) == 0) {
      FUN_00415d10(&local_18,local_a,0);
      FUN_00b257a0(*(undefined8 *)(param_1 + 0x68),&local_18,local_a);
      iVar1 = FUN_00415a60(local_18,&LAB_00b35ca4);
      if (iVar1 == 0) {
        FUN_004144d0(&local_18);
      }
      FUN_00b15390(&local_20,local_18);
      FUN_00414b90(param_2,local_20);
    }
    else {
      uVar2 = FUN_00415f70(*param_2);
      FUN_00b25770(*(undefined8 *)(param_1 + 0x68),uVar2,(uint)local_a * 2);
    }
  }
  FUN_00414520(&local_20);
  FUN_004144d0(&local_18);
  return;
}

