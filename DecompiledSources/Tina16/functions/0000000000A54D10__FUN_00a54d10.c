/* Ghidra address: 00a54d10 */
/* Ghidra symbol: FUN_00a54d10 */


undefined4 FUN_00a54d10(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  *param_2 = 0;
  cVar1 = FUN_0046c390(param_1 + 0x5a0);
  if (cVar1 == '\0') {
    local_34 = 0;
  }
  else {
    FUN_00467e90(local_20,param_1 + 0x5a0);
    iVar2 = FUN_004170c0(&LAB_00a54e68,local_20[0],1);
    if (iVar2 < 1) {
      FUN_00467e90(&local_30,param_1 + 0x5a0);
      uVar3 = FUN_00a54390(param_1);
      uVar4 = FUN_00a54390(param_1);
      local_34 = FUN_00a61c40(local_30,0,0,uVar3,uVar4,0);
    }
    else {
      *param_2 = 1;
      FUN_00467e90(&local_28,param_1 + 0x5a0);
      local_34 = FUN_00a61c40(local_28,1,100,0,0,0);
    }
  }
  FUN_00414560(&local_30,3);
  return local_34;
}

