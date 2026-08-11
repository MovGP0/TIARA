/* Ghidra address: 00d8bcf0 */
/* Ghidra symbol: FUN_00d8bcf0 */


void FUN_00d8bcf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  uStack_2c = *(undefined4 *)(param_4 + 2);
  local_50 = *param_5;
  uStack_48 = param_5[1];
  uStack_40 = *(undefined4 *)(param_5 + 2);
  plVar3 = (longlong *)0x0;
  iVar1 = FUN_00416db0(param_6,L"default");
  if (iVar1 != 0) {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_6);
    plVar3 = (longlong *)0x0;
    if (lVar2 != 0) {
      if (uStack_2c._1_1_ == '\0') {
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"CaptionNoBorder");
      }
      else {
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"Caption");
      }
    }
  }
  if ((plVar3 == (longlong *)0x0) && (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x118) != 0)) {
    if (uStack_2c._1_1_ == '\0') {
      plVar3 = (longlong *)
               FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x118),
                            L"CaptionNoBorder");
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)
               FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x118),L"Caption");
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d77b90(plVar3,&local_50);
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
    FUN_00414480(plVar3 + 0x17);
  }
  return;
}

