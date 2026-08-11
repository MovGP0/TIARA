/* Ghidra address: 01d037f0 */
/* Ghidra symbol: FUN_01d037f0 */


void FUN_01d037f0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar7;
  undefined8 *puVar6;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_017be8b0(param_1,param_2,param_3);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((longlong)param_1 + 0xd1);
  *(undefined1 *)((longlong)param_1 + 0xd2) = *(undefined1 *)((longlong)param_1 + 0xd3);
  if (*PTR_DAT_02003038 != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_68);
    FUN_00b95880(&local_68,0x32,0x32);
    (**(code **)(*param_2 + 0x30))(param_2,local_68,local_64,local_60,CONCAT44(uVar7,local_5c));
  }
  if ((*PTR_DAT_020052b8 != '\0') && (*(char *)((longlong)param_1 + 0xaa) == '\0')) {
    if ((char)param_1[0xa6] == '\0') {
      FUN_01cfaa80(param_1,&local_50);
      FUN_017ff4f0(param_1,&local_30);
      cVar1 = *(char *)((longlong)param_1 + 0xd1);
      if (cVar1 == '\0') {
        FUN_00416cd0(&local_40,3,&DAT_01d03de0,param_1[0x13],&DAT_01d03df4);
      }
      else if (cVar1 == '\x01') {
        FUN_00416cd0(&local_40,3,&DAT_01d03e2c,param_1[0x13],&DAT_01d03df4);
      }
      else if (cVar1 == '\x02') {
        FUN_00416cd0(&local_40,3,&DAT_01d03e18,param_1[0x13],&DAT_01d03df4);
      }
      else if (cVar1 == '\x03') {
        FUN_00416cd0(&local_40,3,&DAT_01d03e04,param_1[0x13],&DAT_01d03df4);
      }
      FUN_0043f750(&local_70,*(undefined4 *)((longlong)param_1 + 0xc));
      FUN_0043f750(&local_78,(int)param_1[2]);
      FUN_00416cd0(&local_38,9,L"InsertPart(",local_30,&DAT_01d03e64,local_50,&DAT_01d03e64,local_70
                   ,&DAT_01d03e64,local_78,local_40);
      puVar6 = &local_48;
      puVar8 = &local_54;
      FUN_0135ad60(*(undefined8 *)PTR_DAT_02001f10,&local_80,local_30,L"InsertPart",puVar6,puVar8,
                   &local_58);
      uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
      uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
      iVar3 = FUN_00416db0(local_38,local_80);
      if (iVar3 != 0) {
        FUN_00415dd0(&local_88,local_30,0);
        FUN_00415dd0(&local_90,local_48,0);
        FUN_00415dd0(&local_98,local_38,0);
        FUN_0135af50(*(undefined8 *)PTR_DAT_02001f10,local_88,local_90,local_98,
                     CONCAT44(uVar7,local_54),CONCAT44(uVar9,local_58));
        FUN_00415dd0(&local_a0,local_38,0);
        FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_a0,0,1);
      }
    }
    sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar2 != 0x68) {
      iVar3 = (**(code **)(*(longlong *)param_1[0xa1] + 0x28))();
      iVar5 = 0;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(*(longlong *)param_1[0xa1] + 0x18))
                    ((longlong *)param_1[0xa1],&local_a8,iVar5);
          plVar4 = (longlong *)
                   FUN_019ac500(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_a8);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0xa1] + 0x18))
                      ((longlong *)param_1[0xa1],&local_b0,iVar5);
            cVar1 = FUN_0135a710(*(undefined8 *)PTR_DAT_02004778,
                                 *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_b0,
                                 param_1);
            if (cVar1 != '\0') {
              *(undefined1 *)((longlong)plVar4 + 10) = 1;
              (**(code **)(*plVar4 + 200))(plVar4,param_2,0xffffffff);
            }
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  FUN_00414560(&local_b0,2);
  FUN_00414590(&local_a0,4);
  FUN_00414560(&local_80,3);
  FUN_00414560(&local_50,5);
  return;
}

