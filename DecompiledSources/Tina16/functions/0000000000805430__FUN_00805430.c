/* Ghidra address: 00805430 */
/* Ghidra symbol: FUN_00805430 */


longlong * FUN_00805430(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_30;
  undefined4 local_24;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  uVar1 = FUN_0064d0b0(param_1);
  (**(code **)(*local_20 + 0x88))(local_20,uVar1);
  uVar1 = FUN_0064d120(param_1);
  (**(code **)(*local_20 + 0x70))(local_20,uVar1);
  uVar2 = FUN_00609e10(local_20);
  FUN_005ff8c0(uVar2,param_1[0x66]);
  plVar3 = (longlong *)FUN_00609e10(local_20);
  (**(code **)(*param_1 + 0xe0))(param_1,local_50);
  (**(code **)(*plVar3 + 0xa8))(plVar3,local_50);
  uVar2 = FUN_00609e10(local_20);
  FUN_005fdf10(uVar2);
  local_30 = FUN_0065b870(param_1);
  uVar4 = thunk_FUN_04118143(local_30,0xfffffff0);
  if ((uVar4 & 0x800000) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = 0xffffffff;
  }
  uVar2 = FUN_00609e10(local_20);
  uVar2 = FUN_005ffa40(uVar2);
  FUN_006579d0(param_1,uVar2,local_24,local_24);
  uVar2 = FUN_00609e10(local_20);
  FUN_005fe090(uVar2);
  return local_20;
}

