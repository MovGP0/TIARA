/* Ghidra address: 0086a530 */
/* Ghidra symbol: FUN_0086a530 */


undefined4 FUN_0086a530(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong *local_40;
  undefined2 local_38 [4];
  undefined4 local_30;
  undefined8 local_20 [2];
  
  local_40 = (longlong *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_20[0] = 0;
  lVar2 = FUN_004d4fa0(&PTR_FUN_0047dd60,1,param_2,0);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x28;
  }
  FUN_0041b840(local_20,lVar2);
  FUN_008687d0(param_1,&local_40);
  FUN_00468a50(&local_58,local_20[0]);
  uVar1 = (**(code **)(*local_40 + 0x1d0))(local_40,&local_58,local_38);
  FUN_0041d630(uVar1);
  *param_3 = local_38[0];
  local_30 = 0;
  FUN_00460ba0(&local_58);
  FUN_0041b800(&local_40);
  FUN_0041b800(local_20);
  return local_30;
}

