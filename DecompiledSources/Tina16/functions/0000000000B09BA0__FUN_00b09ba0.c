/* Ghidra address: 00b09ba0 */
/* Ghidra symbol: FUN_00b09ba0 */


void FUN_00b09ba0(longlong param_1,int param_2,int param_3,ulonglong *param_4,byte param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  undefined4 uStack_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_38 = *param_4;
  local_30 = param_4[1];
  cVar2 = FUN_00b09b70(param_1,param_2,param_3);
  if (cVar2 != '\0') {
    local_58 = param_2;
    if (*(char *)(param_1 + 0xb1) != '\0') {
      local_58 = (*(int *)(param_1 + 0x4a4) - param_2) + -1;
    }
    plVar1 = *(longlong **)(param_1 + 0x490);
    local_30 = CONCAT44(local_30._4_4_ + -1,(int)local_30 + -1);
    if ((param_5 & 4) == 0) {
      uVar4 = 0xff00000f;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x4c4);
    }
    FUN_005fdab0(plVar1[0x10],uVar4);
    (**(code **)(*plVar1 + 0xa8))(plVar1,&local_38);
    FUN_005fd4e0(plVar1[0xf],0xff000010);
    (**(code **)(*plVar1 + 200))(plVar1,local_30 & 0xffffffff,local_38._4_4_);
    (**(code **)(*plVar1 + 0xc0))(plVar1,local_30 & 0xffffffff,local_30._4_4_ + 1);
    FUN_005fda60(plVar1[0x10],*(undefined8 *)(param_1 + 0x628));
    _local_48 = CONCAT44(local_30._4_4_,(int)local_38);
    _uStack_40 = CONCAT44(local_30._4_4_ + 1,(int)local_30);
    (**(code **)(*plVar1 + 0xa8))(plVar1,&local_48);
    FUN_005fd4e0(plVar1[0xf],0xff000014);
    FUN_005fd670(plVar1[0xf],0);
    (**(code **)(*plVar1 + 200))(plVar1,local_38 & 0xffffffff,local_38._4_4_);
    (**(code **)(*plVar1 + 0xc0))(plVar1,local_38 & 0xffffffff,local_30._4_4_ + 1);
    if (param_3 == *(int *)(param_1 + 0x4ac)) {
      FUN_005fd4e0(plVar1[0xf],0);
      (**(code **)(*plVar1 + 200))(plVar1,local_38 & 0xffffffff,local_38._4_4_);
      (**(code **)(*plVar1 + 0xc0))(plVar1,local_30 & 0xffffffff,local_38._4_4_);
      if (local_58 == 0) {
        (**(code **)(*plVar1 + 200))(plVar1,local_38 & 0xffffffff,local_38._4_4_);
        (**(code **)(*plVar1 + 0xc0))(plVar1,local_38 & 0xffffffff,local_30._4_4_);
      }
      FUN_005fd4e0(plVar1[0xf],0xff000014);
      (**(code **)(*plVar1 + 200))(plVar1,local_38 & 0xffffffff,local_30._4_4_);
      (**(code **)(*plVar1 + 0xc0))(plVar1,local_30 & 0xffffffff,local_30._4_4_);
    }
    FUN_005fdab0(plVar1[0x10],uVar4);
    FUN_005ff880(plVar1,*(undefined8 *)(param_1 + 0xb8));
    if (((param_5 & 4) == 0) || (*(char *)(param_1 + 0x669) == '\0')) {
      lVar3 = FUN_0084e390(param_1,local_58,param_3);
      if (lVar3 != 0) {
        FUN_005fc860(plVar1[0xe],0xff0000);
      }
    }
    else {
      FUN_005fce70(plVar1[0xe],1);
    }
    FUN_0084e320(param_1,&local_50,local_58,param_3);
    (**(code **)(*plVar1 + 0x120))(plVar1,(int)local_38 + 1,local_38._4_4_ + 1,local_50);
    if (((*PTR_DAT_020039a8 == '\0') && (2 < *(int *)(param_1 + 0x4a4))) && (local_58 == 2)) {
      lVar3 = FUN_0084e390(param_1,1,param_3);
      if (lVar3 != 0) {
        lVar3 = FUN_0084e390(param_1,1,param_3);
        if (*(char *)(lVar3 + 0x3a) != '\0') {
          FUN_005fd4e0(plVar1[0xf],0);
          FUN_005fd6d0(plVar1[0xf],1);
          FUN_00498350(&local_48,(int)local_38 + 2,local_38._4_4_ + 1,
                       (int)local_38 + 2 + *(int *)(*(longlong *)(param_1 + 0x620) + 0x98),
                       local_38._4_4_ + 1 + *(int *)(*(longlong *)(param_1 + 0x620) + 0x9c));
          FUN_005fdf50(plVar1,&local_48);
          lVar3 = FUN_0084e390(param_1,1,param_3);
          if (*(char *)(lVar3 + 0x39) != '\0') {
            FUN_0060a8f0(*(undefined8 *)(param_1 + 0x630),PTR_IMAGE_DOS_HEADER_0200c280,L"RXSTICK");
            (**(code **)(**(longlong **)(param_1 + 0x630) + 0x80))
                      (*(longlong **)(param_1 + 0x630),1);
            (**(code **)(*plVar1 + 0x110))(plVar1,&local_48,*(undefined8 *)(param_1 + 0x630));
          }
        }
      }
    }
    FUN_0084ddf0(param_1,local_58,param_3,&local_38,param_5);
  }
  FUN_00414480(&local_50);
  return;
}

