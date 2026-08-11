/* Ghidra address: 01b390f0 */
/* Ghidra symbol: FUN_01b390f0 */


void FUN_01b390f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  iVar4 = 0xbc614e;
  uVar2 = FUN_0040f200(param_2,&DAT_01b39578);
  FUN_0040d060(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(param_2,L" OrCAD/PCB II NetList Format");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(param_2,L"                                       Revised:   ");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(param_2,L"                                       Revision:  ");
  FUN_0040f590(uVar2);
  FUN_00409900();
  FUN_0040f590(param_2);
  FUN_00409900();
  FUN_0040f590(param_2);
  FUN_00409900();
  FUN_0040f590(param_2);
  FUN_00409900();
  uVar2 = FUN_0040f200(param_2,L"  Time Stamp - ");
  FUN_01b38700(&local_50,local_90);
  uVar2 = FUN_0040f200(uVar2,local_50);
  uVar2 = FUN_0040f3d0(uVar2,0x2d);
  FUN_01b38700(&local_58,local_92);
  uVar2 = FUN_0040f200(uVar2,local_58);
  uVar2 = FUN_0040f3d0(uVar2,0x2d);
  FUN_01b38700(&local_60,local_94);
  uVar2 = FUN_0040f200(uVar2,local_60);
  uVar2 = FUN_0040f200(uVar2,&DAT_01b396e8);
  FUN_01b38700(&local_68,local_8e);
  uVar2 = FUN_0040f200(uVar2,local_68);
  uVar2 = FUN_0040f3d0(uVar2,0x3a);
  FUN_01b38700(&local_70,local_8c);
  uVar2 = FUN_0040f200(uVar2,local_70);
  uVar2 = FUN_0040f3d0(uVar2,0x3a);
  FUN_01b38700(&local_78,local_8a);
  uVar2 = FUN_0040f200(uVar2,local_78);
  uVar2 = FUN_0040f200(uVar2,L"   }");
  FUN_0040f590(uVar2);
  FUN_00409900();
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      puVar3 = (undefined8 *)FUN_004aeac0(param_1,iVar6);
      if (puVar3[10] != 0) {
        FUN_01b388b0(puVar3);
        iVar1 = FUN_004170c0(&DAT_01b39714,*puVar3,1);
        if (iVar1 != 0) {
          FUN_00416dc0(puVar3,*puVar3,1,iVar1 + -1);
        }
        iVar4 = iVar4 + 10;
        FUN_0043ea00(&local_80,puVar3[3]);
        iVar1 = 0;
        if (local_80 != 0) {
          iVar1 = *(int *)(local_80 + -4);
        }
        if (iVar1 == 0) {
          FUN_00416ba0(local_40,&DAT_01b39724,puVar3[1]);
        }
        else {
          FUN_00414b50(&local_48,puVar3[3]);
          FUN_01b387d0(&local_88,local_48);
          FUN_00ea9ef0(local_40,local_88);
        }
        uVar2 = FUN_0040f200(param_2,&DAT_01b39738);
        uVar2 = FUN_0040ef30(uVar2,iVar4);
        uVar2 = FUN_0040f3d0(uVar2,0x20);
        uVar2 = FUN_0040f200(uVar2,local_40[0]);
        uVar2 = FUN_0040f3d0(uVar2,0x20);
        uVar2 = FUN_0040f200(uVar2,*puVar3);
        uVar2 = FUN_0040f3d0(uVar2,0x20);
        uVar2 = FUN_0040f200(uVar2,puVar3[1]);
        FUN_0040f590(uVar2);
        FUN_00409900();
        puVar5 = (undefined4 *)puVar3[10];
        iVar1 = *(int *)((longlong)puVar3 + 0x34);
        if (0 < iVar1) {
          do {
            uVar2 = FUN_0040f200(param_2,L"  ( ");
            uVar2 = FUN_0040ef30(uVar2,*puVar5);
            uVar2 = FUN_0040f3d0(uVar2,0x20);
            uVar2 = FUN_0040f200(uVar2,*(undefined8 *)(puVar5 + 4));
            uVar2 = FUN_0040f200(uVar2,&LAB_01b39764);
            FUN_0040f590(uVar2);
            FUN_00409900();
            puVar5 = *(undefined4 **)(puVar5 + 6);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        uVar2 = FUN_0040f200(param_2,&LAB_01b39764);
        FUN_0040f590(uVar2);
        FUN_00409900();
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar2 = FUN_0040f3d0(param_2,0x29);
  FUN_0040f590(uVar2);
  FUN_00409900();
  FUN_00414560(&local_88,10);
  return;
}

