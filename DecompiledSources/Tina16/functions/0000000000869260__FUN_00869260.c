/* Ghidra address: 00869260 */
/* Ghidra symbol: FUN_00869260 */


undefined4
FUN_00869260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = (longlong *)0x0;
  local_28 = 0;
  local_30 = 0;
  *param_4 = 0;
  FUN_008687d0(param_1,&local_20);
  FUN_004168e0(&local_28,param_2);
  FUN_004168e0(&local_30,param_3);
  uVar2 = FUN_0041b800(&local_18);
  uVar1 = (**(code **)(*local_20 + 0x1a0))(local_20,local_28,local_30,uVar2);
  FUN_0041d630(uVar1);
  lVar3 = FUN_00863630(&DAT_00861a80,1,local_18);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0x50;
  }
  FUN_0041b840(param_4,lVar3);
  local_10 = 0;
  FUN_004145c0(&local_30,2);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_18);
  return local_10;
}

