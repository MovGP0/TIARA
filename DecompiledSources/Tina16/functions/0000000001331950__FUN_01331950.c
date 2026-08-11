/* Ghidra address: 01331950 */
/* Ghidra symbol: FUN_01331950 */


void FUN_01331950(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 *param_5,char param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 uStack_30;
  
  local_60[0] = 0;
  local_50 = *param_5;
  local_48 = param_5[1];
  local_40 = param_5[2];
  local_38 = (longlong *)param_5[3];
  uStack_30 = param_5[4];
  if (*(char *)(param_1 + 0xf1) != '\0') {
    lVar2 = FUN_00410e60(&DAT_0132f938,1);
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    *(undefined1 *)(lVar2 + 0x18) = (undefined1)local_50;
    *(undefined4 *)(lVar2 + 0x20) = param_4;
    *(undefined4 *)(lVar2 + 0x24) = local_50._4_4_;
    *(undefined4 *)(lVar2 + 0x28) = (undefined4)local_48;
    *(undefined8 *)(lVar2 + 0x30) = param_3;
    *(undefined8 *)(lVar2 + 0x38) = local_40;
    *(longlong **)(lVar2 + 0x40) = local_38;
    if (param_6 == '\0') {
      if (local_38 == (longlong *)0x0) {
        *(undefined4 *)(lVar2 + 0x1c) = 0xffffffff;
        FUN_00414480(lVar2 + 8);
      }
      else {
        uVar1 = (**(code **)(*local_38 + 0xf8))(local_38);
        *(uint *)(lVar2 + 0x1c) = (uint)uVar1;
        (**(code **)(**(longlong **)(lVar2 + 0x40) + 0x288))(*(longlong **)(lVar2 + 0x40),local_60);
        FUN_00414ad0(lVar2 + 8,local_60[0]);
      }
    }
    else {
      *(undefined4 *)(lVar2 + 0x1c) = 0xffffffff;
      FUN_00414ad0(lVar2 + 8,L"CSENSOR");
    }
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x80))
              (*(longlong **)(param_1 + 0x130),*(undefined8 *)(lVar2 + 8),lVar2);
  }
  FUN_00414480(local_60);
  return;
}

