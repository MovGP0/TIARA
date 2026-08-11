/* Ghidra address: 01641f00 */
/* Ghidra symbol: FUN_01641f00 */


undefined1 FUN_01641f00(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_21 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x38);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,param_2);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_3c = 1;
  local_40 = (**(code **)(*local_20 + 0x28))(local_20);
  local_40 = local_40 + -1;
  do {
    if (local_40 + 1 <= local_3c) {
      FUN_00410f20(local_20);
LAB_01642028:
      FUN_00414560(&local_60,2);
      FUN_00414480(&local_30);
      return local_21;
    }
    (**(code **)(*local_20 + 0x18))(local_20,&local_58,local_3c);
    local_34 = FUN_0043fc00(local_58);
    (**(code **)(*local_20 + 0x18))(local_20,&local_60,local_3c + 1);
    local_38 = FUN_0043fc00(local_60);
    if ((local_34 == param_3) && (local_38 == param_4)) {
      local_21 = 1;
      FUN_01642050(0,local_50);
      goto LAB_01642028;
    }
    local_3c = local_3c + 2;
  } while( true );
}

