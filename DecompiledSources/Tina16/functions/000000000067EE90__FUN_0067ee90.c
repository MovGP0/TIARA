/* Ghidra address: 0067ee90 */
/* Ghidra symbol: FUN_0067ee90 */


void FUN_0067ee90(longlong *param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  short *local_30 [2];
  
  local_30[0] = (short *)0x0;
  local_38 = 0;
  (**(code **)(*param_1 + 0x1b0))(param_1,local_30);
  if ((param_3 & 0x400) != 0) {
    if (local_30[0] == (short *)0x0) {
      bVar7 = true;
    }
    else if ((*(char *)((longlong)param_1 + 0x33e) == '\0') || (*local_30[0] != 0x26)) {
      bVar7 = false;
    }
    else {
      iVar3 = 0;
      if (local_30[0] != (short *)0x0) {
        iVar3 = *(int *)(local_30[0] + -2);
      }
      bVar7 = iVar3 == 1;
    }
    if (bVar7) {
      FUN_00416ad0(local_30,&DAT_0067f288);
    }
  }
  if (local_30[0] != (short *)0x0) {
    local_4c = param_3;
    if (*(char *)((longlong)param_1 + 0x33e) == '\0') {
      local_4c = param_3 | 0x800;
    }
    local_4c = FUN_006520b0(param_1,local_4c);
    FUN_005ff880(param_1[0x62],param_1[0x17]);
    bVar1 = *(byte *)(param_1 + 0x68);
    if ((bVar1 != 0) && (*(char *)((longlong)param_1 + 0x321) == '\0')) {
      FUN_00414b50(&local_38,local_30[0]);
      local_4c = local_4c & 0xffffffbf | *(uint *)(&DAT_01df9560 + (ulonglong)bVar1 * 4);
      if (*(char *)((longlong)param_1 + 0x33d) != '\0') {
        if (*(byte *)(param_1 + 0x68) < 8) {
          bVar7 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                   (*(byte *)(param_1 + 0x68) & 0x1f) & 0xcU) != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          do {
            local_48 = *param_2;
            local_40 = param_2[1];
            iVar3 = FUN_005fdff0(param_1[0x62],&DAT_0067f29c);
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - iVar3);
            uVar4 = FUN_005ffa40(param_1[0x62]);
            (*(code *)param_1[0x65])(param_1[0x66],uVar4,local_38,&local_48,local_4c | 0x400);
            iVar6 = local_40._4_4_ - local_48._4_4_;
            iVar3 = FUN_0064d120(param_1);
            if (iVar3 < iVar6) {
              bVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1[0x62] + 0x70) + 0x18) + 0x28) <
                      iVar6;
            }
            else {
              bVar7 = false;
            }
            if (!bVar7) break;
            iVar3 = FUN_004413f0(&LAB_0067f2b0,local_30[0]);
            if ((iVar3 == 0) && (iVar3 = 0, local_30[0] != (short *)0x0)) {
              iVar3 = *(int *)(local_30[0] + -2);
            }
            iVar6 = iVar3 + -1;
            cVar2 = FUN_0044f380(local_30[0],iVar6);
            if (cVar2 == '\x01') {
              iVar6 = iVar3 + -2;
            }
            FUN_00416dc0(local_30,local_30[0],1,iVar6);
            FUN_00416ba0(&local_38,local_30[0],&DAT_0067f29c);
          } while (local_30[0] != (short *)0x0);
        }
      }
      if (local_30[0] != (short *)0x0) {
        FUN_00414b50(local_30,local_38);
      }
    }
    cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar2 == '\0') {
      plVar5 = (longlong *)FUN_00777cd0();
      cVar2 = (**(code **)(*plVar5 + 0x98))(plVar5);
      if (cVar2 == '\0') {
        FUN_00423b50(param_2,1,1);
        FUN_005fc860(*(undefined8 *)(param_1[0x62] + 0x70),0xff000014);
        uVar4 = FUN_005ffa40(param_1[0x62]);
        (*(code *)param_1[0x65])(param_1[0x66],uVar4,local_30[0],param_2,local_4c);
        FUN_00423b50(param_2,0xffffffff,0xffffffff);
        FUN_005fc860(*(undefined8 *)(param_1[0x62] + 0x70),0xff000010);
        uVar4 = FUN_005ffa40(param_1[0x62]);
        (*(code *)param_1[0x65])(param_1[0x66],uVar4,local_30[0],param_2,local_4c);
        goto code_r0x0067f23b;
      }
    }
    uVar4 = FUN_005ffa40(param_1[0x62]);
    (*(code *)param_1[0x65])(param_1[0x66],uVar4,local_30[0],param_2,local_4c);
  }
code_r0x0067f23b:
  FUN_00414560(&local_38,2);
  return;
}

