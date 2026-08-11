/* Ghidra address: 01a8dd40 */
/* Ghidra symbol: FUN_01a8dd40 */


void FUN_01a8dd40(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_R13;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_6;
  uStack_30 = param_6[1];
  FUN_00498350(local_48,0,0,0,0);
  cVar1 = FUN_01a8e470(&local_38,local_48);
  if (cVar1 == '\0') {
    unaff_R13 = thunk_FUN_0411fefb(&local_38);
    uVar2 = FUN_005ffa40(param_1);
    thunk_FUN_039bba01(uVar2,unaff_R13);
  }
  FUN_005fd4e0(param_1[0xf],0);
  FUN_005fd6d0(param_1[0xf],1);
  FUN_005fd640(param_1[0xf],0xf);
  FUN_005fdcb0(param_1[0x10],1);
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,param_4,param_5);
  FUN_00498350(local_48,0,0,0,0);
  cVar1 = FUN_01a8e470(&local_38,local_48);
  if (cVar1 == '\0') {
    uVar2 = FUN_005ffa40(param_1);
    thunk_FUN_039bba01(uVar2,0);
    thunk_FUN_0416f828(unaff_R13);
  }
  return;
}

