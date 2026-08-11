/* Ghidra address: 01693380 */
/* Ghidra symbol: FUN_01693380 */


void FUN_01693380(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [256];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40 [2];
  undefined8 local_30 [2];
  
  local_1c0 = 0;
  local_1c8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_30[0] = 0;
  iVar2 = (**(code **)(*param_2 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004b3cf0(param_2,&local_48,iVar4);
      FUN_0043ea00(local_40,local_48);
      if (local_40[0] == 0) {
LAB_0169352a:
        bVar5 = false;
      }
      else {
        FUN_004b5390(param_2,&local_58,iVar4);
        FUN_0043ea00(&local_50,local_58);
        if (local_50 == 0) goto LAB_0169352a;
        FUN_004b5390(param_2,&local_68,iVar4);
        FUN_0043ea00(&local_60,local_68);
        cVar1 = FUN_005b8460(&DAT_016937bc,local_60);
        bVar5 = cVar1 == '\0';
      }
      if (bVar5) {
        FUN_004b5390(param_2,&local_78,iVar4);
        FUN_0043ea00(&local_70,local_78);
        cVar1 = FUN_005b8460(&DAT_016937cc,local_70);
        bVar5 = cVar1 == '\0';
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        FUN_004b5390(param_2,&local_88,iVar4);
        FUN_0043ea00(&local_80,local_88);
        cVar1 = FUN_005b84e0(&DAT_016937bc,local_80);
        bVar5 = cVar1 == '\0';
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        FUN_004b5390(param_2,&local_98,iVar4);
        FUN_0043ea00(&local_90,local_98);
        cVar1 = FUN_005b84e0(&DAT_016937cc,local_90);
        if (cVar1 == '\0') {
          if (param_4 != '\0') {
            FUN_004b3cf0(param_2,&local_a8,iVar4);
            FUN_0043ea00(&local_a0,local_a8);
            FUN_00416910(local_1a8,local_a0,0xff);
            FUN_013b32a0(*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x1d8),local_1a8,param_2);
          }
          FUN_004b3cf0(param_2,&local_1b8,iVar4);
          FUN_0043e130(&local_1b0,local_1b8);
          FUN_00416910(local_1a8,local_1b0,0xff);
          lVar3 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_1a8,0);
          FUN_004b5390(param_2,&local_1c8,iVar4);
          FUN_0043e130(local_30,local_1c8);
          FUN_00456a50(local_30,&local_1c0,&DAT_016937dc,0,1);
          FUN_00415dd0(lVar3 + 0x10,local_1c0,0);
          *(undefined8 *)(lVar3 + 0x28) = 0;
          (**(code **)(*param_3 + 0x50))(param_3,lVar3);
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_1c8,4);
  FUN_00414560(&local_a8,0xe);
  FUN_00414480(local_30);
  return;
}

