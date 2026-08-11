/* Ghidra address: 00835220 */
/* Ghidra symbol: FUN_00835220 */


void FUN_00835220(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_14 [4];
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  cVar1 = FUN_008355d0(param_1);
  if (cVar1 == '\0') {
    FUN_0064de00(param_1,param_2);
  }
  else {
    FUN_00414b50(&local_10,param_2);
    if ((char)param_1[0x9d] == '\0') {
      FUN_00836980(param_1,&local_28,local_10,1);
      FUN_00414b50(&local_10,local_28);
    }
    else {
      FUN_00832980(&local_20,param_1[0x9b],local_10,(short)param_1[0x9c]);
      FUN_00414b50(&local_10,local_20);
    }
    if ((((*(byte *)((longlong)param_1 + 0x4e9) & 4) == 0) &&
        ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0)) &&
       ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0)) {
      cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1,local_10,local_14);
      if (cVar1 == '\0') {
        uVar2 = FUN_0044d710(&PTR_FUN_00833068,1,PTR_PTR_020018a0);
        FUN_004134c0(uVar2);
      }
    }
    FUN_00835030(param_1,local_10);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return;
}

