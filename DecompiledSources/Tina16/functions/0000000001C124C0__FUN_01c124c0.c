/* Ghidra address: 01c124c0 */
/* Ghidra symbol: FUN_01c124c0 */


void FUN_01c124c0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_38 [12];
  int local_2c;
  undefined8 local_20;
  
  uVar4 = FUN_01c07120(param_1);
  cVar2 = FUN_004113d0(uVar4,&PTR_FUN_01bdc350);
  if (cVar2 != '\0') {
    lVar5 = FUN_01c07120(param_1);
    if ((*(char *)(lVar5 + 0x592) != '\0') && (*(char *)(param_1 + 0x344) != '\0')) {
      if (*(longlong *)(*(longlong *)(param_1 + 800) + 0x30) == 0) {
        lVar5 = FUN_01beb450(param_1);
        iVar3 = FUN_00611650(*(undefined8 *)(*(longlong *)(lVar5 + 0x5d0) + 0x648));
        if (iVar3 == 1) {
          FUN_01c12310(auStack_68,*(char *)(param_1 + 0x363) == '\0');
          uVar4 = FUN_01beb450(param_1);
          lVar5 = FUN_01c03e40(uVar4);
          FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80),
                       *(undefined4 *)(lVar5 + 0xb4));
        }
      }
      else {
        uVar4 = FUN_01beb450(param_1);
        lVar5 = FUN_01c03e40(uVar4);
        FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80),
                     *(undefined4 *)(lVar5 + 0x80));
        uVar4 = FUN_01c07120(param_1);
        lVar5 = FUN_01c03e40(uVar4);
        FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x78),
                     *(undefined4 *)(lVar5 + 200));
        local_48 = *(undefined4 *)(param_1 + 0x9c);
        (**(code **)(**(longlong **)(param_1 + 0x310) + 0xf8))
                  (*(longlong **)(param_1 + 0x310),0,0,*(undefined4 *)(param_1 + 0x98));
        FUN_0064d000(param_1,local_38);
        local_20 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x78),local_38);
        FUN_0064d000(*(undefined8 *)(*(longlong *)(param_1 + 800) + 0x30),local_38);
        if (local_20._4_4_ < local_2c) {
          local_20 = CONCAT44(*(int *)(param_1 + 0x9c) + -1,(undefined4)local_20);
        }
        else {
          local_20 = local_20 & 0xffffffff;
        }
        uVar4 = FUN_01c07120(param_1);
        lVar5 = FUN_01c03e40(uVar4);
        FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x78),
                     *(undefined4 *)(lVar5 + 0x80));
        uVar1 = local_20._4_4_;
        (**(code **)(**(longlong **)(param_1 + 0x310) + 200))
                  (*(longlong **)(param_1 + 0x310),1,local_20._4_4_);
        (**(code **)(**(longlong **)(param_1 + 0x310) + 0xc0))
                  (*(longlong **)(param_1 + 0x310),*(int *)(param_1 + 0x98) + -1,uVar1);
        FUN_00423b10(param_2,0xffffffff,0xffffffff);
      }
    }
  }
  if (*(char *)(param_1 + 0x344) == '\0') {
    uVar4 = FUN_01c07120(param_1);
    lVar5 = FUN_01c03e40(uVar4);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80),
                 *(undefined4 *)(lVar5 + 0x8c));
  }
  else {
    uVar4 = FUN_01c07120(param_1);
    lVar5 = FUN_01c03e40(uVar4);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80),
                 *(undefined4 *)(lVar5 + 0x80));
  }
  FUN_01bd35f0(param_1,param_2);
  return;
}

