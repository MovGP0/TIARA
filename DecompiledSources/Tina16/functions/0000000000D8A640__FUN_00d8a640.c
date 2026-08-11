/* Ghidra address: 00d8a640 */
/* Ghidra symbol: FUN_00d8a640 */


void FUN_00d8a640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 local_88 [24];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined8 uStack_48;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  uStack_2c = *(undefined4 *)(param_4 + 2);
  local_60 = *param_5;
  uStack_58 = param_5[1];
  local_50 = (longlong *)param_5[2];
  uStack_48 = param_5[3];
  puVar3 = &local_60;
  FUN_00d82380(param_1,param_2,param_3,&local_3c,puVar3,param_6);
  uVar4 = (undefined4)((ulonglong)puVar3 >> 0x20);
  if ((uStack_48._1_1_ == '\x04') && (local_50 != (longlong *)0x0)) {
    uVar1 = (**(code **)(*local_50 + 0x60))(local_50);
    uVar2 = (**(code **)(*local_50 + 0x48))(local_50);
    FUN_00423010(local_70,0,0,uVar1,CONCAT44(uVar4,uVar2));
    FUN_00d57690(local_88,local_70,&local_60);
    FUN_00d58940(local_50,param_3,local_70);
  }
  return;
}

