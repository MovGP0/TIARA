/* Ghidra address: 00c78bb0 */
/* Ghidra symbol: FUN_00c78bb0 */


void FUN_00c78bb0(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 *local_50;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = auStack_98;
  lVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if (lVar1 != 0) {
    local_18 = thunk_FUN_03a99535(param_1[0x53],0x460);
    local_20 = thunk_FUN_03a99535(param_1[0x53],0x461);
    thunk_FUN_03f32902(local_18,5);
    thunk_FUN_03f32902(local_20,5);
    if (param_2 == '\0') {
      local_78 = 0;
      local_70 = 0;
      local_68 = 0x83;
      thunk_FUN_041cc6e2(local_18,1,0,0);
      local_78 = 0;
      local_70 = 0;
      local_68 = 0x83;
      thunk_FUN_041cc6e2(local_20,1,0,0);
      thunk_FUN_04154efc(local_18,0);
      thunk_FUN_04154efc(local_20,0);
    }
    else {
      if (*(longlong *)(param_1[0x42] + 0x60) != 0) {
        FUN_00805990(*(longlong *)(param_1[0x42] + 0x60));
      }
      local_10 = FUN_00442b60(0x80);
      thunk_FUN_03b3efbf(local_18,local_10,0x7f);
      FUN_00442c30(local_10);
      thunk_FUN_04154efc(local_18,0xffffffff);
      thunk_FUN_04154efc(local_20,0xffffffff);
    }
  }
  return;
}

