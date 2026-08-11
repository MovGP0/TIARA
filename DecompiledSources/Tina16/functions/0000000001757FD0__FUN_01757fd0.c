/* Ghidra address: 01757fd0 */
/* Ghidra symbol: FUN_01757fd0 */


void FUN_01757fd0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5,char param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff20;
  undefined8 uVar11;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [3];
  undefined8 local_78;
  short local_6d;
  short local_6b;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined4 local_65;
  undefined4 local_5d;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  bVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))(*(longlong **)(param_1 + 0x28));
  if ((((param_2 != (longlong *)0x0) && (cVar5 = FUN_0175ad40(param_1,param_2), cVar5 != '\0')) ||
      (local_res18 != 0)) && (lVar1 = *(longlong *)(param_1 + 0x28), *(char *)(lVar1 + 0xb) == '\0')
     ) {
    bVar10 = *(char *)(param_1 + 0x38) == '\0';
    if (param_6 == '\0') {
      if (bVar4 < 0x4a) {
        if (bVar4 == 0x49) {
          local_58 = FUN_00498310(0x1c,0xffffffe6);
          local_50 = FUN_00498310(0xb,0xffffffe4);
          local_48 = FUN_00498310(0xb,0xffffffe8);
          local_40 = FUN_00498310(0x1c,0xffffffdd);
          local_38 = FUN_00498310(0xb,0xffffffdb);
          local_30 = FUN_00498310(0xb,0xffffffdf);
        }
        else if (bVar4 == 0x46) {
          local_58 = FUN_00498310(0x1c,0xffffffe6);
          local_50 = FUN_00498310(0xb,0xffffffe3);
          local_48 = FUN_00498310(0xb,0xffffffe8);
        }
        else if (bVar4 == 0x47) {
          local_58 = FUN_00498310(0x1c,0xffffffe6);
          local_50 = FUN_00498310(10,0xffffffe3);
          local_48 = FUN_00498310(10,0xffffffea);
        }
        else if (bVar4 == 0x48) {
          local_58 = FUN_00498310(0x1c,0xffffffe6);
          local_50 = FUN_00498310(0xb,0xffffffe3);
          local_48 = FUN_00498310(0xb,0xffffffe8);
        }
      }
      else if (bVar4 == 0x4e) {
        local_58 = FUN_00498310(0x1c,0xffffffe6);
        local_50 = FUN_00498310(0xb,0xffffffe3);
        local_48 = FUN_00498310(0xb,0xffffffe8);
        local_40 = FUN_00498310(0x1c,0xffffffd3);
        local_38 = FUN_00498310(0xb,0xffffffd0);
        local_30 = FUN_00498310(0xb,0xffffffd5);
      }
      else if (bVar4 == 0x67) {
        local_58 = FUN_00498310(0x1c,0xffffffde);
        local_50 = FUN_00498310(0xd,0xffffffe0);
        local_48 = FUN_00498310(0xd,0xffffffdc);
      }
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a0))
                (*(longlong **)(param_1 + 0x28),param_2,param_5,0);
      if (bVar10) {
        uVar9 = 0;
        if (param_2 != (longlong *)0x0) {
          FUN_01a9a440(param_2,0);
          uVar2 = local_58;
          uVar3 = local_58._4_4_;
          FUN_01a9cce0(param_2,local_58 & 0xffffffff,local_58._4_4_);
          FUN_01a9cd30(param_2,local_48 & 0xffffffff,local_48._4_4_);
          uVar8 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                            (*(longlong **)(param_1 + 0x28),param_2);
          (**(code **)(*param_2 + 0xb8))(param_2,uVar8);
          FUN_01a9cce0(param_2,uVar2 & 0xffffffff,uVar3);
          uVar9 = FUN_01a9cd30(param_2,local_50 & 0xffffffff,local_50._4_4_);
        }
        if (local_res18 != 0) {
          uVar11 = CONCAT44(uVar7,(undefined4)local_50);
          uVar9 = FUN_01243890(&local_a0,local_res18,local_res20,local_58 & 0xffffffff,
                               local_58._4_4_,uVar11,local_50._4_4_,1,0x8000);
          uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
        }
        if ((byte)(bVar4 + 0xb8) < 8) {
          bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1) << (bVar4 + 0xb8 & 0x1f) & 0x42U)
                   != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          if (param_2 != (longlong *)0x0) {
            FUN_01a9a440(param_2,0);
            uVar2 = local_40;
            uVar3 = local_40._4_4_;
            FUN_01a9cce0(param_2,local_40 & 0xffffffff,local_40._4_4_);
            FUN_01a9cd30(param_2,local_30 & 0xffffffff,local_30._4_4_);
            uVar8 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                              (*(longlong **)(param_1 + 0x28),param_2);
            (**(code **)(*param_2 + 0xb8))(param_2,uVar8);
            FUN_01a9cce0(param_2,uVar2 & 0xffffffff,uVar3);
            FUN_01a9cd30(param_2,local_38 & 0xffffffff,local_38._4_4_);
          }
          if (local_res18 != 0) {
            FUN_01243890(&local_a8,local_res18,local_res20,local_40 & 0xffffffff,local_40._4_4_,
                         CONCAT44(uVar7,(undefined4)local_38),local_38._4_4_,1,0x8000);
          }
        }
      }
      else {
        uVar9 = 0;
        if (param_2 != (longlong *)0x0) {
          FUN_01a9a440(param_2,0);
          uVar2 = local_58;
          uVar3 = local_58._4_4_;
          FUN_01a9cce0(param_2,local_58 & 0xffffffff,local_58._4_4_);
          FUN_01a9cd30(param_2,local_50 & 0xffffffff,local_50._4_4_);
          uVar8 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                            (*(longlong **)(param_1 + 0x28),param_2);
          (**(code **)(*param_2 + 0xb8))(param_2,uVar8);
          FUN_01a9cce0(param_2,uVar2 & 0xffffffff,uVar3);
          uVar9 = FUN_01a9cd30(param_2,local_48 & 0xffffffff,local_48._4_4_);
        }
        if (local_res18 != 0) {
          uVar11 = CONCAT44(uVar7,(undefined4)local_48);
          uVar9 = FUN_01243890(local_90,local_res18,local_res20,local_58 & 0xffffffff,local_58._4_4_
                               ,uVar11,local_48._4_4_,1,0x8000);
          uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
        }
        if ((byte)(bVar4 + 0xb8) < 8) {
          bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1) << (bVar4 + 0xb8 & 0x1f) & 0x42U)
                   != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          if (param_2 != (longlong *)0x0) {
            FUN_01a9a440(param_2,0);
            uVar2 = local_40;
            uVar3 = local_40._4_4_;
            FUN_01a9cce0(param_2,local_40 & 0xffffffff,local_40._4_4_);
            FUN_01a9cd30(param_2,local_38 & 0xffffffff,local_38._4_4_);
            uVar8 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                              (*(longlong **)(param_1 + 0x28),param_2);
            (**(code **)(*param_2 + 0xb8))(param_2,uVar8);
            FUN_01a9cce0(param_2,uVar2 & 0xffffffff,uVar3);
            FUN_01a9cd30(param_2,local_30 & 0xffffffff,local_30._4_4_);
          }
          if (local_res18 != 0) {
            FUN_01243890(&local_98,local_res18,local_res20,local_40 & 0xffffffff,local_40._4_4_,
                         CONCAT44(uVar7,(undefined4)local_30),local_30._4_4_,1,0x8000);
          }
        }
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x40) == 0) {
        uVar9 = FUN_01d06fb0(lVar1,*(undefined1 *)(lVar1 + 0xd1));
        *(undefined8 *)(param_1 + 0x40) = uVar9;
      }
      if (((*(longlong *)(param_1 + 0x40) != 0) &&
          (cVar5 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28)), -1 < cVar5)) &&
         (cVar5 = FUN_00c3d380(*(undefined8 *)(param_1 + 0x40),&local_78,&local_6d), cVar5 != '\0'))
      {
        iVar6 = FUN_00c3c520(local_69,local_68,local_67);
        if (bVar10) {
          cVar5 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
          *(int *)(param_1 + 0x10) = (int)cVar5;
        }
        else {
          cVar5 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
          *(int *)(param_1 + 0x10) = iVar6 + cVar5;
        }
        if (param_2 != (longlong *)0x0) {
          FUN_01a9d8b0(param_2,*(undefined1 *)(param_1 + 0x10));
          FUN_01a9a720(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10));
          uVar7 = FUN_0173cca0(*(undefined8 *)(param_1 + 0x28),param_5,param_6);
          FUN_01a9a770(param_2,uVar7);
          FUN_01a9a780(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd1),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd3));
        }
        uVar9 = FUN_01a9f060(local_69,local_68,local_67,local_66,local_65,local_78,
                             *(undefined1 *)(param_1 + 0x10));
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),uVar9);
        if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x10)) {
          FUN_00410f20(uVar9);
        }
        else {
          if (param_2 != (longlong *)0x0) {
            FUN_01a9fa10(param_2,(longlong)local_6d,(longlong)local_6b,local_69,local_68,local_67,
                         local_66,local_65,local_5d,local_78);
          }
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
        }
      }
    }
  }
  FUN_00417840(&local_a8,&LAB_00b9fca0,4);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

