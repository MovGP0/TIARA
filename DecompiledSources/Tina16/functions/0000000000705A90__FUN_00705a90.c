/* Ghidra address: 00705a90 */
/* Ghidra symbol: FUN_00705a90 */


void FUN_00705a90(longlong *param_1,ushort *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  FUN_00659a30(param_1,param_2);
  if ((char)param_1[0xb0] == '\x02') {
    if (*param_2 < 0x20) {
      bVar11 = (1 << ((byte)*param_2 & 0x1f) & 0x8002301U) != 0;
    }
    else {
      bVar11 = false;
    }
    if (!bVar11) {
      iVar3 = (**(code **)(*param_1 + 0x260))(param_1);
      iVar4 = (**(code **)(*(longlong *)param_1[0x9e] + 0x28))((longlong *)param_1[0x9e]);
      iVar4 = iVar4 + -1;
      iVar9 = 0;
      iVar8 = iVar3;
      if ((-1 < iVar3) && (iVar9 = 0, iVar3 < iVar4)) {
        (**(code **)(*(longlong *)param_1[0x9e] + 0x18))((longlong *)param_1[0x9e],local_40,iVar3);
        uVar6 = local_40[0];
        FUN_00416780(&local_48,*param_2);
        cVar2 = FUN_005b8460(local_48,uVar6);
        if (cVar2 != '\0') {
          iVar9 = iVar3 + 1;
        }
      }
      do {
        iVar1 = iVar8;
        if (iVar9 <= iVar4) {
          iVar10 = (iVar4 - iVar9) + 1;
          iVar4 = iVar9;
          do {
            (**(code **)(*(longlong *)param_1[0x9e] + 0x18))
                      ((longlong *)param_1[0x9e],&local_50,iVar4);
            uVar6 = local_50;
            FUN_00416780(&local_58,*param_2);
            cVar2 = FUN_005b8460(local_58,uVar6);
            iVar1 = iVar4;
            if (cVar2 != '\0') break;
            iVar4 = iVar4 + 1;
            iVar10 = iVar10 + -1;
            iVar1 = iVar8;
          } while (iVar10 != 0);
        }
        iVar8 = iVar1;
      } while ((0 < iVar9) && (iVar9 = 0, iVar4 = iVar3, iVar3 == iVar8));
      if (iVar3 != iVar8) {
        uVar6 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar6,0x14e,(longlong)iVar8,0);
        uVar5 = (**(code **)(*param_1 + 0x260))(param_1);
        (**(code **)(*(longlong *)param_1[0x9e] + 0x18))((longlong *)param_1[0x9e],&local_60,uVar5);
        FUN_0064de00(param_1,local_60);
        pcVar7 = (code *)FUN_00411550(param_1,0xffea);
        (*pcVar7)(param_1);
        pcVar7 = (code *)FUN_00411550(param_1,0xffab);
        (*pcVar7)(param_1);
      }
      *param_2 = 0;
    }
  }
  FUN_00414560(&local_60,5);
  return;
}

