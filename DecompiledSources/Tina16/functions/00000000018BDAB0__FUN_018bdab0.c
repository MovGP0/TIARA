/* Ghidra address: 018bdab0 */
/* Ghidra symbol: FUN_018bdab0 */


void FUN_018bdab0(longlong *param_1,int param_2,undefined8 param_3,double param_4,double param_5,
                 double param_6,double param_7,char param_8)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  undefined1 local_98;
  undefined4 local_90;
  longlong *local_80;
  longlong *local_78;
  char local_69;
  undefined8 local_68;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  
  local_80 = param_1;
  local_69 = FUN_004113d0(param_3,&PTR_FUN_0188b258);
  if (local_69 == '\0') {
    *(undefined1 *)(local_80 + 0x19) = 2;
  }
  else {
    *(undefined1 *)(local_80 + 0x19) = 1;
  }
  local_78 = (longlong *)(**(code **)(*local_80 + 8))(local_80,param_2);
  if (local_78 != (longlong *)0x0) {
    lVar1 = local_78[0x35];
    lVar2 = local_78[0x39];
    if (((char)local_78[0x36] != '\0') && (param_2 % 2 == 1)) {
      local_78[0x35] = lVar2;
      local_78[0x39] = lVar1;
    }
    local_68 = 0;
    if (local_69 == '\0') {
      local_68 = thunk_FUN_03976db5(0,0,10000,10000);
      uVar13 = FUN_005ffa40(param_3);
      thunk_FUN_0411a732(uVar13,local_68);
      local_50 = FUN_005ffa40(param_3);
      uVar9 = FUN_0040c770(param_6);
      uVar10 = FUN_0040c770(param_7);
      iVar11 = FUN_0040c770(param_6 + (double)local_78[0x47] * *(double *)PTR_DAT_02002c30 * param_4
                           );
      iVar12 = FUN_0040c770(param_7 + (double)local_78[0x45] * *(double *)PTR_DAT_02002c30 * param_5
                           );
      local_a8 = (double)CONCAT44(local_a8._4_4_,iVar12 + -1);
      FUN_00428be0(local_50,uVar9,uVar10,iVar11 + -1);
    }
    *(char *)((longlong)local_78 + 0xc1) = local_69;
    local_a8 = param_6;
    local_a0 = param_7;
    (**(code **)(*local_78 + 600))(local_78,param_3,param_4,param_5);
    dVar3 = (double)local_78[0x35];
    dVar4 = *(double *)PTR_DAT_02002c30;
    dVar5 = (double)local_78[0x3c];
    dVar6 = *(double *)PTR_DAT_02002c30;
    local_58 = FUN_01951400(local_78);
    iVar11 = *(int *)(local_58 + 0x10);
    local_5c = 0;
    if (-1 < iVar11 + -1) {
      do {
        plVar14 = (longlong *)FUN_004aeac0(local_58,local_5c);
        cVar8 = FUN_004113d0(plVar14,&PTR_FUN_01921f40);
        if ((cVar8 != '\0') && (cVar8 = FUN_018bd8f0(auStack_c8,plVar14), cVar8 != '\0')) {
          if (local_69 == '\0') {
            bVar7 = *(byte *)(plVar14 + 0x43) & 1;
          }
          else {
            bVar7 = *(byte *)(plVar14 + 0x43) & 4;
          }
          if (bVar7 != 0) {
            *(char *)((longlong)plVar14 + 0xc1) = local_69;
            FUN_018b9ee0(local_80,plVar14,0);
            cVar8 = FUN_004113d0(plVar14,&PTR_FUN_01925478);
            if (cVar8 != '\0') {
              uVar9 = (**(code **)*local_80)(local_80);
              *(undefined4 *)(plVar14 + 0x76) = uVar9;
              *(int *)((longlong)plVar14 + 0x3b4) = (int)local_80[7];
              plVar14[0x79] = local_80[8];
            }
            cVar8 = (**(code **)(*plVar14 + 0x2a8))(plVar14);
            if (cVar8 == '\0') {
              if ((param_8 == '\0') || ((*(byte *)((longlong)plVar14 + 0xc4) & 1) == 0)) {
                local_98 = 0;
              }
              else {
                local_98 = 1;
              }
              local_90 = 0x1fffffff;
              local_a8 = param_6 + dVar3 * dVar4 * param_4;
              local_a0 = param_7 + dVar5 * dVar6 * param_5;
              FUN_01954820(plVar14,param_3,param_4,param_5);
              *(undefined1 *)((longlong)plVar14 + 0xc1) = 0;
            }
          }
        }
        local_5c = local_5c + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    local_78[0x35] = lVar1;
    local_78[0x39] = lVar2;
    if (local_69 == '\0') {
      uVar13 = FUN_005ffa40(param_3);
      thunk_FUN_039bba01(uVar13,local_68);
      thunk_FUN_0416f828(local_68);
    }
    *(undefined1 *)(local_80 + 0x19) = 1;
  }
  return;
}

