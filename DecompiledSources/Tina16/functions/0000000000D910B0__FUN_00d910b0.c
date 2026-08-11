/* Ghidra address: 00d910b0 */
/* Ghidra symbol: FUN_00d910b0 */


ulonglong FUN_00d910b0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 *param_4,
                      undefined1 param_5,undefined4 param_6,longlong param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 local_2c;
  
  local_34 = *param_3;
  local_2c = (undefined4)param_3[1];
  puVar1 = *(undefined8 **)(param_1 + 0x18 + (local_34 & 0xff) * 8);
  if (puVar1 == (undefined8 *)0x0) {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    local_44 = *param_4;
    uStack_3c = param_4[1];
    if (param_7 == 0) {
      FUN_00777d60(param_2,&local_44,param_5,param_6);
    }
    else {
      FUN_00777d60(param_2,param_7,param_5,param_6);
    }
  }
  else {
    local_34._4_4_ = (undefined4)(local_34 >> 0x20);
    uVar2 = local_34._4_4_;
    uVar3 = (*(code *)*puVar1)(puVar1,param_1,param_2,uVar2,local_2c,param_4,param_5,param_6,param_7
                               ,0);
    uVar4 = (ulonglong)uVar3;
  }
  return uVar4 & 0xffffffff;
}

