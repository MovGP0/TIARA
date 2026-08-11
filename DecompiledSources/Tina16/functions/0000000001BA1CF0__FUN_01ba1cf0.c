/* Ghidra address: 01ba1cf0 */
/* Ghidra symbol: FUN_01ba1cf0 */


void FUN_01ba1cf0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_01ba13c0(local_res10[0],&local_30);
  FUN_01ba15c0(param_1,&local_48,local_30,local_2c,1);
  lVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
  FUN_005fd4e0(*(undefined8 *)(lVar1 + 0x78),param_3);
  lVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
  FUN_005fd6d0(*(undefined8 *)(lVar1 + 0x78),2);
  plVar2 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar2 + 200))(plVar2,local_48,local_44);
  plVar2 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar2 + 0xc0))(plVar2,local_40,local_44);
  plVar2 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar2 + 0xc0))(plVar2,local_40,local_3c);
  plVar2 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar2 + 0xc0))(plVar2,local_48,local_3c);
  plVar2 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar2 + 0xc0))(plVar2,local_48,local_44);
  FUN_00414480(local_res10);
  return;
}

