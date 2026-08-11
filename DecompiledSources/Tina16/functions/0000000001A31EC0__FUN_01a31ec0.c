/* Ghidra address: 01a31ec0 */
/* Ghidra symbol: FUN_01a31ec0 */


undefined8 FUN_01a31ec0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  char local_81;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_28 = 0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x288))(param_1,&local_30);
  cVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,param_2,local_20);
  if (cVar1 == '\x03') {
    local_78 = *local_20[0];
    FUN_00415430(local_40,local_20[0][1],0);
    local_81 = FUN_01a31de0(local_40[0]);
  }
  if (cVar1 == '\x06') {
    local_78 = *local_20[0];
    FUN_00415430(&local_48,local_20[0][1],0);
    local_81 = FUN_01a31de0(local_48);
  }
  if (local_81 == '\0') {
    local_70 = local_30;
    local_68 = 0x11;
    local_58 = 0;
    local_60 = param_2;
    FUN_00442f70(&local_50,L"Number expected at %s, attr_idx=%d",&local_70,1);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_50);
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_50);
  FUN_00414590(&local_48,2);
  FUN_00414560(&local_30,2);
  return local_78;
}

