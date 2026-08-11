/* Ghidra address: 0174be00 */
/* Ghidra symbol: FUN_0174be00 */


void FUN_0174be00(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_b0 [16];
  undefined1 *local_a0;
  longlong *local_88;
  undefined4 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [3];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  local_a0 = auStack_f8;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 != (longlong *)0x0) {
    cVar2 = FUN_0175ad40(param_1,param_2);
    if ((cVar2 != '\0') &&
       (plVar1 = *(longlong **)(param_1 + 0x28), *(char *)((longlong)plVar1 + 0xb) == '\0')) {
      uVar3 = (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar3);
      local_48 = 0;
      local_4c = 0;
      local_50 = 0xfe;
      local_54 = 0x7e;
      local_78 = (**(code **)(*param_2 + 0xd0))(param_2,0);
      local_d8 = &local_20;
      local_d0._0_1_ = 1;
      local_c8 = 1;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_48,local_4c,local_1c);
      local_d8 = &local_28;
      local_d0 = CONCAT31(local_d0._1_3_,1);
      local_c8 = 1;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_50,local_54,&local_24);
      local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,local_28);
      local_d0 = local_78;
      (**(code **)(*param_2 + 0x60))(param_2,local_1c[0],local_20,local_24);
      if (*(longlong *)(param_1 + 0x38) != 0) {
        local_d8 = &local_64;
        FUN_01a98380(param_2,local_1c[0],local_20,local_60);
        local_d8 = &local_6c;
        FUN_01a98380(param_2,local_24,local_28,&local_68);
        local_88 = (longlong *)FUN_01a97e00(param_2);
        local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,local_6c);
        FUN_00498350(local_b0,local_60[0],local_64,local_68);
        (**(code **)(*local_88 + 0x110))(local_88,local_b0,*(undefined8 *)(param_1 + 0x38));
        FUN_01a97ea0(param_2,local_88);
      }
    }
  }
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

