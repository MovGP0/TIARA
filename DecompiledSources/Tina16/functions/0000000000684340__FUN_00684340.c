/* Ghidra address: 00684340 */
/* Ghidra symbol: FUN_00684340 */


void FUN_00684340(longlong *param_1,int *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_40;
  int local_38;
  int local_34;
  longlong local_30;
  longlong *local_28;
  int local_20;
  int local_1c;
  
  local_40 = auStack_78;
  iVar1 = *param_2;
  if (iVar1 < 0x105) {
    if (iVar1 == 0x104) {
LAB_006844b3:
      puVar2 = auStack_78;
      if (param_3 != param_1[0xa0]) {
        local_40 = auStack_78;
        cVar3 = FUN_00659750(param_1,param_2);
joined_r0x006844e3:
        puVar2 = local_40;
        if (cVar3 != '\0') {
          return;
        }
      }
    }
    else if (iVar1 < 0x88) {
      if (iVar1 == 0x87) {
        local_40 = auStack_78;
        cVar3 = FUN_006838c0(param_1);
        puVar2 = local_40;
        if (cVar3 != '\0') {
          param_2[6] = 4;
          param_2[7] = 0;
          return;
        }
      }
      else if (iVar1 == 7) {
        local_40 = auStack_78;
        local_28 = (longlong *)FUN_007f9b70(param_1,1);
        puVar2 = local_40;
        if ((local_28 != (longlong *)0x0) &&
           (cVar3 = (**(code **)(*local_28 + 0x2c8))(local_28,param_1), puVar2 = local_40,
           cVar3 == '\0')) {
          return;
        }
      }
      else if (iVar1 == 8) {
        puVar2 = auStack_78;
        if ((*(uint *)((longlong)param_1 + 0xa4) & 0x20) != 0) {
          return;
        }
      }
      else {
        puVar2 = auStack_78;
        if ((iVar1 == 0x84) &&
           (puVar2 = auStack_78, (*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0)) {
          param_2[6] = -1;
          param_2[7] = -1;
          return;
        }
      }
    }
    else {
      if (iVar1 == 0x100) goto LAB_006844b3;
      if (iVar1 == 0x101) goto LAB_0068459f;
      puVar2 = auStack_78;
      if (iVar1 == 0x102) {
        local_40 = auStack_78;
        if (((short)param_2[2] == 8) && (local_40 = auStack_78, param_1[0x9f] != 0)) {
          local_30 = param_1[0x9f];
          local_40 = auStack_78;
          uVar4 = thunk_FUN_04118143(local_30,0xfffffff0);
          if ((uVar4 & 0x800) == 0x800) {
            return;
          }
        }
        cVar3 = FUN_00659a70(param_1,param_2);
        if (cVar3 != '\0') {
          return;
        }
        if ((((short)param_2[2] == 0xd) || (puVar2 = local_40, (short)param_2[2] == 0x1b)) &&
           (cVar3 = FUN_006838c0(param_1), puVar2 = local_40, cVar3 != '\0')) {
          FUN_006838f0(param_1,0);
          return;
        }
      }
    }
LAB_006846ee:
    local_40 = puVar2;
    local_58 = *(undefined8 *)(param_2 + 4);
    uVar5 = thunk_FUN_03a65bf1(param_4,param_3,*param_2,*(undefined8 *)(param_2 + 2));
    *(undefined8 *)(param_2 + 6) = uVar5;
    if ((*param_2 == 0x203) && ((*(uint *)(param_1 + 0x14) & 0x80) != 0)) {
      pcVar6 = (code *)FUN_00411550(param_1,0xffe9);
      (*pcVar6)(param_1);
    }
  }
  else {
    if (iVar1 < 0xbd01) {
      if (iVar1 != 0xbd00) {
        if (iVar1 != 0x105) {
          if (iVar1 == 0x200) {
            local_40 = auStack_78;
            FUN_0080e5c0(*(undefined8 *)PTR_DAT_02004030,param_1,param_2);
            puVar2 = local_40;
          }
          else {
            puVar2 = auStack_78;
            if ((iVar1 == 0x205) &&
               (local_40 = auStack_78, cVar3 = FUN_0067d420(param_1), puVar2 = local_40,
               cVar3 != '\0')) {
              local_20 = (int)(short)param_2[4];
              local_1c = (int)*(short *)((longlong)param_2 + 0x12);
              uVar5 = FUN_0065b870(param_1);
              thunk_FUN_0411b3be(param_3,uVar5,&local_20,1);
              local_34 = local_1c;
              iVar1 = local_34;
              local_34._0_2_ = (undefined2)local_1c;
              local_38 = CONCAT22((undefined2)local_34,(short)local_20);
              param_2[4] = local_38;
              local_34 = iVar1;
              (**(code **)(*param_1 + 0x150))(param_1,param_2);
              return;
            }
          }
          goto LAB_006846ee;
        }
LAB_0068459f:
        local_40 = auStack_78;
        cVar3 = FUN_006598f0(param_1,param_2);
        goto joined_r0x006844e3;
      }
    }
    else if (((iVar1 != 0xbd02) && (iVar1 != 0xbd04)) && (puVar2 = auStack_78, iVar1 != 0xbd06))
    goto LAB_006846ee;
    (**(code **)(*param_1 + 0x150))(param_1,param_2);
  }
  return;
}

