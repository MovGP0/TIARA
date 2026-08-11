/* Ghidra address: 00869b30 */
/* Ghidra symbol: FUN_00869b30 */


undefined4 FUN_00869b30(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined4 local_10;
  
  local_40 = 0;
  local_48 = (longlong *)0x0;
  local_50 = 0;
  local_58 = (longlong *)0x0;
  local_30 = 0;
  local_38 = (longlong *)0x0;
  local_18 = (longlong *)0x0;
  local_20 = 0;
  local_28 = 0;
  if (param_2 == 0) {
    FUN_008687d0(param_1,&local_38);
    uVar2 = FUN_0041b800(&local_30);
    uVar1 = (**(code **)(*local_38 + 0x168))(local_38,uVar2);
    FUN_0041d630(uVar1);
    if (local_30 != 0) {
      FUN_008687d0(param_1,&local_48);
      FUN_008687d0(param_1,&local_58);
      uVar2 = FUN_0041b800(&local_50);
      uVar1 = (**(code **)(*local_58 + 0x168))(local_58,uVar2);
      FUN_0041d630(uVar1);
      uVar2 = FUN_0041b800(&local_40);
      uVar1 = (**(code **)(*local_48 + 0xa0))(local_48,local_50,uVar2);
      FUN_0041d630(uVar1);
    }
  }
  else {
    FUN_008687d0(param_1,&local_18);
    FUN_00863030(&local_20,param_2);
    FUN_0041b890(&local_28,local_20,&DAT_00869d40);
    uVar1 = (**(code **)(*local_18 + 0x170))(local_18,local_28);
    FUN_0041d630(uVar1);
  }
  local_10 = 0;
  FUN_0041b800(&local_58);
  FUN_0041b800(&local_50);
  FUN_0041b800(&local_48);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  FUN_00417840(&local_30,&DAT_0069ab90,2);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_18);
  return local_10;
}

