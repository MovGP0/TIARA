/* Ghidra address: 00b9c360 */
/* Ghidra symbol: FUN_00b9c360 */


void FUN_00b9c360(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  if ((*(char *)(param_1 + 0x31) != '\0') && (*(char *)(param_1 + 0x32) == '\0')) {
    FUN_00b97c60(*(undefined8 *)(param_1 + 0x28),&local_18);
    lVar2 = 0;
    if (local_18 != 0) {
      lVar2 = *(longlong *)(local_18 + -8);
    }
    if (0 < lVar2) {
      uVar3 = 0;
      if (local_18 != 0) {
        uVar3 = *(undefined8 *)(local_18 + -8);
      }
      FUN_004b89e0(*(undefined8 *)(param_1 + 0x18),local_18,uVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x32) = 1;
  if (param_3 < 0) {
    FUN_00459ca0(*(undefined8 *)(param_1 + 0x28),&local_10,param_2);
    iVar1 = 0;
    if (local_10 != 0) {
      iVar1 = (int)*(undefined8 *)(local_10 + -8);
    }
  }
  else {
    FUN_00416dc0(&local_20,param_2,1,param_3);
    FUN_00459ca0(*(undefined8 *)(param_1 + 0x28),&local_10,local_20);
    iVar1 = 0;
    if (local_10 != 0) {
      iVar1 = (int)*(undefined8 *)(local_10 + -8);
    }
  }
  if (0 < iVar1) {
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x18),local_10,(longlong)iVar1);
  }
  FUN_00414480(&local_20);
  FUN_00417840(&local_18,&DAT_00406578,2);
  return;
}

