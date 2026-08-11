/* Ghidra address: 017e97d0 */
/* Ghidra symbol: FUN_017e97d0 */


void FUN_017e97d0(undefined8 param_1,int param_2,longlong *param_3,undefined8 param_4,
                 longlong param_5,undefined8 param_6,undefined1 param_7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_1c8 [264];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined8 local_30;
  
  local_30 = 0;
  FUN_010d1490(param_3,param_4);
  iVar1 = *(int *)(param_5 + 0x10);
  for (iVar5 = 0; iVar5 <= iVar1 + -1; iVar5 = iVar5 + 1) {
    FUN_013b4b30(param_5,iVar5,&local_30);
    FUN_00416910(local_1c8,local_30,0xff);
    lVar4 = FUN_013b3ad0(param_3,local_1c8);
    if (lVar4 == 0) {
      lVar4 = FUN_013b2ec0(param_5,iVar5);
      FUN_013b49b0(param_3,lVar4,&local_30);
      iVar3 = FUN_010d16a0(param_3,local_30,param_6);
      if (param_2 == 0x10f) {
        FUN_010c8470(lVar4 + 0x230);
      }
      if ((int)param_3[2] + -1 < iVar3) {
        (**(code **)(*param_3 + 0x20))(param_3,lVar4);
      }
      else {
        FUN_00b94f50(param_3,iVar3,lVar4);
      }
    }
    else {
      FUN_013b4b70(param_3,lVar4,local_60);
      FUN_013b4bc0(param_5,iVar5,local_90);
      cVar2 = FUN_010c7d50(local_60,local_90);
      if (cVar2 == '\0') {
        FUN_010c7a80(local_60);
        FUN_010c7a80(local_90);
      }
      FUN_017e2ae0(param_1,local_60,local_90,param_2);
      cVar2 = FUN_017e28e0(param_1);
      if (cVar2 != '\0') break;
      if ((param_2 == 0x10e) || (param_2 == 0x10f)) {
        FUN_010c8e00(param_2,local_60,local_90,local_c0);
        FUN_013b3ec0(param_3,lVar4,local_c0,param_7);
      }
    }
  }
  FUN_00414480(&local_30);
  return;
}

