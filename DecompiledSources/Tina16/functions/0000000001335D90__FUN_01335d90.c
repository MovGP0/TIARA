/* Ghidra address: 01335d90 */
/* Ghidra symbol: FUN_01335d90 */


void FUN_01335d90(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_38 = *param_5;
  local_30 = param_5[1];
  lVar1 = *(longlong *)(param_1 + 0x6c0);
  local_80 = param_3;
  local_7c = param_4;
  if (param_4 == 0) {
    FUN_005fce70(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),1);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),0);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x80),0xff00000f);
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x80),1);
    uVar3 = FUN_00635930(&PTR_PTR_00f0f0f0,0xffffffe7);
    local_98 = CONCAT71(local_98._1_7_,1);
    FUN_00636080(*(undefined8 *)(lVar1 + 0x490),0xffffff,uVar3,&local_38);
    cVar6 = '\x02';
  }
  else {
    cVar6 = param_3 != 0;
    FUN_005fce70(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),0);
    if (local_80 == 4) {
      FUN_0084e320(lVar1,local_50,4,local_7c);
      lVar2 = local_50[0];
      FUN_0041ddd0(&local_58,&PTR_PTR_01335488);
      if (lVar2 == local_58) {
        bVar7 = true;
      }
      else if ((lVar2 == 0) || (local_58 == 0)) {
        bVar7 = false;
      }
      else {
        iVar4 = FUN_0043e420(lVar2,local_58);
        bVar7 = iVar4 == 0;
      }
      if (bVar7) {
        FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),0xff);
      }
      else {
        FUN_0084e320(lVar1,&local_60,local_80,local_7c);
        lVar2 = local_60;
        FUN_0041ddd0(&local_68,&PTR_PTR_01335478);
        if (lVar2 == local_68) {
          bVar7 = true;
        }
        else if ((lVar2 == 0) || (local_68 == 0)) {
          bVar7 = false;
        }
        else {
          iVar4 = FUN_0043e420(lVar2,local_68);
          bVar7 = iVar4 == 0;
        }
        if (bVar7) {
          FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),0x8000);
        }
        else {
          FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),0xff000008);
        }
      }
    }
    else {
      FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),0xff000008);
    }
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x80),0xff000005);
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x80),0);
    (**(code **)(**(longlong **)(lVar1 + 0x490) + 0xa8))(*(longlong **)(lVar1 + 0x490),&local_38);
  }
  FUN_0084e320(lVar1,&local_70,local_80,local_7c);
  local_40 = (**(code **)(**(longlong **)(lVar1 + 0x490) + 0x118))
                       (*(longlong **)(lVar1 + 0x490),local_70);
  iVar4 = FUN_004230c0(&local_38);
  iVar4 = iVar4 - local_40._4_4_;
  iVar5 = local_38._4_4_ + iVar4 / 2;
  local_40._4_4_ = iVar5;
  if (cVar6 == '\0') {
    local_40._0_4_ = (int)local_38 + 4;
  }
  else if (cVar6 == '\x01') {
    local_40._0_4_ = ((int)local_30 - (int)local_40) + -4;
  }
  else if (cVar6 == '\x02') {
    iVar4 = FUN_004230a0(&local_38,(longlong)iVar4 % 2 & 0xffffffff);
    local_40._0_4_ = (int)local_38 + (iVar4 - (int)local_40) / 2;
  }
  FUN_0084e320(lVar1,&local_78,local_80,local_7c);
  local_98 = local_78;
  (**(code **)(**(longlong **)(lVar1 + 0x490) + 0x130))
            (*(longlong **)(lVar1 + 0x490),&local_38,(int)local_40,local_40._4_4_);
  if ((local_7c == 0) && (local_80 == *(int *)(param_1 + 0x710))) {
    FUN_01335c00(auStack_b8,*(undefined1 *)(*(longlong *)(param_1 + 0x708) + (longlong)local_80));
  }
  FUN_00414560(&local_78,6);
  return;
}

