/* Ghidra address: 00d94360 */
/* Ghidra symbol: FUN_00d94360 */


ulonglong FUN_00d94360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  lVar2 = FUN_006485b0(param_2);
  if (lVar2 == 0) {
    if (param_6 == (undefined8 *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = *param_6;
    }
    uVar3 = thunk_FUN_03de17fb(param_2);
    thunk_FUN_0415f9d2(param_2,&local_30);
    thunk_FUN_0417e313(uVar3,&local_30);
    thunk_FUN_03b7e726(param_3,&local_38);
    iVar1 = local_38 - (int)local_30;
    local_34 = local_34 - local_30._4_4_;
    local_30 = CONCAT44(local_34,iVar1);
    thunk_FUN_0411ff81(param_3,iVar1,local_34,0);
    thunk_FUN_041b2403(uVar3,0x14,param_3,0);
    thunk_FUN_0411ff81(param_3,local_38,local_38,0);
  }
  else {
    FUN_00d7cef0(lVar2,param_3);
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1) & 0xffffffff;
}

