/* Ghidra address: 00bd6d60 */
/* Ghidra symbol: FUN_00bd6d60 */


longlong * FUN_00bd6d60(longlong param_1,longlong *param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00bd6cb0(&local_10,*(undefined2 *)(param_1 + 0x20));
  uVar2 = FUN_00bd6e90(param_1);
  FUN_007dc700(&local_18,uVar2);
  FUN_00416cd0(param_2,3,local_10,&DAT_00bd6e78,local_18);
  sVar1 = FUN_00bd6e90(param_1);
  if (sVar1 != 0) {
    uVar2 = FUN_00bd7120(param_1);
    FUN_007dc700(&local_20,uVar2);
    FUN_00416cd0(param_2,3,*param_2,&DAT_00bd6e8c,local_20);
  }
  if (*param_2 == 0) {
    FUN_004b18b0(param_1,param_2);
  }
  FUN_00414560(&local_20,3);
  return param_2;
}

