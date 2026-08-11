/* Ghidra address: 0070f3c0 */
/* Ghidra symbol: FUN_0070f3c0 */


void FUN_0070f3c0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  
  FUN_00786bc0(param_1,param_2);
  FUN_00785c20(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x44);
  local_38 = (int)*(short *)(param_2 + 0x10);
  local_34 = (int)*(short *)(param_2 + 0x12);
  uVar2 = FUN_00786090(param_1);
  thunk_FUN_041b2403(uVar2,0x1206,0,&local_38);
  if (((local_30 & 4) == 0) && ((local_30 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0x44) = local_2c;
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  }
  if (iVar1 != *(int *)(param_1 + 0x44)) {
    uVar2 = FUN_00786090(param_1);
    thunk_FUN_041543e0(uVar2,0,0,1);
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

