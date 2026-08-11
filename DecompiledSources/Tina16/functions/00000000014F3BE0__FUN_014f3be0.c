/* Ghidra address: 014f3be0 */
/* Ghidra symbol: FUN_014f3be0 */


void FUN_014f3be0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  int local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_38 = *param_5;
  local_30 = param_5[1];
  lVar2 = *(longlong *)(param_1 + 0x6e0);
  cVar5 = '\x02';
  uVar6 = *(undefined4 *)(lVar2 + 200);
  uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0xb8) + 0x28);
  if (param_3 == 0) {
    cVar5 = '\x02';
    if (0 < param_4) {
      cVar5 = '\x01';
    }
    uVar6 = 0xff00000f;
  }
  else if (param_4 == 0) {
    uVar6 = 0xff00000f;
  }
  else if (param_4 < param_3) {
    uVar6 = 0xff00000f;
  }
  else {
    FUN_0084e320(lVar2,local_50,param_3,param_4);
    iVar3 = FUN_00416db0(local_50[0],&DAT_014f3e28);
    if (iVar3 == 0) {
      uVar6 = 0xff;
    }
    else {
      FUN_0084e320(lVar2,&local_58,param_3,param_4);
      iVar3 = FUN_00416db0(local_58,&LAB_014f3e38);
      if (iVar3 == 0) {
        uVar6 = 0xffff;
      }
    }
  }
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar2 + 0x490) + 0x80),uVar6);
  (**(code **)(**(longlong **)(lVar2 + 0x490) + 0xa8))(*(longlong **)(lVar2 + 0x490),&local_38);
  FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar2 + 0x490) + 0x70),uVar1);
  FUN_0084e320(lVar2,&local_60,param_3,param_4);
  uVar4 = (**(code **)(**(longlong **)(lVar2 + 0x490) + 0x118))
                    (*(longlong **)(lVar2 + 0x490),local_60);
  iVar3 = local_38._4_4_;
  iStack_3c = (int)((ulonglong)uVar4 >> 0x20);
  iStack_3c = ((local_30._4_4_ - local_38._4_4_) - iStack_3c) / 2;
  local_40 = (int)uVar4;
  if (cVar5 == '\0') {
    local_40 = (int)local_38 + 4;
  }
  else if (cVar5 == '\x01') {
    local_40 = ((int)local_30 - local_40) + -4;
  }
  else if (cVar5 == '\x02') {
    local_40 = (((int)local_30 - (int)local_38) - local_40) / 2;
  }
  FUN_0084e320(lVar2,&local_68,param_3,param_4);
  (**(code **)(**(longlong **)(lVar2 + 0x490) + 0x120))
            (*(longlong **)(lVar2 + 0x490),(int)local_38 + local_40,iVar3 + iStack_3c,local_68);
  FUN_00414560(&local_68,4);
  return;
}

