/* Ghidra address: 00b2ee10 */
/* Ghidra symbol: FUN_00b2ee10 */


undefined8 FUN_00b2ee10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong local_res18 [2];
  undefined8 local_28;
  longlong local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414630(param_3);
  iVar1 = 0;
  if (local_res18[0] != 0) {
    iVar1 = *(int *)(local_res18[0] + -4);
  }
  FUN_00415ad0(&local_20,local_res18[0],2,iVar1 + -2);
  iVar1 = 0;
  if (local_20 != 0) {
    iVar1 = *(int *)(local_20 + -4);
  }
  lVar2 = local_20;
  if (0xff < iVar1) {
    lVar2 = FUN_00b146c0(&PTR_FUN_00b141e0,1,10);
    FUN_004134c0();
  }
  uVar5 = 0;
  if (lVar2 != 0) {
    uVar5 = *(uint *)(lVar2 + -4);
  }
  FUN_00b15220(&local_28,local_20);
  iVar1 = (uVar5 & 0xff) * 2;
  FUN_00417360(param_2,0,iVar1 + 3);
  puVar3 = (undefined1 *)FUN_00414df0(param_2);
  *puVar3 = 0x17;
  lVar2 = FUN_00414df0(param_2);
  *(char *)(lVar2 + 1) = (char)uVar5;
  lVar2 = FUN_00414df0(param_2);
  *(undefined1 *)(lVar2 + 2) = 1;
  if ((char)uVar5 != '\0') {
    uVar4 = FUN_00414df0(&local_28);
    lVar2 = FUN_00414df0(param_2);
    FUN_00409a70(uVar4,lVar2 + 3,iVar1);
  }
  FUN_00414590(&local_28,2);
  FUN_004144d0(local_res18);
  return param_2;
}

