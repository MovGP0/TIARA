/* Ghidra address: 0055ad40 */
/* Ghidra symbol: FUN_0055ad40 */


void FUN_0055ad40(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong local_30 [2];
  
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30[0] = 0;
  FUN_0055b110(param_1,local_30);
  iVar3 = 0;
  if (local_30[0] != 0) {
    iVar3 = (int)*(undefined8 *)(local_30[0] + -8);
  }
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = (longlong)iVar2;
      if ((*(char *)(local_30[0] + 8 + lVar1 * 0x10) != '\0') &&
         (*(char *)(local_30[0] + 9 + lVar1 * 0x10) == '\0')) {
        FUN_0055b690(local_30[0] + lVar1 * 0x10,param_2,param_3 + lVar1 * 0x20);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_005376c0(param_4,&local_58,*(longlong *)(param_1 + 0x30),1);
    FUN_0055b690(param_1 + 0x18,param_2,&local_58);
  }
  FUN_00417740(&local_58,&DAT_00527bf8);
  FUN_00419430(local_30,&DAT_0052f808);
  return;
}

