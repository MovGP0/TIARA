/* Ghidra address: 00f02630 */
/* Ghidra symbol: FUN_00f02630 */


void FUN_00f02630(longlong param_1,short *param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort local_res18;
  
  iVar2 = *(int *)(param_1 + 0x4a8);
  iVar3 = *(int *)(param_1 + 0x4ac);
  local_res18 = param_3;
  if ((*param_2 == 9) && ((param_3 & 2) == 0)) {
    if ((param_3 & 1) == 0) {
      iVar1 = FUN_00f02500(param_1);
      if (iVar1 <= iVar2 + 1) {
        iVar3 = iVar3 + 1;
        if (*(int *)(param_1 + 0x4e0) <= iVar3) {
          if (*(int *)(param_1 + 0x9c) <
              (*(int *)(param_1 + 0x4e0) + 1) *
              (*(int *)(param_1 + 0x4b4) + *(int *)(param_1 + 0x4d0))) {
            if ((*(char *)(param_1 + 0x658) == '\0') && (*(longlong *)(param_1 + 0x618) != 0)) {
              (**(code **)(param_1 + 0x618))(*(undefined8 *)(param_1 + 0x620),param_1);
            }
            *(undefined1 *)(param_1 + 0x658) = 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x658) = 0;
          }
          FUN_00848a70(param_1,*(int *)(param_1 + 0x4e0) + 1);
          if (*(longlong *)(param_1 + 0x628) != 0) {
            (**(code **)(param_1 + 0x628))(*(undefined8 *)(param_1 + 0x630),param_1);
          }
          iVar2 = FUN_00f02500(param_1);
          if (iVar2 != 0) {
            iVar2 = FUN_00f02500();
            iVar1 = 0;
            if (-1 < iVar2 + -1) {
              do {
                FUN_0084e3e0(param_1,iVar1,iVar3,0);
                iVar1 = iVar1 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
          }
        }
      }
    }
    else {
      if (iVar2 + -1 < *(int *)(param_1 + 0x4bc)) {
        FUN_00f02500(param_1);
      }
      local_res18 = 0;
    }
  }
  FUN_00845ea0(param_1,param_2,local_res18);
  return;
}

