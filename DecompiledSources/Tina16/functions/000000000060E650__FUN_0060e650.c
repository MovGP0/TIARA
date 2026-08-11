/* Ghidra address: 0060e650 */
/* Ghidra symbol: FUN_0060e650 */


void FUN_0060e650(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined4 *local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined1 *local_80;
  ulonglong local_78;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined2 local_60;
  undefined2 local_5e;
  ulonglong local_40;
  int local_34;
  longlong *local_30 [4];
  
  local_80 = auStack_c8;
  local_30[0] = (longlong *)0x0;
  local_40 = 0;
  puVar1 = auStack_c8;
  if ((*(longlong *)(param_1 + 0x50) == 0) &&
     (puVar1 = auStack_c8, *(longlong *)(param_1 + 0x60) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))
              (*(longlong **)(param_1 + 0x60),param_1 + 0x48,param_1 + 0x4c);
    local_34 = *(int *)(param_1 + 0x48) * 4;
    FUN_00419260(&local_40,&DAT_0060e610,1,local_34 * *(int *)(param_1 + 0x4c));
    uVar2 = FUN_0041b800(local_30);
    WICConvertBitmapSource(PTR_DAT_020026f0,*(undefined8 *)(param_1 + 0x60),uVar2);
    local_78 = local_40;
    if (local_40 != 0) {
      local_78 = *(ulonglong *)(local_40 - 8);
    }
    local_a8 = local_40;
    (**(code **)(*local_30[0] + 0x38))(local_30[0],0,local_34,local_78 & 0xffffffff);
    FUN_0040d200(&local_6c,0x2c,0);
    local_6c = 0x2c;
    local_68 = *(undefined4 *)(param_1 + 0x48);
    local_64 = -*(int *)(param_1 + 0x4c);
    local_60 = 1;
    local_5e = 0x20;
    local_88 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    *(undefined8 *)(param_1 + 0x50) = local_88;
    FUN_0060bbf0(local_88,7);
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0xe0))
              (*(longlong **)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),
               *(undefined4 *)(param_1 + 0x4c));
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xe8))(*(longlong **)(param_1 + 0x50));
    local_a8 = local_40;
    local_a0 = &local_6c;
    local_98 = 0;
    thunk_FUN_040d2f89(0,uVar2,0,*(undefined4 *)(param_1 + 0x4c));
    FUN_0060a2b0(*(undefined8 *)(param_1 + 0x50),1);
    puVar1 = local_80;
  }
  local_80 = puVar1;
  FUN_00419430(&local_40,&DAT_0060e610);
  FUN_0041b800(local_30);
  return;
}

