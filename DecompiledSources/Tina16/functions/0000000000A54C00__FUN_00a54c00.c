/* Ghidra address: 00a54c00 */
/* Ghidra symbol: FUN_00a54c00 */


undefined4 FUN_00a54c00(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  int local_1c;
  
  local_38 = 0;
  local_30[0] = 0;
  cVar1 = FUN_0046c390(param_1 + 0x4e0);
  if (cVar1 == '\0') {
    local_3c = 0xffffffff;
  }
  else {
    FUN_00467e90(local_30,param_1 + 0x4e0);
    dVar5 = (double)FUN_00410100(local_30[0],&local_1c);
    if (local_1c == 0) {
      local_3c = FUN_0040c770(dVar5 * (double)param_2);
    }
    else {
      FUN_00467e90(&local_38,param_1 + 0x4e0);
      uVar2 = FUN_00a54390(param_1);
      uVar3 = FUN_00a54390(param_1);
      uVar4 = FUN_00a543b0(param_1);
      local_3c = FUN_00a61c40(local_38,1,uVar2,uVar3,uVar4,0xffffffff);
    }
  }
  FUN_00414560(&local_38,2);
  return local_3c;
}

