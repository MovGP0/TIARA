/* Ghidra address: 00ad3160 */
/* Ghidra symbol: FUN_00ad3160 */


undefined1 FUN_00ad3160(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c;
  longlong local_28;
  int local_1c;
  int local_18;
  ushort local_14;
  undefined1 local_11;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_10 = 0;
  *param_2 = 0;
  FUN_00414480(param_2);
  do {
    uVar1 = *(ushort *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30) + 0x20);
    uVar2 = (ulonglong)uVar1;
    if (uVar2 < 0x30) {
      if ((uVar2 != 0x24) && (uVar2 != 0x2d)) {
code_r0x00ad3275:
        local_2c = 0;
        if (*param_2 != 0) {
          local_2c = *(int *)(*param_2 + -4);
        }
        local_11 = 0 < local_2c;
        if ((bool)local_11) {
          FUN_00414480(&local_10);
          FUN_0043e5a0(&local_10,*param_2);
          FUN_00414ad0(param_2,local_10);
          FUN_00414480(&local_10);
        }
        FUN_00414480(&local_10);
        return local_11;
      }
    }
    else if (((10 < uVar2 - 0x30) && (0x19 < uVar2 - 0x41)) && (0x19 < uVar2 - 0x61))
    goto code_r0x00ad3275;
    local_18 = 0;
    if (*param_2 != 0) {
      local_18 = *(int *)(*param_2 + -4);
    }
    local_14 = uVar1;
    FUN_004169f0(param_2,local_18 + 1);
    local_28 = FUN_00414de0(param_2);
    local_1c = 0;
    if (*param_2 != 0) {
      local_1c = *(int *)(*param_2 + -4);
    }
    *(ushort *)(local_28 + -2 + (longlong)local_1c * 2) = local_14;
    FUN_00ad1170(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30));
  } while( true );
}

