/* Ghidra address: 00d8b7c0 */
/* Ghidra symbol: FUN_00d8b7c0 */


undefined8 *
FUN_00d8b7c0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_3c = *param_5;
  uStack_34 = param_5[1];
  local_2c = *(undefined4 *)(param_5 + 2);
  *param_2 = local_3c;
  param_2[1] = uStack_34;
  lVar3 = 0;
  iVar1 = FUN_00416db0(param_6,L"default");
  if (iVar1 != 0) {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_6);
    lVar3 = 0;
    if (lVar2 != 0) {
      if ((local_2c._1_1_ == '\0') && ((char)local_2c == '\0')) {
        lVar3 = FUN_00d77610(lVar2,L"FrameNoBorderCaption");
      }
      else if ((local_2c._1_1_ == '\0') && ((char)local_2c != '\0')) {
        lVar3 = FUN_00d77610(lVar2,L"FrameNoBorder");
      }
      else if ((local_2c._1_1_ == '\0') || ((char)local_2c != '\0')) {
        lVar3 = FUN_00d77610(lVar2,L"Frame");
      }
      else {
        lVar3 = FUN_00d77610(lVar2,L"FrameNoCaption");
      }
    }
  }
  if ((lVar3 == 0) && (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x118) != 0)) {
    if ((local_2c._1_1_ == '\0') && ((char)local_2c == '\0')) {
      lVar3 = FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x118),
                           L"FrameNoBorderCaption");
    }
    else if ((local_2c._1_1_ == '\0') && ((char)local_2c != '\0')) {
      lVar3 = FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x118),L"FrameNoBorder");
    }
    else if ((local_2c._1_1_ != '\0') && ((char)local_2c == '\0')) {
      lVar3 = FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x118),L"FrameNoCaption")
      ;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x118),L"Frame");
    }
  }
  if (lVar3 != 0) {
    *param_2 = local_3c;
    param_2[1] = uStack_34;
    FUN_00d77b90(lVar3,&local_3c);
    FUN_004238d0(param_2,*(undefined4 *)(lVar3 + 0xe4),*(undefined4 *)(lVar3 + 0xe8),
                 *(int *)(lVar3 + 0x84) - *(int *)(lVar3 + 0xf0),
                 *(int *)(lVar3 + 0x88) - *(int *)(lVar3 + 0xec));
  }
  return param_2;
}

