/* Ghidra address: 018571c0 */
/* Ghidra symbol: FUN_018571c0 */


longlong * FUN_018571c0(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_40 [16];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_20 = (longlong *)0x0;
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060bbf0(local_20,param_3);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*local_20 + 0x88))(local_20,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*local_20 + 0x70))(local_20,uVar1);
  uVar2 = FUN_00609e10(local_20);
  FUN_005fdf10(uVar2);
  plVar3 = (longlong *)FUN_00609e10(local_20);
  uVar1 = (**(code **)(*local_20 + 0x60))(local_20);
  local_58 = (**(code **)(*local_20 + 0x48))(local_20);
  FUN_00498350(local_40,0,0,uVar1);
  (**(code **)(*plVar3 + 0x110))(plVar3,local_40,param_2);
  uVar2 = FUN_00609e10(local_20);
  FUN_005fe090(uVar2);
  return local_20;
}

