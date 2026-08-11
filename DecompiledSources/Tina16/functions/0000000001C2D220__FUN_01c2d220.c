/* Ghidra address: 01c2d220 */
/* Ghidra symbol: FUN_01c2d220 */


void FUN_01c2d220(longlong param_1,short *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  short *local_res10;
  undefined8 local_res18;
  undefined8 local_168;
  undefined1 local_160 [256];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_168 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  *param_4 = 0;
  iVar3 = (**(code **)(*DAT_03565e48 + 0x28))();
  iVar7 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*DAT_03565e48 + 0x18))(DAT_03565e48,local_40,iVar7);
      FUN_00416ba0(local_30,local_40[0],&DAT_01c2d758);
      while (iVar4 = FUN_004170c0(&DAT_01c2d768,local_30[0],1), iVar4 != 0) {
        uVar5 = FUN_004170c0(&DAT_01c2d768,local_30[0],1);
        FUN_01c29c00(local_30,uVar5,1);
        FUN_01c29c10(&DAT_01c2d758,local_30,uVar5);
      }
      FUN_0043e130(&local_48,local_30[0]);
      iVar4 = FUN_004170c0(L"PINOUT",local_48,1);
      if (0 < iVar4) {
        FUN_0043e130(&local_50,local_30[0]);
        uVar5 = FUN_004170c0(L"PINOUT",local_50,1);
        FUN_01c29c00(local_30,uVar5,6);
        FUN_01c29c10(L"******",local_30,uVar5);
      }
      FUN_0043e130(&local_58,local_30[0]);
      iVar4 = FUN_004170c0(L"CONNECTION",local_58,1);
      if (0 < iVar4) {
        FUN_0043e130(&local_60,local_30[0]);
        uVar5 = FUN_004170c0(L"CONNECTION",local_60,1);
        FUN_01c29c00(local_30,uVar5,10);
        FUN_01c29c10(L"**********",local_30,uVar5);
      }
      while (iVar4 = FUN_004170c0(local_res10,local_30[0],1), 0 < iVar4) {
        *param_4 = 1;
        uVar6 = FUN_00410e60(&DAT_01c28c48,1);
        *(undefined8 *)(param_1 + 0xd8) = uVar6;
        FUN_00416910(local_160,local_res18,0xff);
        FUN_00415020(*(longlong *)(param_1 + 0xd8) + 8,local_160,0x40);
        *(short *)(*(longlong *)(param_1 + 0xd8) + 0x4a) = (short)iVar7;
        if (*local_res10 == 0x20) {
          cVar1 = FUN_004170c0(local_res10,local_30[0],1);
          *(char *)(*(longlong *)(param_1 + 0xd8) + 0x4c) = cVar1 + '\x01';
          cVar1 = '\0';
          if (local_res10 != (short *)0x0) {
            cVar1 = (char)*(undefined4 *)(local_res10 + -2);
          }
          *(char *)(*(longlong *)(param_1 + 0xd8) + 0x4d) = cVar1 + -1;
        }
        else {
          uVar2 = FUN_004170c0(local_res10,local_30[0],1);
          *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x4c) = uVar2;
          uVar2 = 0;
          if (local_res10 != (short *)0x0) {
            uVar2 = (undefined1)*(undefined4 *)(local_res10 + -2);
          }
          *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x4d) = uVar2;
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x4e) = 1;
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xd8));
        FUN_01c29c00(local_30,*(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x4c),1);
        FUN_01c29c10(&DAT_01c2d7f8,local_30,*(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x4c));
        if (DAT_03566762 != '\0') {
          FUN_00416cd0(&local_168,3,local_res18,&DAT_01c2d808,local_res10);
          uVar6 = FUN_0040f200(&DAT_03565e80,local_168);
          uVar6 = FUN_0040f200(uVar6,&LAB_01c2d81c);
          uVar6 = FUN_0040ef30(uVar6,iVar7);
          uVar6 = FUN_0040f3d0(uVar6,0x3a);
          uVar6 = FUN_0040ef30(uVar6,*(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x4c));
          FUN_0040f590(uVar6);
          FUN_00409900();
        }
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_168);
  FUN_00414560(&local_60,5);
  FUN_00414480(local_30);
  FUN_00414560(&local_res10,2);
  return;
}

