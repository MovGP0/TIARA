/* Ghidra address: 0180fd00 */
/* Ghidra symbol: FUN_0180fd00 */


undefined8 FUN_0180fd00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414b50(local_20,param_2);
  if (local_20[0] != 0) {
    iVar1 = FUN_00414cb0(local_20[0]);
    if (*(short *)(local_20[0] + -2 + (longlong)iVar1 * 2) != 0x5c) {
      FUN_00416ad0(local_20,&DAT_0180fe48);
    }
  }
  FUN_004169f0(&local_28,0x104);
  if (local_20[0] == 0) {
    FUN_004169f0(local_20,0x104);
    uVar3 = FUN_00414de0(local_20);
    uVar2 = thunk_FUN_0418dd92(0x104,uVar3);
    FUN_004169f0(local_20,uVar2);
  }
  else {
    FUN_00416ad0(local_20,&DAT_0180fe58);
    FUN_004169f0(local_20,0x104);
  }
  uVar3 = FUN_00414de0(local_20);
  uVar4 = FUN_00414de0(&local_28);
  thunk_FUN_041b7910(uVar3,&LAB_0180fe5c,0,uVar4);
  uVar3 = FUN_00414de0(&local_28);
  FUN_00442b00(param_1,uVar3);
  FUN_00414560(&local_28,2);
  return param_1;
}

