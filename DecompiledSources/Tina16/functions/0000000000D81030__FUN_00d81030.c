/* Ghidra address: 00d81030 */
/* Ghidra symbol: FUN_00d81030 */


void FUN_00d81030(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_60 [2];
  byte local_50;
  undefined8 local_38;
  
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puVar3 = local_60;
  for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004179d0(local_60,&DAT_00d627e8);
  if ((local_50 & 1) == 0) {
    uVar1 = FUN_00d7efc0(param_1[2],1);
    FUN_005ff880(param_3,uVar1);
  }
  else {
    uVar1 = FUN_00d7efc0(param_1[2],0);
    FUN_005ff880(param_3,uVar1);
  }
  FUN_00d83080(&local_88,param_5,local_38,0x25);
  (**(code **)(*param_1 + 0x78))(param_1,param_3,&local_88,param_8);
  FUN_00417740(&local_88,&DAT_00d623c8);
  FUN_00417740(local_60,&DAT_00d627e8);
  return;
}

