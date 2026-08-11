/* Ghidra address: 01a77f90 */
/* Ghidra symbol: FUN_01a77f90 */


void FUN_01a77f90(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_20 = 0;
  uVar1 = FUN_007fd7d0(param_1);
  uVar2 = FUN_007fd800(param_1);
  FUN_01aeeaf0(&local_20,0x3fc,*(undefined4 *)(param_1 + 0x6b8),uVar1,uVar2,
               *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_20);
  uVar5 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
  iVar3 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0xbd8));
  lVar6 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),1);
  FUN_006d8600(uVar5,iVar3 - *(int *)(lVar6 + 0x20));
  lVar6 = *(longlong *)(param_1 + 0x788);
  if (lVar6 != 0) {
    FUN_01a782f0(param_1,local_30);
    FUN_013d28c0(lVar6,param_1,*(undefined8 *)(param_1 + 0x780),local_30);
    FUN_013d2b30(*(undefined8 *)(param_1 + 0x788),1);
    goto LAB_01a782b8;
  }
  if (*(longlong *)(param_1 + 0x798) == 0) goto LAB_01a782b8;
  FUN_0064e140(param_1,0xfff5);
  FUN_01a89e80(param_1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7b8),0);
  uVar5 = FUN_007ffbe0(param_1);
  *(undefined8 *)(param_1 + 0x780) = uVar5;
  lVar6 = *(longlong *)(param_1 + 0x798);
  FUN_01a782f0(param_1,local_30);
  FUN_01acf9e0(lVar6,local_30);
  *PTR_DAT_02002478 = 1;
  local_38 = FUN_00498310(0,0);
  uVar5 = FUN_01ace140(lVar6,param_1,*(undefined8 *)(param_1 + 0x780),&local_38);
  if (*(byte *)(lVar6 + 0xb0) < 8) {
    uVar4 = (int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (*(byte *)(lVar6 + 0xb0) & 0x1f);
    bVar8 = (uVar4 & 2) != 0;
    uVar7 = (ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar8);
  }
  else {
    uVar7 = 0;
    bVar8 = false;
  }
  if (bVar8) {
LAB_01a781a3:
    FUN_01acfa60(lVar6);
  }
  else {
    if (*(char *)(lVar6 + 0x108) != '\0') {
      if (*(byte *)(lVar6 + 0xb0) < 8) {
        bVar8 = ((int)CONCAT71((int7)(uVar7 >> 8),1) << (*(byte *)(lVar6 + 0xb0) & 0x1f) & 1U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) goto LAB_01a781a3;
    }
    FUN_01acfc60(lVar6);
  }
  FUN_005fd640(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x78),4);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x78),*(undefined4 *)(param_1 + 200)
              );
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x80),*(undefined4 *)(param_1 + 200)
              );
  FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x80),0);
  uVar1 = FUN_0064d0b0(param_1);
  uVar2 = FUN_0064d120(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x780) + 0xf8))
            (*(longlong **)(param_1 + 0x780),0,0,uVar1,uVar2);
  FUN_01aceb90(lVar6,1);
  uVar5 = FUN_0065b870(param_1);
  thunk_FUN_04015890(uVar5,0);
  *PTR_DAT_02002478 = 0;
  uVar1 = FUN_0064d0b0(param_1);
  *(undefined4 *)(lVar6 + 0x104) = uVar1;
  uVar1 = FUN_0064d120(param_1);
  *(undefined4 *)(lVar6 + 0x100) = uVar1;
  FUN_0064e140(param_1,0);
LAB_01a782b8:
  FUN_00414480(&local_20);
  return;
}

