/* Ghidra address: 015dd390 */
/* Ghidra symbol: FUN_015dd390 */


void FUN_015dd390(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4,
                 undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 double param_9)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  double local_50;
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  undefined4 local_c;
  
  local_40 = auStack_78;
  FUN_015ca1c0(param_1);
  FUN_015ca240(param_1);
  *(undefined1 *)(param_1 + 0x101) = 0;
  FUN_015dce90(param_1);
  local_58 = param_8;
  local_50 = param_9;
  iVar1 = FUN_015d86a0(param_1,param_2,0,0);
  local_18 = (ulonglong)iVar1;
  if (-1 < (longlong)local_18) {
    local_38 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),iVar1);
    *(undefined4 *)(local_38 + 0x26) = param_8;
    if (param_9 == 0.0) {
      param_9 = (double)FUN_00448ed0();
    }
    if (param_9 != 0.0) {
      uVar2 = FUN_00442310(param_9);
      local_c._0_2_ = (undefined2)uVar2;
      *(undefined2 *)(local_38 + 0xc) = (undefined2)local_c;
      local_c._2_2_ = (undefined2)((uint)uVar2 >> 0x10);
      *(undefined2 *)(local_38 + 0xe) = local_c._2_2_;
      local_c = uVar2;
    }
    if (param_4 == '\0') {
      lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                           local_18 & 0xffffffff);
      *(undefined8 **)(lVar3 + 0x75) = param_3;
      lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                           local_18 & 0xffffffff);
      *(undefined4 *)(lVar3 + 0x7e) = (undefined4)param_6;
      lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                           local_18 & 0xffffffff);
      *(undefined1 *)(lVar3 + 0x7d) = param_5;
    }
    else {
      local_28 = FUN_00410e60(&PTR_FUN_015dd130,1);
      FUN_004b6e40(local_28,param_7);
      FUN_004b6dc0(local_28,0);
      local_20 = FUN_004b6da0(param_3);
      FUN_004b6dc0(param_3,param_6);
      FUN_015dd260(local_28,param_3,param_7);
      lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                           local_18 & 0xffffffff);
      if ((*(char *)(lVar3 + 0x7d) != '\0') &&
         (lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                               local_18 & 0xffffffff), *(longlong *)(lVar3 + 0x75) != 0)) {
        lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                             local_18 & 0xffffffff);
        FUN_00410f20(*(undefined8 *)(lVar3 + 0x75));
      }
      lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                           local_18 & 0xffffffff);
      *(undefined8 *)(lVar3 + 0x75) = local_28;
      lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                           local_18 & 0xffffffff);
      *(undefined4 *)(lVar3 + 0x7e) = 0;
      lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                           local_18 & 0xffffffff);
      *(undefined1 *)(lVar3 + 0x7d) = 1;
      FUN_004b6dc0(param_3,local_20);
    }
  }
  local_30 = (**(code **)*param_3)(param_3);
  if ((local_30 < 0xffffffff) && (*(char *)(param_1 + 600) != '\x02')) {
    lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                         local_18 & 0xffffffff);
    *(undefined4 *)(lVar3 + 0x18) = (undefined4)local_30;
  }
  else {
    lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                         local_18 & 0xffffffff);
    *(undefined1 *)(lVar3 + 0x4f) = 1;
    lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                         local_18 & 0xffffffff);
    *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
    lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),
                         local_18 & 0xffffffff);
    *(longlong *)(lVar3 + 0x50) = local_30;
  }
  FUN_015dcfc0(param_1);
  return;
}

