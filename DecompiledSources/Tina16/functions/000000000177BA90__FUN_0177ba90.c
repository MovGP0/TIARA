/* Ghidra address: 0177ba90 */
/* Ghidra symbol: FUN_0177ba90 */


void FUN_0177ba90(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_a38 [32];
  undefined4 local_a18;
  undefined1 local_a10;
  undefined8 local_a08;
  undefined1 local_a00;
  undefined8 local_9f8;
  undefined4 local_9f0;
  wchar_t *local_9e8;
  undefined8 local_9e0;
  undefined1 local_9d8 [16];
  undefined8 local_9c8;
  undefined1 *local_9c0;
  bool local_9a9;
  wchar_t *local_9a8;
  undefined8 local_9a0;
  longlong local_998;
  longlong *local_990;
  undefined1 local_981 [2360];
  undefined1 local_49;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  
  local_9c0 = auStack_a38;
  local_9e8 = (wchar_t *)0x0;
  local_9e0 = 0;
  local_9c8 = 0;
  FUN_00417580(local_981,&DAT_01d0d0b8);
  cVar1 = FUN_00440a20(*(undefined8 *)(param_1 + 0x6d8),1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x6e0) == '\0')) {
    *(undefined1 *)(param_1 + 0x6e0) = 1;
    local_49 = *PTR_DAT_02003038;
    *PTR_DAT_02003038 = 0;
    FUN_00417c40(local_981,PTR_DAT_02004010,&DAT_01d0d0b8);
    FUN_00742010(*(undefined8 *)(param_1 + 0x6c0),0);
    local_40 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    uVar2 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x6c0));
    (**(code **)(*local_40 + 0x88))(local_40,uVar2);
    uVar2 = FUN_0064d120(*(undefined8 *)(param_1 + 0x6c0));
    (**(code **)(*local_40 + 0x70))(local_40,uVar2);
    local_48 = thunk_FUN_040ef593(0);
    local_38 = (longlong *)FUN_0198b2d0(0,&PTR_FUN_01984d18,1,local_48);
    FUN_00742010(*(undefined8 *)(param_1 + 0x6c0),0);
    plVar5 = (longlong *)FUN_00741ea0(*(undefined8 *)(param_1 + 0x6c0));
    FUN_0041ddd0(&local_9c8,&LAB_0177ba78);
    local_9a0 = (**(code **)(*plVar5 + 0x118))(plVar5,local_9c8);
    plVar5 = (longlong *)FUN_00741ea0(*(undefined8 *)(param_1 + 0x6c0));
    uVar2 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x6c0));
    local_a18 = FUN_0064d120(*(undefined8 *)(param_1 + 0x6c0));
    FUN_00498350(local_9d8,0,0,uVar2);
    (**(code **)(*plVar5 + 0xa8))(plVar5,local_9d8);
    plVar5 = (longlong *)FUN_00741ea0(*(undefined8 *)(param_1 + 0x6c0));
    iVar3 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x6c0));
    iVar4 = FUN_0064d120(*(undefined8 *)(param_1 + 0x6c0));
    FUN_0041ddd0(&local_9e0,&LAB_0177ba78);
    (**(code **)(*plVar5 + 0x120))
              (plVar5,(longlong)(iVar3 - (int)local_9a0) / 2 & 0xffffffff,
               (longlong)(iVar4 - local_9a0._4_4_) / 2 & 0xffffffff,local_9e0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d0),1);
    FUN_0064e770(*(undefined8 *)(param_1 + 0x6c0));
    local_a18 = CONCAT31(local_a18._1_3_,1);
    lVar6 = FUN_014a74d0(*(undefined8 *)(param_1 + 0x6d8),local_38,0,1);
    if (lVar6 == 0) {
      plVar5 = (longlong *)FUN_00741ea0(*(undefined8 *)(param_1 + 0x6c0));
      uVar2 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x6c0));
      local_a18 = FUN_0064d120(*(undefined8 *)(param_1 + 0x6c0));
      FUN_00498350(local_9d8,0,0,uVar2);
      (**(code **)(*plVar5 + 0xa8))(plVar5,local_9d8);
      FUN_00742010(*(undefined8 *)(param_1 + 0x6c0),0);
    }
    else {
      FUN_00441a10(&local_9e8,*(undefined8 *)(param_1 + 0x6d8));
      local_9a8 = local_9e8;
      if (local_9e8 == L".TSM") {
        local_9a9 = true;
      }
      else if (local_9e8 == (wchar_t *)0x0) {
        local_9a9 = false;
      }
      else {
        iVar3 = FUN_0043e420(local_9e8,L".TSM");
        local_9a9 = iVar3 == 0;
      }
      if (local_9a9 == false) {
        local_a18 = CONCAT31(local_a18._1_3_,1);
        local_a10 = 0;
        local_a08 = 0;
        local_a00 = 0;
        local_9f8 = 0;
        local_9f0 = 0x14;
        FUN_019904f0(local_38,local_40,1,*PTR_DAT_02002480);
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + 0x318);
        (**(code **)(*plVar5 + 0x10))(plVar5,local_40);
      }
      else {
        local_30 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x39);
        local_998 = FUN_017708f0(*(undefined8 *)(param_1 + 0x6d8));
        if (local_998 != 0) {
          local_990 = (longlong *)(**(code **)(local_998 + 0x20))(local_998,1,local_30);
          *(char *)(local_30 + 0x1a0) = (char)local_990[0xe];
          *(longlong **)(local_30 + 0x1a8) = local_990;
          (**(code **)(*local_990 + 0x28))(local_990,*(undefined8 *)(param_1 + 0x6d8),0,local_38);
        }
        if (local_30 != 0) {
          (**(code **)(*local_38 + 0x20))(local_38,local_30);
          local_a18 = CONCAT31(local_a18._1_3_,1);
          local_a10 = 0;
          local_a08 = 0;
          local_a00 = 0;
          local_9f8 = 0;
          local_9f0 = 0x14;
          FUN_019904f0(local_38,local_40,1,*PTR_DAT_02002480);
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + 0x318);
          (**(code **)(*plVar5 + 0x10))(plVar5,local_40);
        }
      }
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d0),0);
    uVar7 = (**(code **)*local_38)(local_38);
    FUN_00418590(uVar7,&DAT_01984da0);
    FUN_00410f20(local_40);
    thunk_FUN_041a9b5c(0,local_48);
    *PTR_DAT_02003038 = local_49;
    FUN_00417c40(PTR_DAT_02004010,local_981,&DAT_01d0d0b8);
    *(undefined1 *)(param_1 + 0x6e0) = 0;
  }
  FUN_00414560(&local_9e8,2);
  FUN_00414480(&local_9c8);
  FUN_00417740(local_981,&DAT_01d0d0b8);
  return;
}

