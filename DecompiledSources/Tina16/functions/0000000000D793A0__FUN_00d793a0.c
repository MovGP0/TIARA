/* Ghidra address: 00d793a0 */
/* Ghidra symbol: FUN_00d793a0 */


void FUN_00d793a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar11;
  undefined8 uVar10;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  cVar8 = FUN_00d5a0b0(*(undefined8 *)(param_1 + 0x120));
  if ((((cVar8 != '\0') && (0 < *(int *)(param_1 + 0x84))) && (0 < *(int *)(param_1 + 0x88))) &&
     (*(char *)(param_1 + 0x79) != '\x19')) {
    if (((*(int *)(param_1 + 0xe4) == 0) && (*(int *)(param_1 + 0xe8) == 0)) &&
       ((*(int *)(param_1 + 0xf0) == 0 && (*(int *)(param_1 + 0xec) == 0)))) {
      FUN_00d78c00(param_1,param_2,param_3);
    }
    else {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
      uVar9 = (**(code **)(*plVar6 + 0x58))(plVar6);
      uVar2 = *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 8) + 0x78);
      bVar3 = *(byte *)(param_1 + 0x128);
      if (bVar3 < 2) {
        uVar10 = CONCAT44(uVar11,*(undefined4 *)(param_1 + 0x88));
        FUN_004238d0(&local_58,0,0,*(undefined4 *)(param_1 + 0x84),uVar10);
        uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
      }
      else if (bVar3 == 2) {
        local_58 = *(ulonglong *)(*(longlong *)(param_1 + 0x120) + 0x10);
        local_50 = *(ulonglong *)(*(longlong *)(param_1 + 0x120) + 0x18);
        uVar10 = CONCAT44(uVar11,*(undefined4 *)(param_1 + 0x88));
        FUN_004238d0(local_78,0,0,*(undefined4 *)(param_1 + 0x84),uVar10);
        uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
        FUN_00d57690(local_68,&local_58,local_78);
      }
      else if ((byte)(bVar3 - 3) < 2) {
        uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x120) + 0x10);
        local_58._4_4_ = (int)(uVar1 >> 0x20);
        local_50._0_4_ = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x18);
        local_50 = CONCAT44(local_58._4_4_ + *(int *)(param_1 + 0x88),(int)local_50);
        uVar10 = CONCAT44(uVar11,*(undefined4 *)(param_1 + 0x88));
        local_58 = uVar1;
        FUN_004238d0(local_78,0,0,*(undefined4 *)(param_1 + 0x84),uVar10);
        uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
        FUN_00d57690(local_68,&local_58,local_78);
      }
      else if ((byte)(bVar3 - 5) < 2) {
        local_58 = *(ulonglong *)(*(longlong *)(param_1 + 0x120) + 0x10);
        local_50._4_4_ =
             (int)((ulonglong)*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x18) >> 0x20);
        local_50 = CONCAT44(local_50._4_4_,(int)local_58 + *(int *)(param_1 + 0x84));
        uVar10 = CONCAT44(uVar11,*(undefined4 *)(param_1 + 0x88));
        FUN_004238d0(local_78,0,0,*(undefined4 *)(param_1 + 0x84),uVar10);
        uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
        FUN_00d57690(local_68,&local_58,local_78);
      }
      lVar7 = *(longlong *)(param_1 + 0x120);
      uVar10 = CONCAT44(uVar11,*(int *)(lVar7 + 0x1c) - *(int *)(param_1 + 0xec));
      FUN_004238d0(local_38,*(int *)(lVar7 + 0x10) + *(int *)(param_1 + 0xe4),
                   *(int *)(lVar7 + 0x14) + *(int *)(param_1 + 0xe8),
                   *(int *)(lVar7 + 0x18) - *(int *)(param_1 + 0xf0),uVar10);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),local_50._4_4_ - *(int *)(param_1 + 0xec));
      FUN_004238d0(local_48,(int)local_58 + *(int *)(param_1 + 0xe4),
                   local_58._4_4_ + *(int *)(param_1 + 0xe8),
                   (int)local_50 - *(int *)(param_1 + 0xf0),uVar10);
      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),*(undefined1 *)(param_1 + 0x128));
      FUN_00d78930(param_1,param_2,local_38,local_48,uVar10,
                   *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x2a));
      lVar7 = *(longlong *)(param_1 + 0x120);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),
                        *(int *)(lVar7 + 0x14) + *(int *)(param_1 + 0xe8));
      FUN_004238d0(local_38,*(int *)(lVar7 + 0x10) + *(int *)(param_1 + 0xe4),*(int *)(lVar7 + 0x14)
                   ,*(int *)(lVar7 + 0x18) - *(int *)(param_1 + 0xf0),uVar10);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),local_58._4_4_ + *(int *)(param_1 + 0xe8));
      FUN_004238d0(local_48,(int)local_58 + *(int *)(param_1 + 0xe4),local_58._4_4_,
                   (int)local_50 - *(int *)(param_1 + 0xf0),uVar10);
      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),*(undefined1 *)(param_1 + 0x129));
      FUN_00d78930(param_1,param_2,local_38,local_48,uVar10,
                   *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x28));
      lVar7 = *(longlong *)(param_1 + 0x120);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),*(int *)(lVar7 + 0x1c));
      FUN_004238d0(local_38,*(int *)(lVar7 + 0x10) + *(int *)(param_1 + 0xe4),
                   *(int *)(lVar7 + 0x1c) - *(int *)(param_1 + 0xec),
                   *(int *)(lVar7 + 0x18) - *(int *)(param_1 + 0xf0),uVar10);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),local_50._4_4_);
      FUN_004238d0(local_48,(int)local_58 + *(int *)(param_1 + 0xe4),
                   local_50._4_4_ - *(int *)(param_1 + 0xec),
                   (int)local_50 - *(int *)(param_1 + 0xf0),uVar10);
      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),*(undefined1 *)(param_1 + 0x129));
      FUN_00d78930(param_1,param_2,local_38,local_48,uVar10,
                   *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x28));
      lVar7 = *(longlong *)(param_1 + 0x120);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),
                        *(int *)(lVar7 + 0x1c) - *(int *)(param_1 + 0xec));
      FUN_004238d0(local_38,*(int *)(lVar7 + 0x10),*(int *)(lVar7 + 0x14) + *(int *)(param_1 + 0xe8)
                   ,*(int *)(lVar7 + 0x10) + *(int *)(param_1 + 0xe4),uVar10);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),local_50._4_4_ - *(int *)(param_1 + 0xec));
      FUN_004238d0(local_48,local_58 & 0xffffffff,local_58._4_4_ + *(int *)(param_1 + 0xe8),
                   (int)local_58 + *(int *)(param_1 + 0xe4),uVar10);
      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),*(undefined1 *)(param_1 + 0x129));
      FUN_00d78930(param_1,param_2,local_38,local_48,uVar10,
                   *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x28));
      lVar7 = *(longlong *)(param_1 + 0x120);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),
                        *(int *)(lVar7 + 0x1c) - *(int *)(param_1 + 0xec));
      FUN_004238d0(local_38,*(int *)(lVar7 + 0x18) - *(int *)(param_1 + 0xf0),
                   *(int *)(lVar7 + 0x14) + *(int *)(param_1 + 0xe8),*(int *)(lVar7 + 0x18),uVar10);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),local_50._4_4_ - *(int *)(param_1 + 0xec));
      FUN_004238d0(local_48,(int)local_50 - *(int *)(param_1 + 0xf0),
                   local_58._4_4_ + *(int *)(param_1 + 0xe8),local_50 & 0xffffffff,uVar10);
      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),*(undefined1 *)(param_1 + 0x129));
      FUN_00d78930(param_1,param_2,local_38,local_48,uVar10,
                   *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x28));
      uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
      FUN_00423b50(&local_58,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x120) + 0x10);
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x120) + 0x14);
      FUN_004238d0(local_38,iVar4,iVar5,iVar4 + *(int *)(param_1 + 0xe4),
                   CONCAT44(uVar11,iVar5 + *(int *)(param_1 + 0xe8)));
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
      (**(code **)(*plVar6 + 0x80))(plVar6,*(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x29));
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 8);
      *(undefined1 *)(lVar7 + 0x78) = *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x29);
      FUN_00d588c0(lVar7,param_2,local_58 & 0xffffffff,local_58._4_4_,local_38);
      lVar7 = *(longlong *)(param_1 + 0x120);
      FUN_004238d0(local_38,*(int *)(lVar7 + 0x18) - *(int *)(param_1 + 0xf0),
                   *(undefined4 *)(lVar7 + 0x14),*(int *)(lVar7 + 0x18),
                   *(int *)(lVar7 + 0x14) + *(int *)(param_1 + 0xe8));
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
      (**(code **)(*plVar6 + 0x80))(plVar6,*(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x29));
      lVar7 = *(longlong *)(param_1 + 0x120);
      *(undefined1 *)(*(longlong *)(lVar7 + 8) + 0x78) = *(undefined1 *)(lVar7 + 0x29);
      FUN_00d588c0(*(undefined8 *)(lVar7 + 8),param_2,(int)local_50 - *(int *)(param_1 + 0xf0),
                   local_58._4_4_,local_38);
      lVar7 = *(longlong *)(param_1 + 0x120);
      FUN_004238d0(local_38,*(int *)(lVar7 + 0x10),*(int *)(lVar7 + 0x1c) - *(int *)(param_1 + 0xec)
                   ,*(int *)(lVar7 + 0x10) + *(int *)(param_1 + 0xe4),*(undefined4 *)(lVar7 + 0x1c))
      ;
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
      (**(code **)(*plVar6 + 0x80))(plVar6,*(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x29));
      lVar7 = *(longlong *)(param_1 + 0x120);
      *(undefined1 *)(*(longlong *)(lVar7 + 8) + 0x78) = *(undefined1 *)(lVar7 + 0x29);
      FUN_00d588c0(*(undefined8 *)(lVar7 + 8),param_2,local_58 & 0xffffffff,
                   local_50._4_4_ - *(int *)(param_1 + 0xec),local_38);
      lVar7 = *(longlong *)(param_1 + 0x120);
      FUN_004238d0(local_38,*(int *)(lVar7 + 0x18) - *(int *)(param_1 + 0xf0),
                   *(int *)(lVar7 + 0x1c) - *(int *)(param_1 + 0xec),*(undefined4 *)(lVar7 + 0x18),
                   *(undefined4 *)(lVar7 + 0x1c));
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
      (**(code **)(*plVar6 + 0x80))(plVar6,*(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x29));
      lVar7 = *(longlong *)(param_1 + 0x120);
      *(undefined1 *)(*(longlong *)(lVar7 + 8) + 0x78) = *(undefined1 *)(lVar7 + 0x29);
      FUN_00d588c0(*(undefined8 *)(lVar7 + 8),param_2,(int)local_50 - *(int *)(param_1 + 0xf0),
                   local_50._4_4_ - *(int *)(param_1 + 0xec),local_38);
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
      (**(code **)(*plVar6 + 0x80))(plVar6,uVar9);
      *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 8) + 0x78) = uVar2;
      FUN_00d76dd0(param_1,param_2);
      FUN_00d75ef0(param_1);
      FUN_00d76ce0(param_1,param_2,param_3);
    }
  }
  return;
}

