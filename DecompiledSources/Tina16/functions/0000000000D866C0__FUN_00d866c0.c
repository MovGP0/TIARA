/* Ghidra address: 00d866c0 */
/* Ghidra symbol: FUN_00d866c0 */


void FUN_00d866c0(longlong *param_1,byte param_2,undefined8 param_3,undefined8 *param_4,
                 longlong param_5,byte param_6,undefined8 param_7,int param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  int local_70 [4];
  undefined8 local_60 [2];
  byte local_50;
  ushort local_4f;
  undefined8 local_38;
  
  puVar9 = local_60;
  for (lVar7 = 7; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *param_4;
    param_4 = param_4 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_004179d0(local_60,&DAT_00d627e8);
  lVar7 = 0;
  iVar2 = FUN_00416db0(param_7,L"default");
  if (iVar2 != 0) {
    lVar7 = FUN_00d74650(param_1[9],param_7);
  }
  if (lVar7 != 0) goto LAB_00d867b5;
  if (param_2 < 3) {
    if (param_2 == 2) {
      lVar7 = *(longlong *)param_1[0xb];
      goto LAB_00d867b5;
    }
    if (param_2 == 0) {
      lVar7 = *(longlong *)param_1[0xb];
      goto LAB_00d867b5;
    }
    if (param_2 == 1) {
      lVar7 = *(longlong *)param_1[0xb];
      goto LAB_00d867b5;
    }
  }
  else {
    if (param_2 == 4) {
      lVar7 = *(longlong *)param_1[0xb];
      goto LAB_00d867b5;
    }
    if (param_2 == 6) {
      lVar7 = *(longlong *)(param_1[0xb] + 0xf0);
      goto LAB_00d867b5;
    }
  }
  lVar7 = 0;
LAB_00d867b5:
  if (lVar7 != 0) {
    plVar4 = (longlong *)FUN_00d77580(lVar7,3);
    if (plVar4 != (longlong *)0x0) {
      iVar2 = FUN_00416db0(param_7,L"default");
      if (iVar2 != 0) {
        if ((local_50 & 1) == 0) {
          (**(code **)(*plVar4 + 0x98))(plVar4,0);
        }
        else {
          (**(code **)(*plVar4 + 0x98))(plVar4,7);
        }
        plVar5 = (longlong *)(**(code **)(*plVar4 + 0x88))(plVar4);
        uVar6 = (**(code **)(*plVar4 + 0x88))(plVar4);
        (**(code **)(*plVar5 + 0x10))(plVar5,uVar6);
      }
      else {
        if ((local_50 & 1) == 0) {
          plVar5 = (longlong *)(**(code **)(*plVar4 + 0x88))(plVar4);
          uVar6 = FUN_00d7efc0(param_1[2],1);
          (**(code **)(*plVar5 + 0x10))(plVar5,uVar6);
        }
        else {
          plVar5 = (longlong *)(**(code **)(*plVar4 + 0x88))(plVar4);
          uVar6 = FUN_00d7efc0(param_1[2],0);
          (**(code **)(*plVar5 + 0x10))(plVar5,uVar6);
        }
        if (param_8 != 0) {
          uVar6 = (**(code **)(*plVar4 + 0x88))(plVar4);
          lVar7 = (**(code **)(*plVar4 + 0x88))(plVar4);
          uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(*(longlong *)(lVar7 + 0x18) + 0x28),param_8,
                                     0x60);
          FUN_005fcc80(uVar6,uVar3);
        }
      }
      if (iVar2 != 0) {
        if ((char)plVar4[0x1f] != '\0') {
          iVar2 = *(int *)(param_5 + 8);
          cVar8 = '\0';
          do {
            (**(code **)(*param_1 + 0xa8))(param_1,local_70,param_2,local_60,cVar8,L"default");
            cVar1 = FUN_00423b30(local_70);
            if (((cVar1 == '\0') && (*(int *)((longlong)plVar4 + 0x7c) < local_70[0])) &&
               (local_70[0] < iVar2)) {
              iVar2 = local_70[0];
            }
            cVar8 = cVar8 + '\x01';
          } while (cVar8 != '\r');
          *(int *)((longlong)plVar4 + 0xc4) = *(int *)(param_5 + 8) - iVar2;
        }
        FUN_00414ad0(plVar4 + 0x17,local_38);
        FUN_00d77b90(plVar4,param_5);
        if (((local_4f & 1) != 0) && (*(char *)((longlong)plVar4 + 0xfa) != '\0')) {
          *(int *)(plVar4 + 0x19) = (int)plVar4[0x19] + 0x14;
        }
        (**(code **)(*plVar4 + 0xa8))(plVar4,param_3,&DAT_01ecf394);
        if (((local_4f & 1) != 0) && (*(char *)((longlong)plVar4 + 0xfa) != '\0')) {
          *(int *)(plVar4 + 0x19) = (int)plVar4[0x19] + -0x14;
        }
        FUN_00414480(plVar4 + 0x17);
      }
      else {
        FUN_00414ad0(plVar4 + 0x17,local_38);
        FUN_00d77b90(plVar4,param_5);
        *(undefined4 *)(plVar4 + 0x19) = 0;
        *(undefined4 *)((longlong)plVar4 + 0xc4) = 0;
        FUN_00d77ec0(plVar4,(&DAT_01ed17e8)[param_6]);
        FUN_00d76dd0(plVar4,param_3);
        FUN_00414480(plVar4 + 0x17);
      }
    }
  }
  FUN_00417740(local_60,&DAT_00d627e8);
  return;
}

