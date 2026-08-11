/* Ghidra address: 01c0b940 */
/* Ghidra symbol: FUN_01c0b940 */


void FUN_01c0b940(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_70 [12];
  int local_64;
  undefined1 *local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  local_60 = auStack_a8;
  uVar4 = FUN_0065b870(param_1);
  thunk_FUN_03abe598(uVar4,&local_40);
  uVar4 = FUN_0065b870(param_1);
  thunk_FUN_03e49910(uVar4,&local_50);
  uVar4 = FUN_0065b870(param_1);
  thunk_FUN_0411b3be(0,uVar4,&local_50,2);
  FUN_00423b50(&local_40,-local_50,-local_4c);
  local_88 = local_34;
  thunk_FUN_041a27b3(param_2,local_40,local_3c,local_38);
  FUN_00423b50(&local_50,-local_50,-local_4c);
  local_30 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x4b0));
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),param_2);
  FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),1);
  lVar5 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar5 + 200));
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
            (*(longlong **)(param_1 + 0x4b0),local_48,local_4c);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_50,local_4c);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_50,local_44);
  lVar5 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar5 + 0xc4))
  ;
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
            (*(longlong **)(param_1 + 0x4b0),local_48 + -1,local_4c + 1);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_50 + 1,local_4c + 1);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_50 + 1,local_44 + -2);
  lVar5 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar5 + 0xd0))
  ;
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
            (*(longlong **)(param_1 + 0x4b0),local_48 + -1,local_4c);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_48 + -1,local_44 + -1);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_50 + -1,local_44 + -1);
  lVar5 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar5 + 0xcc))
  ;
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
            (*(longlong **)(param_1 + 0x4b0),local_48 + -2,local_4c + 1);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_48 + -2,local_44 + -2);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_50,local_44 + -2);
  if (*(longlong *)(param_1 + 0x498) != 0) {
    lVar5 = FUN_01c03e40(param_1);
    lVar6 = FUN_01c03e40(param_1);
    if (*(int *)(lVar5 + 0x80) != *(int *)(lVar6 + 200)) {
      cVar3 = FUN_004113d0(*(undefined8 *)(param_1 + 0x5b0),&PTR_FUN_01c08208);
      if (cVar3 != '\0') {
        lVar5 = *(longlong *)(param_1 + 0x5b0);
        FUN_0064d000(lVar5,local_70);
        local_58 = FUN_0064d1f0(*(undefined8 *)(lVar5 + 0x78),local_70);
        FUN_0064d000(param_1,local_70);
        if (local_58._4_4_ < local_64) {
          local_58 = local_58 & 0xffffffff;
        }
        else {
          local_58 = CONCAT44(local_44 + -1,(int)local_58);
        }
        iVar1 = (int)local_58;
        uVar2 = local_58._4_4_;
        (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
                  (*(longlong **)(param_1 + 0x4b0),((int)local_58 - *(int *)(param_1 + 0x90)) + 1,
                   local_58._4_4_);
        lVar5 = FUN_01c03e40(param_1);
        FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),
                     *(undefined4 *)(lVar5 + 0x80));
        (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
                  (*(longlong **)(param_1 + 0x4b0),
                   (iVar1 - *(int *)(param_1 + 0x90)) +
                   *(int *)(*(longlong *)(param_1 + 0x5b0) + 0x98) + -1,uVar2);
      }
    }
  }
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),local_30);
  return;
}

