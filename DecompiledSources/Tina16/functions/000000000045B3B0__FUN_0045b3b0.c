/* Ghidra address: 0045b3b0 */
/* Ghidra symbol: FUN_0045b3b0 */


undefined8 FUN_0045b3b0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  local_18 = (undefined1 *)0x0;
  local_20 = (undefined1 *)0x0;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (iVar1 == 0x4b0) {
    FUN_00419430(&local_10,&DAT_00406578);
    FUN_00419260(&local_10,&DAT_00406578,1,2);
    *local_10 = 0xff;
    local_10[1] = 0xfe;
    FUN_004194b0(param_2,local_10,&DAT_00406578);
  }
  else if (iVar1 == 0x4b1) {
    FUN_00419430(&local_18,&DAT_00406578);
    FUN_00419260(&local_18,&DAT_00406578,1,2);
    *local_18 = 0xfe;
    local_18[1] = 0xff;
    FUN_004194b0(param_2,local_18,&DAT_00406578);
  }
  else if (iVar1 == 0xfde9) {
    FUN_00419430(&local_20,&DAT_00406578);
    FUN_00419260(&local_20,&DAT_00406578,1,3);
    *local_20 = 0xef;
    local_20[1] = 0xbb;
    local_20[2] = 0xbf;
    FUN_004194b0(param_2,local_20,&DAT_00406578);
  }
  else {
    FUN_00419430(param_2,&DAT_00406578);
  }
  FUN_00417840(&local_20,&DAT_00406578,3);
  return param_2;
}

