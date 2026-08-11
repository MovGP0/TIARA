/* Ghidra address: 00865f60 */
/* Ghidra symbol: FUN_00865f60 */


undefined4
FUN_00865f60(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = (longlong *)0x0;
  *param_4 = 0;
  FUN_008659d0(param_1,&local_20);
  uVar2 = FUN_00414520(&local_18);
  uVar1 = (**(code **)(*local_20 + 0x170))(local_20,param_2,param_3,uVar2);
  FUN_0041d630(uVar1);
  FUN_004168b0(param_4,local_18);
  local_10 = 0;
  FUN_0041b800(&local_20);
  FUN_00414520(&local_18);
  return local_10;
}

