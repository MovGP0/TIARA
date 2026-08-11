/* Ghidra address: 01331c90 */
/* Ghidra symbol: FUN_01331c90 */


void FUN_01331c90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 *param_8,
                 byte param_9)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_60[0] = 0;
  local_50 = *param_8;
  local_48 = param_8[1];
  local_40 = param_8[2];
  local_38 = param_8[3];
  uStack_30 = param_8[4];
  if (((*(char *)(param_1 + 0xf1) != '\0') && (*(longlong *)(param_1 + 0x140) != 0)) &&
     ((lVar1 = *(longlong *)(param_1 + 0x140), *(char *)(lVar1 + 0x65) == '\0' ||
      (((param_9 & *(byte *)(lVar1 + 0x65)) != 0 && (*(char *)(lVar1 + 100) == '\0')))))) {
    *(undefined1 *)(lVar1 + 0x65) = 1;
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    *(undefined8 *)(lVar1 + 0x20) = param_3;
    *(undefined8 *)(lVar1 + 0x28) = param_4;
    *(undefined1 *)(lVar1 + 0x59) = param_5;
    *(undefined1 *)(lVar1 + 0x58) = param_6;
    *(undefined1 *)(lVar1 + 0x30) = (undefined1)local_50;
    *(undefined4 *)(lVar1 + 0x38) = param_7;
    local_50._4_4_ = (undefined4)((ulonglong)local_50 >> 0x20);
    *(undefined4 *)(lVar1 + 0x3c) = local_50._4_4_;
    *(undefined4 *)(lVar1 + 0x40) = (undefined4)local_48;
    *(undefined8 *)(lVar1 + 0x48) = local_40;
    *(undefined8 *)(lVar1 + 0x50) = local_38;
    *(byte *)(lVar1 + 100) = param_9;
    if (param_9 == 0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
      if (plVar2 == (longlong *)0x0) {
        *(undefined4 *)(lVar1 + 0x34) = 0xffffffff;
        FUN_00414480(lVar1 + 0x10);
      }
      else {
        uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
        *(uint *)(lVar1 + 0x34) = (uint)uVar3;
        (**(code **)(**(longlong **)(lVar1 + 0x50) + 0x288))(*(longlong **)(lVar1 + 0x50),local_60);
        FUN_00414ad0(lVar1 + 0x10,local_60[0]);
      }
    }
    else {
      *(undefined4 *)(lVar1 + 0x34) = 0xffffffff;
      FUN_00414ad0(lVar1 + 0x10,L"RTRIGGER");
    }
    FUN_01330c60(lVar1);
  }
  FUN_00414480(local_60);
  return;
}

