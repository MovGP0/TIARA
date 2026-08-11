/* Ghidra address: 010b7070 */
/* Ghidra symbol: FUN_010b7070 */


void FUN_010b7070(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined2 *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_50 = auStack_78;
  local_38 = FUN_00605cc0(&PTR_FUN_005f86c8,1);
  local_28 = (longlong *)FUN_00c32af0(&PTR_FUN_00c17678,1);
  local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_01d30f00(param_1,&local_3c,4);
  FUN_01d32710(param_1,local_20,local_3c);
  FUN_004b6dc0(local_20,0);
  (**(code **)(*local_28 + 0xc0))(local_28,local_20);
  (**(code **)(*local_30 + 0x10))(local_30,local_28);
  FUN_010b6d50(local_30,local_38,0,0);
  *param_6 = 8;
  uVar1 = FUN_006061d0(local_38);
  *param_4 = uVar1;
  uVar1 = FUN_006061a0(local_38);
  *param_5 = uVar1;
  uVar2 = FUN_006060c0(local_38);
  uVar2 = thunk_FUN_04130c1a(uVar2,0);
  *param_3 = uVar2;
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  return;
}

