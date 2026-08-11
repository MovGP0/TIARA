/* Ghidra address: 00a3b4e0 */
/* Ghidra symbol: FUN_00a3b4e0 */


void FUN_00a3b4e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_40 [16];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  (**(code **)(*local_20 + 0x88))(local_20,uVar1);
  uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*local_20 + 0x70))(local_20,uVar1);
  uVar2 = FUN_00609e10(local_20);
  uVar1 = (**(code **)(*local_20 + 0x60))(local_20);
  local_58 = (**(code **)(*local_20 + 0x48))(local_20);
  FUN_00498350(local_40,0,0,uVar1);
  (**(code **)(*param_1 + 0x28))(param_1,uVar2,local_40);
  (**(code **)(*local_20 + 0xd8))(local_20,param_2,param_3,param_4);
  FUN_00410f20(local_20);
  return;
}

