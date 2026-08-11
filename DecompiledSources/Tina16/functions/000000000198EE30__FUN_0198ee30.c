/* Ghidra address: 0198ee30 */
/* Ghidra symbol: FUN_0198ee30 */


undefined8 FUN_0198ee30(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_308 [32];
  int *local_2e8;
  undefined4 local_2e0;
  undefined1 local_2d8;
  undefined1 local_2d0;
  undefined1 local_2c8;
  undefined4 local_2c0;
  undefined1 *local_2b0;
  int local_28c;
  undefined8 local_288;
  undefined8 local_280;
  undefined1 local_278 [512];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [16];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_2b0 = auStack_308;
  if (*(char *)(param_1 + 0x98) == '\0') {
    local_2e8 = (int *)CONCAT71(local_2e8._1_7_,PTR_DAT_02004010[0x814]);
    local_2e0 = CONCAT31(local_2e0._1_3_,*PTR_DAT_020037e8);
    local_2d8 = PTR_DAT_02004010[0x815];
    local_2d0 = *PTR_DAT_02001560;
    local_2c8 = *PTR_DAT_02005310;
    local_2c0 = 0x1c7;
    FUN_0198d580(param_1,&local_40,*PTR_DAT_02002480,PTR_DAT_02004010[0x816]);
    FUN_00b95880(&local_40,0x14,0x14);
  }
  else {
    local_40 = *(ulonglong *)(param_1 + 0xa4);
    local_38 = *(ulonglong *)(param_1 + 0xac);
    local_2b0 = auStack_308;
  }
  *param_3 = (int)local_38 - (int)local_40;
  *param_4 = local_38._4_4_ - local_40._4_4_;
  lVar1 = *(longlong *)(param_1 + 0x210);
  local_280 = *(undefined8 *)(lVar1 + 0x58);
  local_288 = *(undefined8 *)(lVar1 + 0x68);
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  local_2e8 = param_4;
  FUN_01a98380(lVar1,*param_3,*param_4,param_3);
  lVar1 = *(longlong *)(param_1 + 0x210);
  *(undefined8 *)(lVar1 + 0x58) = local_280;
  *(undefined8 *)(lVar1 + 0x68) = local_288;
  local_2e8 = (int *)CONCAT44(local_2e8._4_4_,*param_4);
  FUN_00b956d0(local_60,0,0,*param_3);
  FUN_01b23050(*param_3,*param_4,param_3,param_4);
  local_78 = thunk_FUN_040ef593(0);
  iVar3 = thunk_FUN_03e5bd07(local_78,4);
  uVar4 = thunk_FUN_03e5bd07(local_78,8);
  iVar3 = thunk_FUN_03f3ed25(*param_3,iVar3 * 100,uVar4);
  *param_3 = iVar3;
  iVar3 = thunk_FUN_03e5bd07(local_78,6);
  uVar4 = thunk_FUN_03e5bd07(local_78,10);
  iVar3 = thunk_FUN_03f3ed25(*param_4,iVar3 * 100,uVar4);
  *param_4 = iVar3;
  thunk_FUN_041a9b5c(0,local_78);
  local_70 = 0;
  local_6c = 0;
  local_68 = *param_3;
  local_64 = *param_4;
  if (param_2 == 0) {
    local_50 = thunk_FUN_03b5b617(0,0,&local_70,L"TINA");
  }
  else {
    uVar5 = FUN_00442620(local_278,param_2);
    local_50 = thunk_FUN_03b5b617(0,uVar5,&local_70,L"TINA");
  }
  if (local_50 != 0) {
    thunk_FUN_03b0d54a(local_50,8);
    local_30 = (longlong *)FUN_01a976c0(0,&PTR_FUN_01a96ef0,local_50,&local_40);
    (**(code **)(*local_30 + 0x10))(local_30,local_60);
    FUN_01a98210(local_30,&local_40);
    local_2e0 = (**(code **)(*local_30 + 0xd0))(local_30,0);
    local_2e8 = (int *)CONCAT44(local_2e8._4_4_,local_38._4_4_);
    (**(code **)(*local_30 + 0x60))
              (local_30,local_40 & 0xffffffff,local_40._4_4_,local_38 & 0xffffffff);
    FUN_00b95860(&local_40,0xffffffce,0xffffffce);
    local_38 = CONCAT44(local_38._4_4_ + 100,(int)local_38 + 100);
    FUN_0199c750(param_1,&local_40,local_30);
    iVar3 = *(int *)(param_1 + 0x10);
    local_28c = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar5 = FUN_00b94e60(param_1,local_28c);
        cVar2 = FUN_0198ed70(auStack_308,uVar5);
        if (cVar2 != '\0') {
          FUN_00b94e60(param_1,local_28c);
          break;
        }
        local_28c = local_28c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar5 = (**(code **)*local_30)(local_30);
    FUN_00418590(uVar5,&DAT_01a96ff8);
    local_48 = thunk_FUN_04174fe9(local_50);
  }
  return local_48;
}

