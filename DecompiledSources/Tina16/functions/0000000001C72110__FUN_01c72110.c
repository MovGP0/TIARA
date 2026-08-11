/* Ghidra address: 01c72110 */
/* Ghidra symbol: FUN_01c72110 */


void FUN_01c72110(longlong param_1,undefined8 param_2,ushort param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  undefined4 *puVar13;
  undefined8 local_c0;
  uint local_b8 [2];
  undefined1 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_79;
  undefined8 local_78;
  undefined1 local_70 [16];
  longlong *local_60;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c [5];
  
  local_50 = 0;
  if (*(char *)(param_1 + 0x24fa) != '\0') {
    FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x498),
                 (*(int *)(param_1 + 0x24d0) - param_4) + *(int *)(param_1 + 0x24c0));
    FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x4b0),
                 (*(int *)(param_1 + 0x24d4) - param_5) + *(int *)(param_1 + 0x24c4));
    uVar9 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
    FUN_01a98210(uVar9,&local_8c);
    FUN_00b95860(&local_8c,-local_8c,-local_88);
    uVar9 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
    puVar13 = &local_48;
    FUN_01a984b0(uVar9,*(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x498) + 0x14)
                 ,*(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x4b0) + 0x14),
                 &local_44,puVar13);
    uVar5 = (undefined4)((ulonglong)puVar13 >> 0x20);
    FUN_00b95860(&local_8c,local_44,local_48);
    FUN_01c74990(param_1,local_8c,local_88,local_84,CONCAT44(uVar5,local_80));
    goto LAB_01c728a5;
  }
  if (*(longlong *)(param_1 + 0x27a8) == 0) goto LAB_01c728a5;
  lVar10 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8));
  if (lVar10 == 0) goto LAB_01c728a5;
  FUN_01c70990(param_1,param_3,param_4,param_5);
  uVar9 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
  FUN_01a9a4e0(uVar9,&local_44,&local_48);
  local_60 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x27a8) + 0x58))
                       (*(longlong **)(param_1 + 0x27a8),local_44,local_48);
  uVar5 = FUN_0199c830(local_60);
  FUN_007e2da0(*(undefined8 *)(param_1 + 0xe08),uVar5);
  FUN_007e2da0(*(undefined8 *)(param_1 + 0xe00),uVar5);
  FUN_007e2da0(*(undefined8 *)(param_1 + 0xde8),uVar5);
  FUN_007e2da0(*(undefined8 *)(param_1 + 0xdf0),uVar5);
  uVar9 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
  FUN_01a982d0(uVar9,param_4,param_5,&local_44,&local_48);
  local_b8[0] = local_44;
  local_b0 = 0;
  local_a8 = local_48;
  local_a0 = 0;
  FUN_00442fd0(&local_50,L" X: %d  Y: %d",local_b8,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x1538),local_50);
  if (*(longlong *)(param_1 + 7000) != 0) goto LAB_01c728a5;
  local_3c[0] = local_44;
  local_40 = local_48;
  local_60 = (longlong *)0x0;
  cVar3 = FUN_019a4930(*(undefined8 *)(param_1 + 0x27a8),local_44,local_48,&local_60,&local_54);
  if (cVar3 == '\0') {
    FUN_01b1cd00(local_3c,&local_40);
    FUN_019a4820(*(undefined8 *)(param_1 + 0x27a8),local_3c[0],local_40,&local_60,&local_54,
                 &local_79);
    if (local_54 == -1) {
      FUN_00414480(*(longlong *)(param_1 + 0xa10) + 0xf0);
    }
    else if ((param_3 & 4) == 0) {
      if ((*PTR_DAT_020052b8 == '\0') && (*PTR_DAT_02004270 != '\0')) {
        if (*PTR_DAT_020052b8 != '\0') {
          cVar3 = FUN_0198a580(local_60);
          if (cVar3 == '\x04') {
            sVar4 = (**(code **)(*local_60 + 0xf8))(local_60);
            if (sVar4 == 0x68) {
              if ((param_3 & 1) == 0) {
                FUN_0064e140(*(undefined8 *)(param_1 + 0xa10),0x19);
              }
              else {
                FUN_0064e140(*(undefined8 *)(param_1 + 0xa10),0x1c);
              }
              goto LAB_01c728a5;
            }
          }
        }
        FUN_0064e140(*(undefined8 *)(param_1 + 0xa10),0x1c);
      }
      else {
        FUN_0064e140(*(undefined8 *)(param_1 + 0xa10),0);
      }
      goto LAB_01c728a5;
    }
  }
  if (local_60 == (longlong *)0x0) {
    local_60 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x27a8) + 0x58))
                         (*(longlong **)(param_1 + 0x27a8),local_44,local_48);
  }
  uVar11 = 0;
  if (local_60 != (longlong *)0x0) {
    uVar9 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
    uVar6 = (**(code **)(*local_60 + 0x130))(local_60,uVar9,local_44,local_48);
    uVar11 = (ulonglong)uVar6;
    if ((short)uVar6 == 0) {
      cVar3 = FUN_0198a580(local_60);
      if (cVar3 == '\x04') {
        cVar3 = (**(code **)(*local_60 + 0x2d8))(local_60);
        if ((cVar3 != '\0') && (*PTR_DAT_020052b8 == '\0')) {
          uVar9 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
          uVar6 = FUN_01d04ae0(local_60,uVar9,local_44,local_48);
          uVar11 = (ulonglong)uVar6;
          goto LAB_01c72698;
        }
      }
      cVar3 = FUN_01d3bd80(local_60);
      if (cVar3 != '\0') {
        uVar11 = CONCAT62((uint6)(ushort)(uVar6 >> 0x10),0x19);
      }
    }
LAB_01c72698:
    cVar3 = FUN_0198a580(local_60);
    if ((cVar3 == '\b') && (*(char *)(local_60[5] + 0x98) == '\x03')) {
      if ((*(int *)((longlong)local_60 + 0xc) != *(int *)(param_1 + 0x2518)) ||
         (((int)local_60[2] != *(int *)(param_1 + 0x251c) ||
          (*(char *)(*(longlong *)(param_1 + 0x2510) + 0xa9) == '\0')))) {
        FUN_01a64180(*(undefined8 *)(param_1 + 0x2510));
        uVar9 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
        FUN_01a98380(uVar9,*(undefined4 *)((longlong)local_60 + 0xc),(int)local_60[2],local_3c,
                     &local_40);
        local_c0 = FUN_00498310(local_3c[0],local_40);
        local_78 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0xa10),&local_c0);
        *(longlong *)(*(longlong *)(param_1 + 0x2510) + 0x4a0) = local_60[5];
        plVar1 = *(longlong **)(param_1 + 0x2510);
        uVar9 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
        fVar12 = (float)FUN_01a9a6d0(uVar9);
        lVar10 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
        *(float *)(plVar1 + 0x95) = (float)((double)fVar12 * *(double *)(lVar10 + 0x70));
        uVar9 = FUN_007ffaf0(param_1);
        iVar7 = FUN_00807790(uVar9);
        uVar9 = FUN_007ffaf0(param_1);
        iVar8 = FUN_008077f0(uVar9);
        iVar2 = (int)local_78;
        (**(code **)(*plVar1 + 0x290))
                  (plVar1,local_70,((iVar7 + iVar8) - (int)local_78) + -0x10,0,0);
        FUN_00423400(local_70,iVar2 + 0x10,local_78._4_4_);
        (**(code **)(**(longlong **)(param_1 + 0x2510) + 0x270))
                  (*(longlong **)(param_1 + 0x2510),local_70,0);
        uVar9 = FUN_00498310(*(undefined4 *)((longlong)local_60 + 0xc),(int)local_60[2]);
        *(undefined8 *)(param_1 + 0x2518) = uVar9;
      }
    }
  }
  FUN_0064e140(*(undefined8 *)(param_1 + 0xa10),uVar11);
LAB_01c728a5:
  FUN_00414480(&local_50);
  return;
}

