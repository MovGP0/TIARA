/* Ghidra address: 0045be20 */
/* Ghidra symbol: FUN_0045be20 */


void FUN_0045be20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined8 *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  FUN_00453a80(uVar2);
  if (iVar1 < 0) {
    FUN_0041f190(&DAT_004045d8,local_30,&local_20,0xffffffff);
    FUN_00453060(uVar2,local_30[0]);
  }
  else {
    FUN_0041f280(&DAT_004045d8,&local_38,&local_20,iVar1);
    FUN_00453060(uVar2,local_38);
  }
  FUN_0041e2a0(&DAT_004045d8,&local_20);
  FUN_00414560(&local_38,2);
  return;
}

