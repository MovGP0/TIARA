/* Ghidra address: 00bae3c0 */
/* Ghidra symbol: FUN_00bae3c0 */


undefined8 FUN_00bae3c0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  undefined *local_48;
  undefined1 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_68 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,local_20);
  if (local_20[0] != 0) {
    (**(code **)(*param_3 + 0x58))(param_3,&local_28);
    if (local_28 != 0) {
      (**(code **)(*param_3 + 0x58))(param_3,&local_30);
      (**(code **)(*param_1 + 0x10))(param_1,&local_38);
      if (local_30 != local_38) {
        uVar2 = FUN_00bad230(&PTR_FUN_00b9ee48,1,4,0x5a,&local_38,0xffffffff);
        FUN_004134c0(uVar2);
      }
    }
  }
  cVar1 = FUN_00baed60(param_1);
  if (cVar1 == '\x01') {
    cVar1 = (**(code **)(*param_3 + 0x48))(param_3);
    if (cVar1 == '\x02') {
      uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
      local_48 = (&PTR_u_An_attempt_is_made_to_add_an_att_01e96910)[uVar3 & 0xff];
      local_40 = 0x11;
      uVar2 = FUN_00bad230(&PTR_FUN_00b9ee48,1,3,0x59,&local_48,0);
      FUN_004134c0(uVar2);
    }
  }
  (**(code **)(*param_3 + 0x60))(param_3,&local_50);
  if (local_50 != 0) {
    (**(code **)(*param_3 + 0x60))(param_3,&local_60);
    (**(code **)(*local_60 + 0x20))(local_60,&local_58);
    (**(code **)(*local_58 + 0x48))(local_58,param_3);
  }
  FUN_00baec70(param_1,&local_68);
  (**(code **)(*local_68 + 0x60))(local_68,param_2,param_3);
  if (param_1 == (longlong *)0x0) {
    param_1 = (longlong *)0x0;
  }
  else {
    param_1 = param_1 + 10;
  }
  (**(code **)(*param_3 + 0x78))(param_3,param_1);
  FUN_0041b800(&local_68);
  FUN_0041b800(&local_60);
  FUN_0041b800(&local_58);
  FUN_0041b800(&local_50);
  FUN_00417840(&local_38,&DAT_00b9fc60,4);
  return param_2;
}

