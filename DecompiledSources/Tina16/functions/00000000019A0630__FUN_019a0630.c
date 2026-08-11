/* Ghidra address: 019a0630 */
/* Ghidra symbol: FUN_019a0630 */


void FUN_019a0630(longlong param_1)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,iVar5);
      cVar1 = FUN_0198a580(plVar3);
      if (cVar1 == '\x04') {
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (((sVar2 == 0x39) && ((char)plVar3[0x34] == '\x01')) &&
           (*(longlong *)(plVar3[0x35] + 8) != 0)) {
          FUN_019a0630(*(undefined8 *)(plVar3[0x35] + 8));
        }
        if (((sVar2 == 0xab) || (sVar2 == 0xaa)) || (sVar2 == 0xac)) {
          if (sVar2 == 0xab) {
            FUN_00414b50(&local_30,L"EFF_METER");
          }
          else if (sVar2 == 0xaa) {
            FUN_00414b50(&local_30,L"FREQ_METER");
          }
          else if (sVar2 == 0xac) {
            FUN_00414b50(&local_30,L"AVG_METER");
          }
          uVar4 = FUN_017105e0(0);
          FUN_016ff310(local_30,L"<Auto>",0,plVar3,0,uVar4);
          FUN_01710700(uVar4);
          if (sVar2 == 0xac) {
            (**(code **)(*plVar3 + 0x2d0))(plVar3,0,&local_38);
            FUN_0043f750(&local_48,*local_38);
            FUN_00416ba0(&local_40,L"AvgMode=");
            (**(code **)(*(longlong *)plVar3[0x35] + 0x10))((longlong *)plVar3[0x35],local_40);
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  return;
}

