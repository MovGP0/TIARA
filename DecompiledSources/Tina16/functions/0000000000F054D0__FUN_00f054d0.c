/* Ghidra address: 00f054d0 */
/* Ghidra symbol: FUN_00f054d0 */


undefined8 FUN_00f054d0(undefined8 param_1,double param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  undefined1 local_138 [256];
  undefined8 local_38;
  longlong local_30 [4];
  
  local_30[0] = 0;
  local_38 = 0;
  if (param_2 == 0.0) {
    FUN_00414ad0(param_1,&DAT_00f0583c);
  }
  else {
    dVar4 = (double)FUN_0040c850(param_2);
    if ((dVar4 < 1.0) || (dVar4 = (double)FUN_0040c850(param_2), 10000.0 < dVar4)) {
      iVar3 = 0;
      dVar4 = (double)FUN_0040c850(param_2);
      if (1.0 <= dVar4) {
        while (dVar4 = (double)FUN_0040c850(param_2), 10.0 < dVar4) {
          iVar3 = iVar3 + 1;
          param_2 = param_2 / 10.0;
        }
      }
      else {
        while (dVar4 = (double)FUN_0040c850(param_2), dVar4 < 1.0) {
          iVar3 = iVar3 + -1;
          param_2 = param_2 * 10.0;
        }
      }
      FUN_0040fb60(local_138,param_2,1,*PTR_DAT_02005310);
      FUN_004169a0(local_30,local_138);
      iVar1 = FUN_004170c0(&DAT_00f0584c,local_30[0],1);
      if (0 < iVar1) {
        while( true ) {
          iVar1 = 0;
          if (local_30[0] != 0) {
            iVar1 = *(int *)(local_30[0] + -4);
          }
          if (*(short *)(local_30[0] + -2 + (longlong)iVar1 * 2) != 0x30) break;
          uVar2 = 0;
          if (local_30[0] != 0) {
            uVar2 = *(undefined4 *)(local_30[0] + -4);
          }
          FUN_00416e20(local_30,uVar2,1);
        }
      }
      iVar1 = 0;
      if (local_30[0] != 0) {
        iVar1 = *(int *)(local_30[0] + -4);
      }
      if (*(short *)(local_30[0] + -2 + (longlong)iVar1 * 2) == 0x2e) {
        uVar2 = 0;
        if (local_30[0] != 0) {
          uVar2 = *(undefined4 *)(local_30[0] + -4);
        }
        FUN_00416e20(local_30,uVar2,1);
      }
      FUN_0040e840(local_138,iVar3);
      FUN_004169a0(&local_38,local_138);
      FUN_00416cd0(local_30,3,local_30[0],&DAT_00f0585c,local_38);
    }
    else {
      FUN_0040fb60(local_138,param_2,1,*PTR_DAT_02005310);
      FUN_004169a0(local_30,local_138);
      iVar3 = FUN_004170c0(&DAT_00f0584c,local_30[0],1);
      if (0 < iVar3) {
        while( true ) {
          iVar3 = 0;
          if (local_30[0] != 0) {
            iVar3 = *(int *)(local_30[0] + -4);
          }
          if (*(short *)(local_30[0] + -2 + (longlong)iVar3 * 2) != 0x30) break;
          uVar2 = 0;
          if (local_30[0] != 0) {
            uVar2 = *(undefined4 *)(local_30[0] + -4);
          }
          FUN_00416e20(local_30,uVar2,1);
        }
      }
      iVar3 = 0;
      if (local_30[0] != 0) {
        iVar3 = *(int *)(local_30[0] + -4);
      }
      if (*(short *)(local_30[0] + -2 + (longlong)iVar3 * 2) == 0x2e) {
        uVar2 = 0;
        if (local_30[0] != 0) {
          uVar2 = *(undefined4 *)(local_30[0] + -4);
        }
        FUN_00416e20(local_30,uVar2,1);
      }
    }
    FUN_00414ad0(param_1,local_30[0]);
  }
  FUN_00414560(&local_38,2);
  return param_1;
}

