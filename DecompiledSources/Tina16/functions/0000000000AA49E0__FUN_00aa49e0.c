/* Ghidra address: 00aa49e0 */
/* Ghidra symbol: FUN_00aa49e0 */


undefined4
FUN_00aa49e0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined7 uVar13;
  undefined8 uVar12;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined8 in_stack_ffffffffffffff68;
  undefined8 local_30;
  
  local_30 = 0;
  uVar12 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff68 >> 0x20),param_5);
  lVar15 = param_3;
  uVar5 = FUN_00aa0630(param_1,param_2,param_3,param_4,uVar12,param_6,param_7);
  uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
  param_5 = param_5 + *(int *)(param_1 + 100);
  if (((0 < *(int *)(param_1 + 0x580)) &&
      (iVar14 = *(int *)(param_1 + 0x580) - *(int *)(*(longlong *)(param_1 + 0x18) + 0x94),
      *(int *)(param_3 + 4) + -0x32 <= iVar14)) && (iVar14 <= *(int *)(param_3 + 0xc) + 0x32)) {
    lVar3 = *(longlong *)(param_1 + 0x578);
    if (((lVar3 == 0) || (*(longlong *)(lVar3 + 0x198) == *(longlong *)PTR_DAT_02001ae8)) ||
       (*(char *)(*(longlong *)(param_1 + 0x18) + 0x91) == '\0')) {
      if (*(byte *)(param_1 + 0x560) < 8) {
        bVar16 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                  (*(byte *)(param_1 + 0x560) & 0x1f) & 9U) != 0;
      }
      else {
        bVar16 = false;
      }
      if (!bVar16) {
        bVar1 = *(byte *)(param_1 + 0x568);
        if (bVar1 < 0x10) {
          bVar16 = ((int)CONCAT62((int6)((ulonglong)lVar15 >> 0x10),1) << (bVar1 & 0x1f) & 0x334U)
                   != 0;
          uVar13 = 3;
        }
        else {
          bVar16 = false;
          uVar13 = 0;
        }
        if (bVar16) {
          iVar8 = *(int *)(param_1 + 0x564);
          if (0x19 < iVar8) {
            iVar8 = 0x1a;
          }
          if (bVar1 == 4) {
            FUN_00416780(&local_30,
                         *(undefined2 *)
                          (PTR_u_abcdefghijklmnopqrstuvwxyz_01e78fa0 + (longlong)iVar8 * 2 + -2));
          }
          else if (bVar1 == 5) {
            FUN_00414b50(&local_30,(&PTR_u_ABCDEFGHIJKLMNOPQRSTUVWXYZ_01e78fa8)[iVar8]);
          }
          else if (bVar1 == 8) {
            FUN_00416780(&local_30,
                         *(undefined2 *)
                          (PTR_u_ABCDEFGHIJKLMNOPQRSTUVWXYZ_01e78fa8 + (longlong)iVar8 * 2 + -2));
          }
          else if (bVar1 == 9) {
            FUN_00414b50(&local_30,(&PTR_u_xxvi_01e79078)[iVar8]);
          }
          else {
            FUN_0043f750(&local_30,*(undefined4 *)(param_1 + 0x564));
          }
          FUN_005ff880(param_2,*(undefined8 *)(param_1 + 0x570));
          uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x570) + 0x28);
          if (((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x90) & 1) != 0) &&
             (cVar4 = FUN_00781870(), cVar4 != '\0')) {
            uVar12 = FUN_00781840();
            uVar6 = FUN_007793c0(uVar12,uVar6);
          }
          uVar6 = FUN_005fbf20(uVar6);
          FUN_005fc860(param_2[0xe],uVar6);
          FUN_00416ad0(&local_30,&DAT_00aa4fdc);
          uVar12 = FUN_005ffa40(param_2);
          uVar6 = thunk_FUN_03b994b9(uVar12,1);
          uVar12 = FUN_005ffa40(param_2);
          uVar7 = thunk_FUN_041afa90(uVar12,0x18);
          iVar8 = FUN_005fdff0(param_2,local_30);
          (**(code **)(*param_2 + 0x120))(param_2,(param_5 - iVar8) + -10,iVar14,local_30);
          uVar12 = FUN_005ffa40(param_2);
          thunk_FUN_041afa90(uVar12,uVar7);
          uVar12 = FUN_005ffa40(param_2);
          thunk_FUN_03b994b9(uVar12,uVar6);
        }
        else {
          if (bVar1 < 8) {
            bVar16 = ((int)CONCAT71(uVar13,1) << (bVar1 & 0x1f) & 0x8aU) != 0;
          }
          else {
            bVar16 = false;
          }
          if (bVar16) {
            uVar7 = *(undefined4 *)(*(longlong *)(param_2[0xf] + 0x18) + 0x28);
            uVar9 = FUN_005fd660(param_2[0xf]);
            uVar10 = *(undefined4 *)(*(longlong *)(param_1 + 0x570) + 0x28);
            if (((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x90) & 1) != 0) &&
               (cVar4 = FUN_00781870(), cVar4 != '\0')) {
              uVar12 = FUN_00781840();
              uVar10 = FUN_007793c0(uVar12,uVar10);
            }
            uVar10 = FUN_005fbf20(uVar10);
            FUN_005fd4e0(param_2[0xf],uVar10);
            FUN_005fd670(param_2[0xf],0);
            lVar15 = param_2[0x10];
            uVar2 = *(undefined1 *)(*(longlong *)(lVar15 + 0x18) + 0x38);
            uVar10 = *(undefined4 *)(*(longlong *)(lVar15 + 0x18) + 0x28);
            FUN_005fdcb0(lVar15,0);
            uVar11 = *(undefined4 *)(*(longlong *)(param_1 + 0x570) + 0x28);
            if (((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x90) & 1) != 0) &&
               (cVar4 = FUN_00781870(), cVar4 != '\0')) {
              uVar12 = FUN_00781840();
              uVar11 = FUN_007793c0(uVar12,uVar11);
            }
            uVar11 = FUN_005fbf20(uVar11);
            FUN_005fdab0(param_2[0x10],uVar11);
            cVar4 = *(char *)(param_1 + 0x568);
            if (cVar4 == '\x01') {
              FUN_005fdcb0(param_2[0x10],1);
              (**(code **)(*param_2 + 0xa0))
                        (param_2,param_5 + -0x10,iVar14 + -7,param_5 + -9,CONCAT44(uVar6,iVar14));
            }
            else if (cVar4 == '\x03') {
              (**(code **)(*param_2 + 0xa0))
                        (param_2,param_5 + -0xf,iVar14 + -6,param_5 + -10,
                         CONCAT44(uVar6,iVar14 + -1));
            }
            else if (cVar4 == '\a') {
              (**(code **)(*param_2 + 0xf8))
                        (param_2,param_5 + -0xf,iVar14 + -6,param_5 + -10,
                         CONCAT44(uVar6,iVar14 + -1));
            }
            FUN_005fdab0(param_2[0x10],uVar10);
            FUN_005fdcb0(param_2[0x10],uVar2);
            FUN_005fd4e0(param_2[0xf],uVar7);
            FUN_005fd670(param_2[0xf],uVar9);
          }
        }
      }
    }
    else {
      FUN_00a96620(lVar3,param_2,param_5 + -0x10,iVar14 - *(int *)(lVar3 + 0x1b4),
                   *(undefined8 *)(lVar3 + 0x198));
    }
  }
  FUN_00414480(&local_30);
  return uVar5;
}

