/* Ghidra address: 0143be30 */
/* Ghidra symbol: FUN_0143be30 */


void FUN_0143be30(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [4];
  
  local_98 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_70 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40[0] = 0;
  cVar1 = FUN_0143ca80(param_1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x90))(*(longlong **)(param_1 + 0x708));
    plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00414480(local_40);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4c0);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0) + -1;
    if (iVar3 <= iVar4) {
      iVar4 = (iVar4 - iVar3) + 1;
      do {
        cVar1 = FUN_0143d610(param_1,iVar3);
        if (cVar1 == '\0') {
          FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_70,0,iVar3);
          FUN_00416cd0(local_40,3,local_40[0],local_70,&DAT_0143c19c);
        }
        else {
          FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_60,0,iVar3);
          FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_68,1,iVar3);
          FUN_00416cd0(&local_58,3,local_60,&DAT_0143c18c,local_68);
          FUN_0043ea00(local_50,local_58);
          (**(code **)(*plVar2 + 0x78))(plVar2,local_50[0]);
        }
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_88,0,iVar3);
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_90,1,iVar3);
        FUN_00416cd0(&local_80,3,local_88,&DAT_0143c18c,local_90);
        FUN_0043ea00(&local_78,local_80);
        (**(code **)(**(longlong **)(param_1 + 0x708) + 0x78))
                  (*(longlong **)(param_1 + 0x708),local_78);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_0143d700(param_1,0);
    if (1 < *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0)) {
      if (local_40[0] != 0) {
        FUN_00416cd0(&local_98,3,L"@ Configuration begin",local_40[0],L".@ Configuration end");
        (**(code **)(*plVar2 + 0x78))(plVar2,local_98);
      }
      FUN_01c9c910(*(undefined8 *)PTR_DAT_02004e40,plVar2,*(undefined8 *)(param_1 + 0xb8),2);
    }
    FUN_00410f20(plVar2);
    FUN_00805200(param_1);
    FUN_019af700(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788));
  }
  FUN_00414560(&local_98,10);
  FUN_00414480(local_40);
  return;
}

