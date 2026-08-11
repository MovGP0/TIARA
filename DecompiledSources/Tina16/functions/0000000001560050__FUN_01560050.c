/* Ghidra address: 01560050 */
/* Ghidra symbol: FUN_01560050 */


void FUN_01560050(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  uint local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_88 = 0;
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x748) + 0x408);
  iVar6 = *(int *)(lVar1 + 0x10);
  local_90 = 0;
  if (-1 < iVar6 + -1) {
    do {
      if (*(uint *)(lVar1 + 0x10) <= local_90) {
        FUN_00594f90();
      }
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)local_90 * 8);
      if (*(char *)((longlong)plVar2 + 0x3dc) != '\0') {
        FUN_004169a0(&local_38,plVar2 + 0x5b);
        uVar4 = (**(code **)(*plVar2 + 0x210))(plVar2,0);
        cVar3 = FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),uVar4,&local_50);
        if (cVar3 != '\0') {
          lVar5 = FUN_00410e60(&DAT_01572be8,1);
          FUN_00415dd0(&local_68,local_38,0);
          FUN_015f1b30(local_60,local_68,0xfffffffd,0);
          FUN_00416880(&local_40,local_60[0]);
          FUN_00415dd0(&local_78,local_38,0);
          FUN_015f1890(&local_70,local_78,&local_2c,uVar4,0);
          FUN_00416880(&local_80,local_70);
          FUN_0043e1a0(&local_48,local_80);
          FUN_0155fe70(param_1,&local_88,local_48);
          FUN_00414b50(&local_48,local_88);
          FUN_00416ba0(lVar5 + 8,L"top_",local_48);
          FUN_00414ad0(lVar5 + 0x10,local_40);
          *(undefined4 *)(lVar5 + 0x18) = local_2c;
          *(uint *)(lVar5 + 0x1c) = *(byte *)((longlong)plVar2 + 0x3f9) + 1;
          *(undefined4 *)(lVar5 + 0x20) = 0;
          FUN_004ae7e0(*(undefined8 *)(local_50 + 0x30),lVar5);
        }
      }
      local_90 = local_90 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_88,2);
  FUN_00414590(&local_78,4);
  FUN_00414560(&local_48,3);
  return;
}

