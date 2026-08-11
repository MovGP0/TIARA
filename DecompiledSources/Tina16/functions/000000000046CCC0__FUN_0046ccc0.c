/* Ghidra address: 0046ccc0 */
/* Ghidra symbol: FUN_0046ccc0 */


void FUN_0046ccc0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined8 **local_50;
  uint local_44;
  undefined1 local_40 [14];
  short local_32;
  ushort *local_30;
  ushort local_22;
  undefined8 *local_20;
  undefined8 **local_18 [2];
  
  local_60 = auStack_88;
  cVar1 = FUN_0046c6f0(param_1,&local_22,&local_30);
  if (cVar1 == '\0') {
    FUN_004607e0(0x80070057);
  }
  cVar1 = FUN_0046c6f0(param_2,&local_32,local_40);
  if (cVar1 == '\0') {
    cVar1 = FUN_0046cb00(local_32);
    if (((cVar1 == '\0') && (local_32 != 0x100)) && (local_32 != 0x102)) {
      FUN_004607e0(0x80020005);
    }
  }
  if (*local_30 != param_3) {
    FUN_004607e0(0x8002000b);
  }
  local_44 = (uint)(local_22 & 0xfff);
  if (local_44 == 0xc) {
    if ((local_32 == 0x100) || (local_32 == 0x102)) {
      cVar1 = FUN_0046c300(local_32);
      if (cVar1 == '\0') goto LAB_0046cdc7;
    }
    uVar2 = thunk_FUN_041151fc(local_30,param_4,&local_50);
    FUN_004607e0(uVar2);
    FUN_00461840(local_50,param_2);
  }
  else {
LAB_0046cdc7:
    thunk_FUN_04125dff(&local_20);
    if (local_44 == 0xc) {
      FUN_00461ce0(&local_20,param_2);
      local_50 = &local_20;
    }
    else {
      FUN_004620f0(&local_20,param_2,local_44);
      if ((local_44 - 8 < 2) || (local_44 == 0xd)) {
        local_50 = local_18[0];
      }
      else {
        local_50 = local_18;
      }
    }
    uVar2 = thunk_FUN_03e78ac9(local_30,param_4,local_50);
    FUN_004607e0(uVar2);
    FUN_00460b80(&local_20);
  }
  return;
}

