/* Ghidra address: 00d30cf0 */
/* Ghidra symbol: FUN_00d30cf0 */


undefined8 * FUN_00d30cf0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [40];
  
  local_50 = 0;
  local_58 = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_004144d0(param_1);
  puVar2 = (undefined8 *)FUN_004ba7d0(&PTR_FUN_0047d288,1,local_res10[0]);
  plVar3 = (longlong *)FUN_004d22d0(&PTR_FUN_00c88318,1,0);
  (**(code **)(*plVar3 + 0xa8))(plVar3);
  uVar1 = (**(code **)*puVar2)(puVar2);
  FUN_00b6bd50(plVar3,puVar2,uVar1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,local_48);
  FUN_00410f20(plVar3);
  FUN_00410f20(puVar2);
  iVar5 = 0x10;
  puVar4 = local_48;
  do {
    FUN_00416880(&local_50,*param_1);
    FUN_0043fba0(&local_58,*puVar4,2);
    FUN_00416ad0(&local_50,local_58);
    FUN_00415dd0(param_1,local_50,0);
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00414560(&local_58,2);
  FUN_004144d0(local_res10);
  return param_1;
}

