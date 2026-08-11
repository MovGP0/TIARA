/* Ghidra address: 01229660 */
/* Ghidra symbol: FUN_01229660 */


void FUN_01229660(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7a8) + 0x278))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7a8));
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x848) + 0x298))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x848));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x870),0);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x878),0);
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa8) == 0x46) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))(*(longlong **)(param_1 + 0x788))
    ;
    FUN_0043f750(&local_40,uVar4);
    FUN_00414ad0(PTR_DAT_020051c8,local_40);
    *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa4) = **(undefined2 **)PTR_DAT_020051c8;
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))(*(longlong **)(param_1 + 0x788))
    ;
    if (iVar3 == 0) {
      *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa4) = 0x4c;
      plVar2 = *(longlong **)(param_1 + 0x788);
      uVar4 = (**(code **)(*plVar2 + 0x260))(plVar2);
      (**(code **)(*(longlong *)plVar2[0x9e] + 0x18))((longlong *)plVar2[0x9e],local_20,uVar4);
      FUN_00416ad0(local_20,L" Filter");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7b0),local_20[0]);
      *(undefined4 *)PTR_DAT_02004700 = 2000;
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))
                        (*(longlong **)(param_1 + 0x788));
      if (iVar3 == 1) {
        *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa4) = 0x48;
        plVar2 = *(longlong **)(param_1 + 0x788);
        uVar4 = (**(code **)(*plVar2 + 0x260))(plVar2);
        (**(code **)(*(longlong *)plVar2[0x9e] + 0x18))((longlong *)plVar2[0x9e],&local_28,uVar4);
        FUN_00416ad0(&local_28,L" Filter");
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7b0),local_28);
        *(undefined4 *)PTR_DAT_02004700 = 3000;
      }
      else {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))
                          (*(longlong **)(param_1 + 0x788));
        if (iVar3 == 2) {
          *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa4) = 0x50;
          plVar2 = *(longlong **)(param_1 + 0x788);
          uVar4 = (**(code **)(*plVar2 + 0x260))(plVar2);
          (**(code **)(*(longlong *)plVar2[0x9e] + 0x18))((longlong *)plVar2[0x9e],&local_30,uVar4);
          FUN_00416ad0(&local_30,L" Filter");
          FUN_0064de00(*(undefined8 *)(param_1 + 0x7b0),local_30);
          *(undefined4 *)PTR_DAT_02004700 = 4000;
        }
        else {
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))
                            (*(longlong **)(param_1 + 0x788));
          if (iVar3 == 3) {
            *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa4) = 0x53;
            plVar2 = *(longlong **)(param_1 + 0x788);
            uVar4 = (**(code **)(*plVar2 + 0x260))(plVar2);
            (**(code **)(*(longlong *)plVar2[0x9e] + 0x18))
                      ((longlong *)plVar2[0x9e],&local_38,uVar4);
            FUN_00416ad0(&local_38,L" Filter");
            FUN_0064de00(*(undefined8 *)(param_1 + 0x7b0),local_38);
            *(undefined4 *)PTR_DAT_02004700 = 5000;
          }
        }
      }
    }
  }
  sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
  if (sVar1 != 0x48) {
    if (sVar1 != 0x4c) {
      if (sVar1 == 0x50) {
        dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x800));
        if (*(double *)(PTR_DAT_020040b8 + 0x40) <= dVar5 &&
            dVar5 != *(double *)(PTR_DAT_020040b8 + 0x40)) {
LAB_01229c3c:
          uVar6 = FUN_012295f0(*(double *)(PTR_DAT_020040b8 + 0x40) / 2.0);
          FUN_00b90440(*(undefined8 *)(param_1 + 0x800),uVar6);
        }
        else {
          dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x800));
          if (dVar5 < *(double *)(PTR_DAT_020040b8 + 0x40) / 100.0) goto LAB_01229c3c;
        }
        dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x808));
        if (dVar5 < *(double *)(PTR_DAT_020040b8 + 0x58)) {
LAB_01229cb5:
          uVar6 = FUN_012295f0(*(double *)(PTR_DAT_020040b8 + 0x58) * 2.0);
          FUN_00b90440(*(undefined8 *)(param_1 + 0x808),uVar6);
        }
        else {
          dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x808));
          if (*(double *)(PTR_DAT_020040b8 + 0x58) * 100.0 < dVar5) goto LAB_01229cb5;
        }
        FUN_012294e0();
        goto LAB_01229de8;
      }
      if (sVar1 != 0x53) goto LAB_01229de8;
      dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x800));
      if (*(double *)(PTR_DAT_020040b8 + 0x78) <= dVar5 &&
          dVar5 != *(double *)(PTR_DAT_020040b8 + 0x78)) {
LAB_01229d34:
        uVar6 = FUN_012295f0(*(double *)(PTR_DAT_020040b8 + 0x78) / 2.0);
        FUN_00b90440(*(undefined8 *)(param_1 + 0x800),uVar6);
      }
      else {
        dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x800));
        if (dVar5 < *(double *)(PTR_DAT_020040b8 + 0x78) / 100.0) goto LAB_01229d34;
      }
      dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x808));
      if (dVar5 < *(double *)(PTR_DAT_020040b8 + 0x90)) {
LAB_01229db3:
        uVar6 = FUN_012295f0(*(double *)(PTR_DAT_020040b8 + 0x90) * 2.0);
        FUN_00b90440(*(undefined8 *)(param_1 + 0x808),uVar6);
      }
      else {
        dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x808));
        if (*(double *)(PTR_DAT_020040b8 + 0x90) * 100.0 < dVar5) goto LAB_01229db3;
      }
      FUN_012294e0();
      goto LAB_01229de8;
    }
    dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x800));
    if (*(double *)PTR_DAT_020040b8 <= dVar5 && dVar5 != *(double *)PTR_DAT_020040b8) {
LAB_01229a4d:
      uVar6 = FUN_012295f0(*(double *)PTR_DAT_020040b8 / 2.0);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x800),uVar6);
    }
    else {
      dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x800));
      if (dVar5 < *(double *)PTR_DAT_020040b8 / 100.0) goto LAB_01229a4d;
    }
    dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x808));
    if (dVar5 < *(double *)(PTR_DAT_020040b8 + 8)) {
LAB_01229ac5:
      uVar6 = FUN_012295f0(*(double *)(PTR_DAT_020040b8 + 8) * 2.0);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x808),uVar6);
    }
    else {
      dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x808));
      if (*(double *)(PTR_DAT_020040b8 + 8) * 100.0 < dVar5) goto LAB_01229ac5;
    }
    FUN_012294e0();
    goto LAB_01229de8;
  }
  dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x800));
  if (*(double *)(PTR_DAT_020040b8 + 0x20) <= dVar5 && dVar5 != *(double *)(PTR_DAT_020040b8 + 0x20)
     ) {
LAB_01229b44:
    uVar6 = FUN_012295f0(*(double *)(PTR_DAT_020040b8 + 0x20) / 2.0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x800),uVar6);
  }
  else {
    dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x800));
    if (dVar5 < *(double *)(PTR_DAT_020040b8 + 0x20) / 100.0) goto LAB_01229b44;
  }
  dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x808));
  if (dVar5 < *(double *)(PTR_DAT_020040b8 + 0x28)) {
LAB_01229bbd:
    uVar6 = FUN_012295f0(*(double *)(PTR_DAT_020040b8 + 0x28) * 2.0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x808),uVar6);
  }
  else {
    dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x808));
    if (*(double *)(PTR_DAT_020040b8 + 0x28) * 100.0 < dVar5) goto LAB_01229bbd;
  }
  FUN_012294e0();
LAB_01229de8:
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7b0),&local_48);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x988),local_48);
  FUN_01229220(param_1);
  FUN_0122b3a0(param_1,DAT_021076a8);
  FUN_00414480(&local_48);
  FUN_00414560(&local_40,5);
  return;
}

