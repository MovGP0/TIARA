/* Ghidra address: 005b98c0 */
/* Ghidra symbol: FUN_005b98c0 */


undefined8 FUN_005b98c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  cVar1 = FUN_005b9f70(param_1,param_2,&local_10);
  if (cVar1 == '\x01') {
    FUN_0041ddd0(local_20,PTR_PTR_020035e8);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  else if (cVar1 == '\x02') {
    FUN_0041ddd0(&local_28,PTR_PTR_02001750);
    uVar2 = FUN_0044d490(&PTR_FUN_00435700,1,local_28);
    FUN_004134c0(uVar2);
  }
  else if (cVar1 == '\x03') {
    FUN_0041ddd0(&local_30,PTR_PTR_02004a10);
    uVar2 = FUN_0044d490(&PTR_FUN_00435700,1,local_30);
    FUN_004134c0(uVar2);
  }
  FUN_00414560(&local_30,3);
  return local_10;
}

