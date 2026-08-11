/* Ghidra address: 00d7aab0 */
/* Ghidra symbol: FUN_00d7aab0 */


void FUN_00d7aab0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 *local_50;
  undefined4 local_44;
  undefined4 local_40;
  char local_31;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_9;
  
  local_50 = auStack_a8;
  if ((0 < *(int *)(param_1 + 0x84)) && (0 < *(int *)(param_1 + 0x88))) {
    if (*(char *)(param_1 + 0x140) == '\t') {
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        local_50 = auStack_a8;
        cVar1 = FUN_004113d0(*(longlong *)(param_1 + 0xa0),&PTR_FUN_007f0370);
        if (cVar1 != '\0') {
          FUN_00d77cb0(param_1,&local_44);
          local_31 = '\0';
          lVar2 = FUN_0060ce20(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x4f0));
          if (lVar2 == 0) {
            lVar2 = FUN_0060ce20(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x140));
            if (lVar2 == 0) {
              local_20 = thunk_FUN_03ccce41(0,0x7f00);
              local_31 = '\x01';
            }
            else {
              local_20 = FUN_0060ce20(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x140));
            }
          }
          else {
            local_20 = FUN_0060ce20(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x4f0));
          }
          local_2c = thunk_FUN_0410f747(0x31);
          if (local_2c == 0) {
            local_2c = thunk_FUN_0410f747(0x1e);
          }
          local_30 = thunk_FUN_0410f747(0x32);
          if (local_30 == 0) {
            local_30 = thunk_FUN_0410f747(0x1f);
          }
          local_88 = 0x4000;
          local_28 = thunk_FUN_04148cfb(local_20,1,local_2c,local_30);
          uVar3 = FUN_005ffa40(param_2);
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          local_70 = 0;
          local_68 = 3;
          thunk_FUN_041a8a5c(uVar3,local_44,local_40,local_28);
          thunk_FUN_041dba40(local_28);
          if (local_31 != '\0') {
            thunk_FUN_041dba40(local_20);
          }
        }
      }
    }
    else if (*(char *)(param_1 + 0x98) == '\0') {
      local_50 = auStack_a8;
      FUN_00d7afe0(param_1,8);
      FUN_00d7a390(param_1,param_2,param_3);
      FUN_00d7afe0(param_1,0);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x158);
      if (cVar1 == '\0') {
        FUN_00d7a390(param_1,param_2,param_3);
      }
      else if (cVar1 == '\x01') {
        local_18 = *(undefined8 *)(param_1 + 0x120);
        local_50 = auStack_a8;
        cVar1 = FUN_00d5a0b0(*(undefined8 *)(param_1 + 0x150));
        if (cVar1 != '\0') {
          *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x150);
        }
        local_9 = *(undefined1 *)(param_1 + 0x98);
        FUN_00d77f50(param_1,0);
        FUN_00d7afe0(param_1,5);
        FUN_00d7a390(param_1,param_2,param_3);
        FUN_00d77f50(param_1,local_9);
        FUN_00d7afe0(param_1,0);
        *(undefined8 *)(param_1 + 0x120) = local_18;
      }
      else if (cVar1 == '\x02') {
        local_18 = *(undefined8 *)(param_1 + 0x120);
        local_50 = auStack_a8;
        cVar1 = FUN_00d5a0b0(*(undefined8 *)(param_1 + 0x148));
        if (cVar1 != '\0') {
          *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x148);
        }
        local_9 = *(undefined1 *)(param_1 + 0x98);
        FUN_00d77f50(param_1,0);
        FUN_00d7afe0(param_1,6);
        FUN_00d7a390(param_1,param_2,param_3);
        FUN_00d7afe0(param_1,0);
        FUN_00d77f50(param_1,local_9);
        *(undefined8 *)(param_1 + 0x120) = local_18;
      }
    }
  }
  return;
}

