/* Ghidra address: 01b3a990 */
/* Ghidra symbol: FUN_01b3a990 */


void FUN_01b3a990(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_58;
  longlong local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  iVar5 = *(int *)(param_2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      puVar2 = (undefined8 *)FUN_004aeac0(param_2,iVar4);
      if (puVar2[10] != 0) {
        FUN_01b388b0(puVar2);
        iVar1 = FUN_004170c0(&DAT_01b3ad0c,*puVar2,1);
        if (iVar1 != 0) {
          FUN_00416dc0(puVar2,*puVar2,1,iVar1 + -1);
        }
        FUN_0043ea00(local_50,puVar2[3]);
        iVar1 = 0;
        if (local_50[0] != 0) {
          iVar1 = *(int *)(local_50[0] + -4);
        }
        if (iVar1 == 0) {
          FUN_00416ba0(&local_30,&DAT_01b3ad1c,puVar2[1]);
        }
        else {
          FUN_00414b50(&local_40,puVar2[3]);
          FUN_01b387d0(&local_58,local_40);
          FUN_00ea9ef0(&local_30,local_58);
        }
        uVar3 = FUN_0040f3d0(param_4,0x5b);
        FUN_0040f590(uVar3);
        FUN_00409900();
        uVar3 = FUN_0040f200(param_4,*puVar2);
        FUN_0040f590(uVar3);
        FUN_00409900();
        uVar3 = FUN_0040f200(param_4,local_30);
        FUN_0040f590(uVar3);
        FUN_00409900();
        uVar3 = FUN_0040f200(param_4,puVar2[1]);
        FUN_0040f590(uVar3);
        FUN_00409900();
        FUN_0040f590(param_4);
        FUN_00409900();
        FUN_0040f590(param_4);
        FUN_00409900();
        FUN_0040f590(param_4);
        FUN_00409900();
        uVar3 = FUN_0040f3d0(param_4,0x5d);
        FUN_0040f590(uVar3);
        FUN_00409900();
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = FUN_019954d0(param_1);
  iVar5 = iVar5 + 2;
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      lVar6 = (longlong)iVar4;
      puVar2 = *(undefined8 **)(param_3 + 0x10 + lVar6 * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        uVar3 = FUN_0040f3d0(param_4,0x28);
        FUN_0040f590(uVar3);
        FUN_00409900();
        FUN_00414b50(&local_38,*(undefined8 *)(param_3 + lVar6 * 0x18));
        FUN_01b388b0(&local_38);
        if (local_38 == 0) {
          FUN_01b38990(*(undefined4 *)(param_3 + 8 + lVar6 * 0x18),&local_38);
        }
        uVar3 = FUN_0040f200(param_4,local_38);
        FUN_0040f590(uVar3);
        FUN_00409900();
        for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[4]) {
          FUN_00414b50(&local_38,*puVar2);
          FUN_01b388b0(&local_38);
          uVar3 = FUN_0040f200(param_4,local_38);
          uVar3 = FUN_0040f3d0(uVar3,0x2d);
          uVar3 = FUN_0040ef30(uVar3,*(undefined4 *)(puVar2 + 3));
          FUN_0040f590(uVar3);
          FUN_00409900();
        }
        uVar3 = FUN_0040f3d0(param_4,0x29);
        FUN_0040f590(uVar3);
        FUN_00409900();
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_0040f590(param_4);
  FUN_00409900();
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,3);
  return;
}

