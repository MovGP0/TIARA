/* Ghidra address: 004c5b80 */
/* Ghidra symbol: FUN_004c5b80 */


undefined1 FUN_004c5b80(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_21;
  undefined1 local_20 [8];
  
  local_70 = auStack_b8;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_50 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_00417580(local_20,&DAT_0052f3d0);
  local_21 = 0;
  FUN_0046f180(&local_88);
  FUN_00461840(param_2,&local_88);
  cVar1 = FUN_0058a4c0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
  if (cVar1 != '\0') {
    FUN_00545cd0(&local_90);
    FUN_00417c40(local_20,&local_90,&DAT_0052f3d0);
    local_58 = **(longlong **)(param_1 + 0xb0);
    local_30 = (longlong *)FUN_00545d00(local_20,*(undefined8 *)(local_58 + -0xa8));
    while (local_30 != (longlong *)0x0) {
      local_40 = (longlong *)FUN_004c5a70(param_1,&local_30);
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 8))(local_40,&local_50);
        local_48 = 0;
        while( true ) {
          local_60 = local_50;
          if (local_50 != 0) {
            local_60 = *(ulonglong *)(local_50 - 8);
          }
          if (local_60 <= local_48) break;
          local_38 = *(longlong *)(local_50 + local_48 * 8);
          cVar1 = FUN_004113d0(local_38,&DAT_00485790);
          if (cVar1 != '\0') {
            local_21 = 1;
            FUN_00461840(param_2,local_38 + 8);
            FUN_004c5df0(0,local_70);
            goto LAB_004c5d9c;
          }
          local_48 = local_48 + 1;
        }
        FUN_00419430(&local_50,&DAT_0052f588);
      }
      if (local_30 != (longlong *)0x0) {
        local_30 = (longlong *)(**(code **)(*local_30 + 0x38))(local_30);
      }
    }
    FUN_00545cf0(local_20);
  }
LAB_004c5d9c:
  FUN_00417740(&local_90,&DAT_0052f3d0);
  FUN_00460ba0(&local_88);
  FUN_00419430(&local_50,&DAT_0052f588);
  FUN_00417740(local_20,&DAT_0052f3d0);
  return local_21;
}

