/* Ghidra address: 0184b400 */
/* Ghidra symbol: FUN_0184b400 */


undefined8 FUN_0184b400(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  plVar2 = (longlong *)FUN_01847630(param_1,0);
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_30);
  FUN_0046f180(&local_48);
  cVar1 = FUN_0046f320(&local_30,&local_48);
  if (cVar1 == '\0') {
    plVar2 = (longlong *)FUN_01847630(param_1,0);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  }
  else {
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x90) + -0x30))(*(longlong *)(param_1 + 0x90));
    FUN_00468700(param_2,uVar3);
  }
  plVar2 = (longlong *)FUN_01847630(param_1,0);
  FUN_0046f180(&local_60);
  (**(code **)(*plVar2 + 8))(plVar2,&local_60);
  FUN_00417840(&local_60,&DAT_004013d8,3);
  return param_2;
}

