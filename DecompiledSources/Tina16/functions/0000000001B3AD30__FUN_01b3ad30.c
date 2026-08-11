/* Ghidra address: 01b3ad30 */
/* Ghidra symbol: FUN_01b3ad30 */


void FUN_01b3ad30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_00414b50(local_30,L"          ");
  uVar2 = FUN_0040f200(param_2,L".PCB");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(param_2,L".REM CREATED BY TINA");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(param_2,L".REF");
  FUN_0040f590(uVar2);
  FUN_00409900();
  FUN_0040f590(param_2);
  FUN_00409900();
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      puVar3 = (undefined8 *)FUN_004aeac0(param_1,iVar4);
      if (puVar3[10] != 0) {
        uVar2 = FUN_0040f200(param_2,L".REM ");
        FUN_0040d060(uVar2);
        FUN_00409900();
        uVar2 = FUN_0040f200(param_2,puVar3[1]);
        FUN_0040f590(uVar2);
        FUN_00409900();
        iVar1 = FUN_004170c0(&DAT_01b3b05c,*puVar3,1);
        if (iVar1 != 0) {
          FUN_00416dc0(puVar3,*puVar3,1,iVar1 + -1);
        }
        FUN_00414b50(local_30,*puVar3);
        while( true ) {
          iVar1 = 0;
          if (local_30[0] != 0) {
            iVar1 = *(int *)(local_30[0] + -4);
          }
          if (9 < iVar1) break;
          FUN_00416ad0(local_30,&DAT_01b3b06c);
        }
        FUN_0043ea00(&local_50,puVar3[3]);
        iVar1 = 0;
        if (local_50 != 0) {
          iVar1 = *(int *)(local_50 + -4);
        }
        if (iVar1 == 0) {
          FUN_00416ba0(&local_40,&DAT_01b3b07c,puVar3[1]);
        }
        else {
          FUN_00414b50(&local_48,puVar3[3]);
          FUN_01b387d0(&local_58,local_48);
          FUN_00ea9ef0(&local_40,local_58);
        }
        uVar2 = FUN_0040f200(param_2,local_30[0]);
        uVar2 = FUN_0040f200(uVar2,local_40);
        FUN_0040f590(uVar2);
        FUN_00409900();
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar2 = FUN_0040f200(param_2,L".EOD");
  FUN_0040f590(uVar2);
  FUN_00409900();
  FUN_0040f590(param_2);
  FUN_00409900();
  FUN_00414560(&local_58,6);
  return;
}

