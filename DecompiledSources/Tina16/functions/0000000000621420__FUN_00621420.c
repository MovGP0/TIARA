/* Ghidra address: 00621420 */
/* Ghidra symbol: FUN_00621420 */


longlong FUN_00621420(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_68;
  local_38 = 0;
  FUN_00452200(*(undefined8 *)(param_1 + 0x10));
  local_10 = *(longlong *)(param_1 + 8);
  do {
    if (local_10 == 0) {
      FUN_00410ae0(param_2,&local_38);
      local_30 = local_38;
      local_28 = 0x11;
      local_48 = 0;
      uVar1 = FUN_0044d8d0(&PTR_FUN_00620870,1,PTR_PTR_02001530,&local_30);
      FUN_004134c0(uVar1);
      FUN_00452290(*(undefined8 *)(param_1 + 0x10));
LAB_006214e0:
      FUN_00414480(&local_38);
      return local_10;
    }
    if (*(longlong *)(local_10 + 0x18) == param_2) {
      FUN_00621500(0,local_20);
      goto LAB_006214e0;
    }
    local_10 = *(longlong *)(local_10 + 8);
  } while( true );
}

