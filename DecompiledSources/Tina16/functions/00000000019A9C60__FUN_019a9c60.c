/* Ghidra address: 019a9c60 */
/* Ghidra symbol: FUN_019a9c60 */


undefined8 *
FUN_019a9c60(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_120;
  undefined1 local_118 [264];
  longlong local_10;
  
  local_120 = 0;
  local_10 = 0;
  FUN_00414610(param_5);
  FUN_00414ad0(param_2,param_5);
  FUN_00ee6f30(local_118,param_3,param_4);
  FUN_004169a0(&local_10,local_118);
  iVar1 = FUN_004170c0(L"pin:",local_10,1);
  if (0 < iVar1) {
    iVar1 = FUN_004170c0(L"pin:",local_10,1);
    uVar2 = 0;
    if (local_10 != 0) {
      uVar2 = *(undefined4 *)(local_10 + -4);
    }
    FUN_00416dc0(&local_10,local_10,iVar1 + 5,uVar2);
    if (local_10 != 0) {
      iVar1 = 0;
      if (local_10 != 0) {
        iVar1 = *(int *)(local_10 + -4);
      }
      if (*(short *)(local_10 + -2 + (longlong)iVar1 * 2) == 0x29) {
        uVar2 = 0;
        if (local_10 != 0) {
          uVar2 = *(undefined4 *)(local_10 + -4);
        }
        FUN_00416e20(&local_10,uVar2,1);
      }
    }
    iVar1 = FUN_00416db0(*param_2,local_10);
    if (iVar1 != 0) {
      FUN_0043ea00(&local_120,local_10);
      FUN_00416cd0(param_2,4,*param_2,&DAT_019a9e78,local_120,&DAT_019a9e8c);
    }
  }
  FUN_00414480(&local_120);
  FUN_00414480(&local_10);
  FUN_00414480(&param_5);
  return param_2;
}

