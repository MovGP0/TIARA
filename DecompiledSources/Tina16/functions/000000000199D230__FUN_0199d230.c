/* Ghidra address: 0199d230 */
/* Ghidra symbol: FUN_0199d230 */


void FUN_0199d230(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  int local_38;
  longlong local_30;
  
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  if (((param_2 != (longlong *)0x0) && (cVar1 = FUN_0198a580(param_2), cVar1 == '\x04')) &&
     (sVar3 = (**(code **)(*param_2 + 0xf8))(param_2), sVar3 == 0x86)) {
    FUN_017ff4f0(param_2,&local_50);
    (**(code **)(param_1 + 0x48))(&local_30,local_50);
    if (((*PTR_DAT_02001560 == '\0') || (cVar1 = FUN_01d06fe0(param_2), cVar1 == '\0')) ||
       (bVar2 = FUN_01d07330(param_2), 0x7f < bVar2)) {
      uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
      lVar7 = FUN_015264d0(uVar4);
      if (lVar7 != 0) {
        plVar8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        FUN_017c4360(lVar7,plVar8);
        iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8);
        FUN_00410f20(plVar8);
        FUN_017be0e0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x210),local_40,
                     PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],*PTR_DAT_020037e8,
                     PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
        (**(code **)(*param_2 + 0x2d0))(param_2,0,&local_48);
        FUN_00f07010(&local_58,local_30,*local_48);
        FUN_00414b50(&local_30,local_58);
        iVar6 = 0;
        if (local_30 != 0) {
          iVar6 = *(int *)(local_30 + -4);
        }
        iVar5 = iVar5 - iVar6;
        if (0 < iVar5) {
          do {
            FUN_00416ea0(&LAB_0199d4a8,&local_30,1);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_0199c8c0(*(undefined8 *)(param_1 + 0x40),local_38 + 5,local_3c,1,local_30,0);
      }
    }
  }
  FUN_00414560(&local_58,2);
  FUN_00414480(&local_30);
  return;
}

