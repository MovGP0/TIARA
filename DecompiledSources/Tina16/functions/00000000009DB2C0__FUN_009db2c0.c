/* Ghidra address: 009db2c0 */
/* Ghidra symbol: FUN_009db2c0 */


undefined4
FUN_009db2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_30 = 0;
  local_28 = 0;
  *param_4 = 0;
  uVar1 = FUN_009dab20(param_1);
  FUN_004168e0(&local_28,param_2);
  plVar2 = (longlong *)FUN_009535d0(&PTR_FUN_0090be88,1,uVar1,local_28);
  FUN_004168e0(&local_30,param_3);
  (**(code **)(*plVar2 + 0x2c8))(plVar2,local_30);
  lVar3 = FUN_009d4b10(&PTR_FUN_009cfc30,1,plVar2,param_1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0x68;
  }
  FUN_0041b840(param_4,lVar3);
  local_20 = 0;
  FUN_004145c0(&local_30,2);
  return local_20;
}

