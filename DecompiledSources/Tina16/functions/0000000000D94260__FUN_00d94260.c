/* Ghidra address: 00d94260 */
/* Ghidra symbol: FUN_00d94260 */


ulonglong FUN_00d94260(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined4 *param_4,
                      undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  
  uVar2 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  local_34 = *param_3;
  local_2c = (undefined4)param_3[1];
  lVar1 = *(longlong *)(param_1 + 0x18 + (local_34 & 0xff) * 8);
  if (lVar1 == 0) {
    iVar3 = thunk_FUN_0400423a(param_5,&local_38,&local_3c);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = thunk_FUN_041d081f(param_5,param_6,0);
      iVar3 = thunk_FUN_041a8a5c(param_2,*param_4,param_4[1],uVar4,local_38,CONCAT44(uVar6,local_3c)
                                 ,(ulonglong)uVar2 << 0x20,0,3);
      uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),iVar3 != 0);
      thunk_FUN_041dba40(uVar4);
    }
  }
  else {
    local_34._4_4_ = (undefined4)(local_34 >> 0x20);
    uVar6 = local_34._4_4_;
    uVar2 = (**(code **)(lVar1 + 0x10))
                      (lVar1,param_1,param_2,uVar6,local_2c,param_4,param_5,param_6,0);
    uVar5 = (ulonglong)uVar2;
  }
  return uVar5 & 0xffffffff;
}

