/* Ghidra address: 00a9c0c0 */
/* Ghidra symbol: FUN_00a9c0c0 */


int FUN_00a9c0c0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int *param_7,int *param_8)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  int *local_48;
  int *local_40;
  undefined1 *local_30;
  int local_28;
  int local_24;
  int local_20 [4];
  int local_10;
  int local_c;
  
  local_30 = auStack_98;
  *(int *)(param_1 + 0x30) = *param_8;
  local_24 = 0;
  *param_7 = 0;
  local_10 = *(int *)(param_1 + 0x10);
  local_c = 0;
  if (0 < local_10) {
    do {
      local_20[0] = 0;
      plVar2 = (longlong *)FUN_00ac3910(param_1,local_c);
      local_78 = 0;
      local_70 = 0;
      local_60 = param_5;
      local_58 = param_6;
      local_50 = *(undefined8 *)(param_1 + 0x38);
      local_48 = local_20;
      local_40 = param_8;
      local_68 = param_4;
      iVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,param_2,0,param_3 + local_24);
      local_24 = local_24 + iVar1;
      if (local_20[0] < *param_7) {
        local_28 = *param_7;
      }
      else {
        local_28 = local_20[0];
      }
      *param_7 = local_28;
      local_c = local_c + 1;
    } while (local_c < local_10);
  }
  *(int *)(param_1 + 0x34) = *param_8 - *(int *)(param_1 + 0x30);
  return local_24;
}

