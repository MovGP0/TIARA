/* Ghidra address: 01ba5ef0 */
/* Ghidra symbol: FUN_01ba5ef0 */


void FUN_01ba5ef0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  uint local_48;
  int local_44;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  local_60 = auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_28 = param_2;
  if (*(longlong *)(param_2 + 0x510) == 0) {
    uVar5 = FUN_00c3d400(&LAB_00c3a6d0,1);
    *(undefined8 *)(local_28 + 0x510) = uVar5;
  }
  else {
    local_60 = auStack_98;
    FUN_00c3f140(*(longlong *)(param_2 + 0x510));
  }
  plVar1 = *(longlong **)(param_1 + 0x6d0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  local_30 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar2);
  FUN_00c3f350(local_30,*(undefined8 *)(local_28 + 0x510));
  uVar2 = FUN_00c41060(local_30,local_40);
  FUN_01d01990(local_28,uVar2);
  local_38 = FUN_00c41110(local_30);
  local_3c = FUN_00c41060(local_30,local_40);
  local_44 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4c0);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4e0) + -1;
  if (local_44 <= iVar7) {
    iVar7 = (iVar7 - local_44) + 1;
    do {
      FUN_0084e320(*(undefined8 *)(param_1 + 0x6f0),&local_68,1,local_44);
      iVar3 = FUN_00416db0(local_68,L"*GND*");
      if (iVar3 == 0) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4c0);
        iVar4 = local_44 - iVar3;
        if (iVar4 < 4) {
          *(undefined4 *)(local_28 + 0x518 + (longlong)iVar4 * 4) = 0xffffffff;
        }
        else {
          lVar6 = (longlong)((local_44 - iVar3) + -4);
          local_48 = *(uint *)(local_28 + 0x518 + lVar6 * 4) & 0xffff | 0xffff0000;
          *(uint *)(local_28 + 0x518 + lVar6 * 4) = local_48;
        }
      }
      else {
        lVar6 = *(longlong *)(param_1 + 0x6f0);
        if (local_44 - *(int *)(lVar6 + 0x4c0) < 4) {
          FUN_0084e320(lVar6,&local_70,1,local_44);
          uVar2 = FUN_01ba5e20(auStack_98,local_38,local_3c,local_70);
          *(undefined4 *)
           (local_28 + 0x518 +
           (longlong)(local_44 - *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4c0)) * 4) = uVar2;
        }
        else {
          iVar4 = local_44 + -4;
          local_48 = *(uint *)(local_28 + 0x518 + (longlong)(iVar4 - *(int *)(lVar6 + 0x4c0)) * 4) &
                     0xffff;
          FUN_0084e320(lVar6,&local_78,1,local_44);
          iVar3 = FUN_01ba5e20(auStack_98,local_38,local_3c,local_78);
          local_48 = local_48 | iVar3 << 0x10;
          *(uint *)(local_28 + 0x518 +
                   (longlong)(iVar4 - *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4c0)) * 4) =
               local_48;
        }
      }
      local_44 = local_44 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414560(&local_78,3);
  return;
}

