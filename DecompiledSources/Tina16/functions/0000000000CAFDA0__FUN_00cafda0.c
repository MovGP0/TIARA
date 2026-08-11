/* Ghidra address: 00cafda0 */
/* Ghidra symbol: FUN_00cafda0 */


longlong *
FUN_00cafda0(longlong *param_1,longlong *param_2,longlong param_3,char param_4,int param_5,
            int param_6,undefined8 param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_0041b910(param_7);
  FUN_00414480(param_2);
  FUN_00875240(local_30,param_7,param_1[0x2a],3);
  FUN_0041b840(&param_7,local_30[0]);
  if (param_6 < 0) {
    param_6 = (int)param_1[0x24];
  }
  do {
    uVar2 = FUN_00cad470(param_1,param_7);
    iVar4 = 0;
    if (*param_2 != 0) {
      iVar4 = *(int *)(*param_2 + -4);
    }
    if (iVar4 <= param_6) {
      uVar3 = uVar2 & 0xffff;
      if (uVar3 < 0xb) {
        if (uVar3 != 10) {
          if (uVar3 == 8) {
            if ((0 < iVar4) && (FUN_004169f0(param_2,iVar4 + -1), param_4 != '\0')) {
              (**(code **)(*param_1 + 0x148))(param_1,&DAT_00cb00ec,param_7);
            }
          }
          else {
            if (uVar3 != 9) goto LAB_00caffa0;
            if (param_5 < 1) {
              FUN_00416780(&local_38,uVar2);
              FUN_00416ad0(param_2,local_38);
              if (param_4 != '\0') {
                FUN_00cac9d0(param_1,uVar2,param_7);
              }
            }
            else {
              FUN_00417320(&local_20,
                           CONCAT62((uint6)((ulonglong)((longlong)iVar4 % (longlong)param_5) >> 0x10
                                           ) & 0xffff,0x20),
                           param_5 - (int)((longlong)iVar4 % (longlong)param_5));
              FUN_00416ad0(param_2,local_20);
              if (param_4 != '\0') {
                (**(code **)(*param_1 + 0x148))(param_1,local_20,param_7);
              }
            }
          }
        }
      }
      else if ((uVar3 != 0xd) && (uVar3 != 0x1b)) {
LAB_00caffa0:
        FUN_00416780(&local_40,uVar2);
        FUN_00416ad0(param_2,local_40);
        if (param_4 != '\0') {
          iVar4 = 0;
          if (param_3 != 0) {
            iVar4 = *(int *)(param_3 + -4);
          }
          if (iVar4 == 0) {
            FUN_00cac9d0(param_1,uVar2,param_7);
          }
          else {
            (**(code **)(*param_1 + 0x148))(param_1,param_3,param_7);
          }
        }
      }
    }
    if ((short)uVar2 == 10) {
      iVar4 = 0;
      if (*param_2 != 0) {
        iVar4 = *(int *)(*param_2 + -4);
      }
      while ((0 < iVar4 && (cVar1 = FUN_008791b0(*param_2,iVar4,&LAB_00cb0100), cVar1 != '\0'))) {
        iVar4 = iVar4 + -1;
      }
      FUN_004169f0(param_2,iVar4);
      if (param_4 != '\0') {
        FUN_00caecc0(param_1,param_7);
      }
      FUN_00414560(&local_40,2);
      FUN_0041b800(local_30);
      FUN_00414480(&local_20);
      FUN_0041b800(&param_7);
      return param_2;
    }
  } while( true );
}

