/* Ghidra address: 00efa6e0 */
/* Ghidra symbol: FUN_00efa6e0 */


undefined8 FUN_00efa6e0(undefined8 param_1,double param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  undefined1 local_138 [256];
  undefined8 local_38;
  longlong local_30 [4];
  
  local_30[0] = 0;
  local_38 = 0;
  if (param_2 == 0.0) {
    FUN_00414ad0(param_1,&DAT_00efaadc);
  }
  else {
    dVar5 = (double)FUN_0040c850(param_2);
    if ((dVar5 < 1.0) || (dVar5 = (double)FUN_0040c850(param_2), 10000.0 < dVar5)) {
      iVar2 = 0;
      dVar5 = (double)FUN_0040c850(param_2);
      if (1.0 <= dVar5) {
        while (dVar5 = (double)FUN_0040c850(param_2), 10.0 < dVar5) {
          iVar2 = iVar2 + 1;
          param_2 = param_2 / 10.0;
        }
      }
      else {
        while (dVar5 = (double)FUN_0040c850(param_2), dVar5 < 1.0) {
          iVar2 = iVar2 + -1;
          param_2 = param_2 * 10.0;
        }
      }
      FUN_0040fb60(local_138,param_2,1,(longlong)param_3);
      FUN_004169a0(local_30,local_138);
      iVar1 = FUN_004170c0(&DAT_00efaaec,local_30[0],1);
      if (0 < iVar1) {
        while( true ) {
          iVar1 = 0;
          if (local_30[0] != 0) {
            iVar1 = *(int *)(local_30[0] + -4);
          }
          if (*(short *)(local_30[0] + -2 + (longlong)iVar1 * 2) != 0x30) break;
          uVar3 = 0;
          if (local_30[0] != 0) {
            uVar3 = *(undefined4 *)(local_30[0] + -4);
          }
          FUN_00416e20(local_30,uVar3,1);
        }
      }
      iVar1 = 0;
      if (local_30[0] != 0) {
        iVar1 = *(int *)(local_30[0] + -4);
      }
      if (*(short *)(local_30[0] + -2 + (longlong)iVar1 * 2) == 0x2e) {
        uVar3 = 0;
        if (local_30[0] != 0) {
          uVar3 = *(undefined4 *)(local_30[0] + -4);
        }
        FUN_00416e20(local_30,uVar3,1);
      }
      FUN_0040e840(local_138,iVar2);
      FUN_004169a0(&local_38,local_138);
      FUN_00416cd0(local_30,3,local_30[0],&DAT_00efaafc,local_38);
    }
    else {
      FUN_0040fb60(local_138,param_2,1,(longlong)param_3);
      FUN_004169a0(local_30,local_138);
      iVar2 = FUN_004170c0(&DAT_00efaaec,local_30[0],1);
      if (0 < iVar2) {
        while( true ) {
          iVar2 = 0;
          if (local_30[0] != 0) {
            iVar2 = *(int *)(local_30[0] + -4);
          }
          if (*(short *)(local_30[0] + -2 + (longlong)iVar2 * 2) != 0x30) break;
          uVar3 = 0;
          if (local_30[0] != 0) {
            uVar3 = *(undefined4 *)(local_30[0] + -4);
          }
          FUN_00416e20(local_30,uVar3,1);
        }
      }
      iVar2 = 0;
      if (local_30[0] != 0) {
        iVar2 = *(int *)(local_30[0] + -4);
      }
      if (*(short *)(local_30[0] + -2 + (longlong)iVar2 * 2) == 0x2e) {
        uVar3 = 0;
        if (local_30[0] != 0) {
          uVar3 = *(undefined4 *)(local_30[0] + -4);
        }
        FUN_00416e20(local_30,uVar3,1);
      }
    }
    iVar2 = FUN_004170c0(&DAT_00efaafc,local_30[0],1);
    if (0 < iVar2) {
      uVar3 = FUN_004170c0(&DAT_00efaafc,local_30[0],1);
      uVar4 = FUN_004170c0(&DAT_00efaafc,local_30[0],1);
      FUN_00416e20(local_30,uVar4,1);
      FUN_00416ea0(L"*\\e(10,",local_30,uVar3);
      FUN_00416ad0(local_30,&LAB_00efab28);
    }
    FUN_00414ad0(param_1,local_30[0]);
  }
  FUN_00414560(&local_38,2);
  return param_1;
}

