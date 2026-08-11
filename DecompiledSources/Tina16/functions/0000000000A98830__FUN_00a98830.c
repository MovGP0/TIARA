/* Ghidra address: 00a98830 */
/* Ghidra symbol: FUN_00a98830 */


void FUN_00a98830(longlong param_1,longlong param_2,short *param_3,undefined2 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined8 local_30;
  
  local_30 = 0;
  if ((ushort)(*param_3 - 0x20U) < 0x10) {
    bVar9 = ((int)CONCAT62((int6)((ulonglong)param_3 >> 0x10),1) <<
             ((byte)(*param_3 - 0x20U) & 0x1f) & 0x1e0U) != 0;
  }
  else {
    bVar9 = false;
  }
  if ((bVar9) && (cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a89470), cVar1 != '\0')) {
    uVar7 = *(undefined8 *)(param_2 + 0x4a0);
    FUN_00414b50(&local_30,uVar7);
    bVar9 = false;
    if ((ushort)(*param_3 - 0x20U) < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << ((byte)(*param_3 - 0x20U) & 0x1f)
               & 0x60U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10) + -1;
      if (-1 < iVar8) {
        do {
          plVar4 = (longlong *)FUN_00ac1a90(*(undefined8 *)(param_1 + 0x30),iVar8);
          cVar1 = FUN_004113d0(plVar4,&PTR_FUN_00a89bc8);
          if ((cVar1 != '\0') && (iVar2 = FUN_0043e420(plVar4[0x19],local_30), iVar2 == 0)) {
            if (bVar9) {
              plVar4 = (longlong *)FUN_00ac1a90(*(undefined8 *)(param_1 + 0x30),iVar8);
              plVar4 = (longlong *)(**(code **)(*plVar4 + 0x100))(plVar4);
              (**(code **)(*plVar4 + 600))(plVar4);
              break;
            }
            lVar5 = (**(code **)(*plVar4 + 0x100))(plVar4);
            if (lVar5 == param_2) {
              bVar9 = true;
            }
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != -1);
      }
    }
    else {
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
      iVar2 = 0;
      if (-1 < iVar8 + -1) {
        do {
          plVar4 = (longlong *)FUN_00ac1a90(*(undefined8 *)(param_1 + 0x30),iVar2);
          cVar1 = FUN_004113d0(plVar4,&PTR_FUN_00a89bc8);
          if ((cVar1 != '\0') && (iVar3 = FUN_0043e420(plVar4[0x19],local_30), iVar3 == 0)) {
            if (bVar9) {
              plVar4 = (longlong *)FUN_00ac1a90(*(undefined8 *)(param_1 + 0x30),iVar2);
              plVar4 = (longlong *)(**(code **)(*plVar4 + 0x100))(plVar4);
              (**(code **)(*plVar4 + 600))(plVar4);
              break;
            }
            lVar5 = (**(code **)(*plVar4 + 0x100))(plVar4);
            if (lVar5 == param_2) {
              bVar9 = true;
            }
          }
          iVar2 = iVar2 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  else {
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb8);
    pcVar6 = (code *)FUN_00411550(uVar7,0xffb7);
    (*pcVar6)(uVar7,param_3,param_4);
  }
  FUN_00414480(&local_30);
  return;
}

