/* Ghidra address: 01b39c60 */
/* Ghidra symbol: FUN_01b39c60 */


void FUN_01b39c60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_58;
  longlong local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  iVar6 = *(int *)(param_2 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      puVar3 = (undefined8 *)FUN_004aeac0(param_2,iVar5);
      if (puVar3[10] != 0) {
        FUN_01b388b0(puVar3);
        FUN_01b388b0(puVar3 + 1);
        iVar1 = FUN_004170c0(&DAT_01b3a00c,*puVar3,1);
        if (iVar1 != 0) {
          FUN_00416dc0(puVar3,*puVar3,1,iVar1 + -1);
        }
        FUN_0043ea00(local_50,puVar3[3]);
        iVar1 = 0;
        if (local_50[0] != 0) {
          iVar1 = *(int *)(local_50[0] + -4);
        }
        if (iVar1 == 0) {
          FUN_00414480(&local_30);
        }
        else {
          FUN_00414b50(&local_40,puVar3[3]);
          FUN_01b387d0(&local_58,local_40);
          FUN_00ea9ef0(&local_30,local_58);
          iVar1 = 0;
          if (local_30 != 0) {
            iVar1 = *(int *)(local_30 - 4);
          }
          if (*(short *)((local_30 - 2) + (longlong)iVar1 * 2) == 0x20) {
            uVar2 = 0;
            if (local_30 != 0) {
              uVar2 = *(undefined4 *)(local_30 - 4);
            }
            FUN_00416e20(&local_30,uVar2,1);
          }
        }
        uVar4 = FUN_0040f3d0(param_4,0x5b);
        FUN_0040f590(uVar4);
        FUN_00409900();
        uVar4 = FUN_0040f200(param_4,*puVar3);
        FUN_0040f590(uVar4);
        FUN_00409900();
        uVar4 = FUN_0040f200(param_4,local_30);
        FUN_0040f590(uVar4);
        FUN_00409900();
        uVar4 = FUN_0040f200(param_4,puVar3[1]);
        FUN_0040f590(uVar4);
        FUN_00409900();
        FUN_0040f590(param_4);
        FUN_00409900();
        FUN_0040f590(param_4);
        FUN_00409900();
        FUN_0040f590(param_4);
        FUN_00409900();
        uVar4 = FUN_0040f3d0(param_4,0x5d);
        FUN_0040f590(uVar4);
        FUN_00409900();
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = FUN_019954d0(param_1);
  iVar6 = iVar6 + 2;
  iVar5 = 1;
  if (0 < iVar6) {
    do {
      lVar7 = (longlong)iVar5;
      puVar3 = *(undefined8 **)(param_3 + 0x10 + lVar7 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = FUN_0040f3d0(param_4,0x28);
        FUN_0040f590(uVar4);
        FUN_00409900();
        FUN_00414b50(&local_38,*(undefined8 *)(param_3 + lVar7 * 0x18));
        FUN_01b388b0(&local_38);
        if (local_38 == 0) {
          FUN_01b38990(*(undefined4 *)(param_3 + 8 + lVar7 * 0x18),&local_38);
        }
        uVar4 = FUN_0040f200(param_4,local_38);
        FUN_0040f590(uVar4);
        FUN_00409900();
        for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[4]) {
          FUN_00414b50(&local_38,*puVar3);
          FUN_01b388b0(&local_38);
          uVar4 = FUN_0040f200(param_4,local_38);
          uVar4 = FUN_0040f3d0(uVar4,0x2c);
          uVar4 = FUN_0040ef30(uVar4,*(undefined4 *)(puVar3 + 3));
          FUN_0040f590(uVar4);
          FUN_00409900();
        }
        uVar4 = FUN_0040f3d0(param_4,0x29);
        FUN_0040f590(uVar4);
        FUN_00409900();
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_0040f590(param_4);
  FUN_00409900();
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,3);
  return;
}

