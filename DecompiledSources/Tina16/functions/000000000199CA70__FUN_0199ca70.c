/* Ghidra address: 0199ca70 */
/* Ghidra symbol: FUN_0199ca70 */


void FUN_0199ca70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_50;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  cVar2 = FUN_0199c7c0(param_2);
  if ((cVar2 == '\0') || (*(char *)((longlong)param_2 + 0x3b9) != '\0')) {
    sVar4 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (((sVar4 == 0x3f) ||
        (((sVar4 = (**(code **)(*param_2 + 0xf8))(param_2), sVar4 == 0x6a ||
          (sVar4 = (**(code **)(*param_2 + 0xf8))(param_2), sVar4 == 0xaa)) ||
         (sVar4 = (**(code **)(*param_2 + 0xf8))(param_2), sVar4 == 0xab)))) ||
       (sVar4 = (**(code **)(*param_2 + 0xf8))(param_2), sVar4 == 0xac)) {
      (**(code **)(param_1 + 0x48))(param_2,*(undefined8 *)(param_1 + 0x50));
    }
  }
  else {
    plVar6 = (longlong *)(**(code **)(param_1 + 0x48))(param_2,*(undefined8 *)(param_1 + 0x50));
    iVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
    if ((iVar5 != 0) &&
       (((*(char *)(*(longlong *)(param_1 + 0x50) + 0x12f0) == '\0' ||
         (cVar2 = FUN_01d06fe0(param_2), cVar2 == '\0')) ||
        (bVar3 = FUN_01d07330(param_2), 0x7f < bVar3)))) {
      if (*(longlong *)(param_1 + 0x50) == 0) {
        FUN_017be0e0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x210),local_48,
                     PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],*PTR_DAT_020037e8,
                     PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x50);
        FUN_017be0e0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x210),local_48,
                     *(undefined1 *)(lVar1 + 0x12ec),*(undefined1 *)(lVar1 + 0x12ed),
                     *(undefined1 *)(lVar1 + 0x12ee),*(undefined1 *)(lVar1 + 0x12ef),
                     *(undefined1 *)(lVar1 + 0x12f1));
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_30,0);
      iVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
      iVar5 = iVar5 + -1;
      iVar7 = 1;
      if (0 < iVar5) {
        do {
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_38,iVar7);
          FUN_00b90780(&local_50,local_38);
          FUN_00414b50(&local_38,local_50);
          if (local_38 != 0) {
            FUN_00416cd0(&local_30,3,local_30,&LAB_0199cdcc,local_38);
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_0199c8c0(*(undefined8 *)(param_1 + 0x40),local_40,local_44,0,local_30,param_2);
    }
  }
  FUN_00414480(&local_50);
  FUN_00414560(&local_38,2);
  return;
}

