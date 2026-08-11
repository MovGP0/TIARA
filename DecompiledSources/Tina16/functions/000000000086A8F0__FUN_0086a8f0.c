/* Ghidra address: 0086a8f0 */
/* Ghidra symbol: FUN_0086a8f0 */


undefined4 FUN_0086a8f0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_30;
  longlong local_28;
  longlong lStack_20;
  
  local_60 = (longlong *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_38 = (longlong *)0x0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_28 = *param_3;
  lStack_20 = param_3[1];
  if (local_28 == 0) {
    FUN_008687d0(param_1,&local_60);
    FUN_004685b0(&local_78,1,1);
    uVar1 = (**(code **)(*local_60 + 0x248))(local_60,&local_78);
    FUN_0041d630(uVar1);
  }
  else {
    FUN_008687d0(param_1,&local_38);
    lVar2 = FUN_008685f0(&PTR_FUN_00861ff8,1,param_1,&local_28,param_2);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + 0x10;
    }
    FUN_0041b890(&local_40,lVar2,&LAB_0086aab4);
    FUN_00468a90(&local_58,local_40);
    uVar1 = (**(code **)(*local_38 + 0x248))(local_38,&local_58);
    FUN_0041d630(uVar1);
  }
  local_30 = 0;
  FUN_00460ba0(&local_78);
  FUN_0041b800(&local_60);
  FUN_00460ba0(&local_58);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  return local_30;
}

