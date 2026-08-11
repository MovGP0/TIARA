/* Ghidra address: 01643440 */
/* Ghidra symbol: FUN_01643440 */


void FUN_01643440(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar6 = 0;
  iVar8 = iVar7;
  if (-1 < iVar7 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar6);
      if (*(char *)(lVar2 + 0x5b8) == '\0') {
        uVar3 = FUN_0161bc10(*(undefined4 *)(lVar2 + 0x5bc),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x48));
        lVar4 = *(longlong *)(param_1 + 0x78);
        *(undefined8 *)(lVar4 + 0x13980) = uVar3;
        *(longlong *)(lVar4 + 0x13988) = lVar2;
        FUN_01635be0(lVar2,lVar4);
        FUN_01b220d0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar2 + 0x610));
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar8);
      lVar2 = *(longlong *)(param_1 + 0x78);
      *(int *)(lVar2 + 0x80) = iVar8;
      FUN_00414ad0(lVar2 + 0x139a0,*(undefined8 *)(lVar4 + 0x638));
      if ((*(int *)(lVar4 + 0x5c8) != 2) ||
         ((iVar8 == 0 && (cVar1 = FUN_01639590(lVar4), cVar1 != '\0')))) {
        if (*(char *)(lVar4 + 0x5b8) == '\0') {
          lVar5 = FUN_0161bc10(*(undefined4 *)(lVar4 + 0x5bc),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x48));
          lVar2 = *(longlong *)(param_1 + 0x78);
          *(longlong *)(lVar2 + 0x13980) = lVar5;
          FUN_00414ad0(lVar2 + 0x139b0,*(undefined8 *)(lVar5 + 0x660));
          lVar2 = *(longlong *)(param_1 + 0x78);
          *(undefined4 *)(lVar2 + 0xa4) = 0;
          FUN_016395a0(lVar4,lVar2,iVar8);
        }
        else if (((*(char *)(lVar4 + 0xa3) == '\0') ||
                 (iVar6 = FUN_004170c0(L"builtin_",*(undefined8 *)(lVar4 + 0x658),1), 0 < iVar6)) ||
                ((iVar8 == 0 && (cVar1 = FUN_01639590(lVar4), cVar1 != '\0')))) {
          lVar2 = *(longlong *)(param_1 + 0x78);
          *(longlong *)(lVar2 + 0x13980) = lVar4;
          FUN_00414ad0(lVar2 + 0x139b0,*(undefined8 *)(lVar4 + 0x660));
          lVar2 = *(longlong *)(param_1 + 0x78);
          *(undefined4 *)(lVar2 + 0xa4) = 0;
          FUN_016395a0(lVar4,lVar2,iVar8);
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  if ((*(char *)(lVar2 + 0x139e0) != '\0') || (*(char *)(lVar2 + 0x139e2) != '\0')) {
    lVar4 = FUN_01628bc0(0xa9,lVar2);
    lVar2 = *(longlong *)(param_1 + 0x78);
    *(longlong *)(lVar2 + 0x139d8) = lVar4;
    *(undefined8 *)(lVar4 + 0x528) = *(undefined8 *)(lVar2 + 0x18);
    FUN_0043f750(local_40,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x70));
    FUN_00416ba0(&local_30,L"VA_CodeBox_",local_40[0]);
    FUN_017bf050(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x139d8),0,local_30);
  }
  uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),0);
  if ((*(char *)(*(longlong *)(param_1 + 0x78) + 0x139e3) != '\0') &&
     (cVar1 = FUN_01639590(uVar3), cVar1 != '\0')) {
    FUN_016423a0(param_1);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x139e3) == '\0') {
    FUN_016440b0(param_1);
  }
  else {
    FUN_016446f0(param_1);
    FUN_01644360(param_1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  FUN_01995400(uVar3);
  FUN_01995490(uVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x74));
  FUN_019954b0(uVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x70));
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  return;
}

