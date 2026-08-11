/* Ghidra address: 005fd050 */
/* Ghidra symbol: FUN_005fd050 */


longlong * FUN_005fd050(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  uint *local_60;
  int local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_44;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_24;
  uint *local_20;
  
  local_70 = auStack_98;
  *param_1 = DAT_01decef8;
  param_1[1] = DAT_01decf00;
  param_1[2] = DAT_01decf08;
  if (param_2 != 0) {
    local_54 = thunk_FUN_03d2c01a(param_2,0,0);
    if (local_54 == 0x10) {
      iVar1 = thunk_FUN_03d2c01a(param_2,0x10,&local_30);
      if (iVar1 != 0) {
        *(undefined *)(param_1 + 2) = (&DAT_01decf10)[local_30];
        *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
        *(undefined4 *)(param_1 + 1) = local_24;
        *param_1 = param_2;
      }
    }
    else if (0x1b < local_54) {
      if (local_54 < 0x21) {
        iVar1 = thunk_FUN_03d2c01a(param_2,0x20,&local_50);
        if (iVar1 != 0) {
          *(undefined *)(param_1 + 2) = (&DAT_01decf10)[local_50 & 0xf];
          *(undefined4 *)((longlong)param_1 + 0xc) = local_4c;
          *(undefined4 *)(param_1 + 1) = local_44;
          *param_1 = param_2;
        }
      }
      else {
        local_20 = (uint *)FUN_004095c0((longlong)local_54);
        iVar1 = thunk_FUN_03d2c01a(param_2,local_54,local_20);
        if (iVar1 != 0) {
          local_60 = local_20;
          *(undefined *)(param_1 + 2) = (&DAT_01decf10)[*local_20 & 0xf];
          *(uint *)((longlong)param_1 + 0xc) = local_20[1];
          *(uint *)(param_1 + 1) = local_20[3];
          *param_1 = param_2;
        }
        FUN_004095f0(local_20);
      }
    }
  }
  return param_1;
}

