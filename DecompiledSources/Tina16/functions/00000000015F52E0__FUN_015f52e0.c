/* Ghidra address: 015f52e0 */
/* Ghidra symbol: FUN_015f52e0 */


undefined4 FUN_015f52e0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_80 [88];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_01aa0f40(local_80,param_1,8);
  FUN_004169a0(local_20,local_80);
  FUN_00416dc0(&local_28,local_20[0],8 - param_2,1);
  uVar2 = 0xffffffff;
  iVar1 = FUN_00416db0(local_28,&DAT_015f53dc);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00416db0(local_28,&DAT_015f53ec);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  FUN_00414560(&local_28,2);
  return uVar2;
}

