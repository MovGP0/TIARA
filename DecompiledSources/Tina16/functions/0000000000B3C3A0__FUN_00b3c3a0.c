/* Ghidra address: 00b3c3a0 */
/* Ghidra symbol: FUN_00b3c3a0 */


void FUN_00b3c3a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  FUN_00414c70(&local_20,"<style>\r\n");
  uVar2 = FUN_00414df0(&local_20);
  iVar1 = 0;
  if (local_20 != 0) {
    iVar1 = *(int *)(local_20 + -4);
  }
  FUN_004b89e0(*(undefined8 *)(param_1 + 0x10),uVar2,(longlong)iVar1);
  iVar1 = FUN_00b1b130();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_0043f750(local_30,iVar3);
      FUN_00415dd0(&local_38,local_30[0],0);
      FUN_00b1b150(*(undefined8 *)(param_1 + 0x20),&local_40,iVar3);
      FUN_00415980(&local_20,7,&DAT_00b3c5c8,local_38,&DAT_00b3c5d8,&DAT_00b3c5e8,local_40,
                   &DAT_00b3c5f8,&DAT_00b3c5d8);
      uVar2 = FUN_00414df0(&local_20);
      FUN_004b89e0(*(undefined8 *)(param_1 + 0x10),uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414c70(&local_20,"</style>\r\n");
  uVar2 = FUN_00414df0(&local_20);
  iVar1 = 0;
  if (local_20 != 0) {
    iVar1 = *(int *)(local_20 + -4);
  }
  FUN_004b89e0(*(undefined8 *)(param_1 + 0x10),uVar2,(longlong)iVar1);
  FUN_00414590(&local_40,2);
  FUN_00414480(local_30);
  FUN_004144d0(&local_20);
  return;
}

