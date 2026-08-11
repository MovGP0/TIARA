/* Ghidra address: 015f07e0 */
/* Ghidra symbol: FUN_015f07e0 */


void FUN_015f07e0(double param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  int local_5c;
  bool local_58 [8];
  longlong local_50;
  undefined1 local_48 [56];
  
  local_50 = 0;
  local_58[0] = 1.0 < param_1;
  local_58[1] = true;
  local_58[2] = false;
  local_58[3] = true;
  local_58[4] = true;
  local_58[5] = false;
  local_58[6] = false;
  local_58[7] = false;
  FUN_010c7a40(local_48,param_1);
  if (param_2 == 1) {
    FUN_015f06d0(&local_50,param_1);
  }
  else {
    FUN_010cc470(local_48,local_58,&local_50);
  }
  FUN_00414480(param_4);
  dVar5 = (double)FUN_00410100(local_50,&local_5c);
  if (local_5c == 0) {
    if (dVar5 == 0.0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
      dVar5 = (double)FUN_0040c850();
      if (10.0 < dVar5) {
        FUN_010c7a40(local_48,param_1 * 1000.0);
        if (param_2 == 1) {
          FUN_01d434d0(&local_50,param_1 * 1000.0);
          FUN_015f0760(&local_50);
        }
        else {
          FUN_010cc470(local_48,local_58,&local_50);
        }
        FUN_00414ad0(param_4,&DAT_015f09f4);
      }
    }
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = 0;
    if (local_50 != 0) {
      iVar3 = *(int *)(local_50 + -4);
    }
    FUN_00416780(param_4,*(undefined2 *)(local_50 + -2 + (longlong)iVar3 * 2));
    cVar2 = FUN_00c535d0(*(undefined2 *)*param_4);
    if (cVar2 == '\0') {
      FUN_00414ad0(param_4,&DAT_015f0a04);
    }
    else {
      uVar4 = 0;
      if (local_50 != 0) {
        uVar4 = *(undefined4 *)(local_50 + -4);
      }
      FUN_00416e20(&local_50,uVar4,1);
    }
  }
  FUN_00414ad0(param_3,local_50);
  FUN_00414480(&local_50);
  return;
}

