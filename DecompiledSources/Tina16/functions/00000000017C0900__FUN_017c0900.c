/* Ghidra address: 017c0900 */
/* Ghidra symbol: FUN_017c0900 */


void FUN_017c0900(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined4 local_20;
  short local_1c;
  undefined2 local_1a;
  
  local_38 = 0;
  local_30[0] = 0;
  iVar2 = FUN_01d31a40(*param_2);
  if (iVar2 == 0) {
    FUN_01cf0710(param_1,param_2);
    local_1a = *(undefined2 *)(param_1 + 0x90);
    FUN_01d311c0(*param_2,&local_1a,2);
    local_1a = *(undefined2 *)(param_1 + 0x94);
    FUN_01d311c0(*param_2,&local_1a,2);
    local_1c = FUN_017c2b70(param_1);
    FUN_01d311c0(*param_2,&local_1c,2);
    iVar3 = (int)local_1c;
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_20 = FUN_017c2c60(param_1,iVar2);
        FUN_01d311c0(*param_2,&local_20,4);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_01d311c0(*param_2,param_1 + 0x24,2);
    FUN_01d311c0(*param_2,param_1 + 0x50,2);
    iVar2 = 0;
    while ((iVar2 < 0x14 && (*(short *)(param_1 + 0x26 + (longlong)iVar2 * 2) != -1))) {
      iVar2 = iVar2 + 1;
    }
    FUN_01d31790(*param_2,iVar2);
    FUN_01d311c0(*param_2,param_1 + 0x26,iVar2 * 2);
    if (*(longlong *)(param_1 + 0x3f0) == 0) {
      local_1a = 0xffff;
      FUN_01d311c0(*param_2,&local_1a,2);
    }
    else {
      FUN_01d311c0(*param_2,*(longlong *)(param_1 + 0x3f0) + 8,2);
    }
    bVar1 = *(byte *)(*param_2 + 0x78);
    if (bVar1 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x3dU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_01b240b0(local_30,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
      FUN_01d313e0(*param_2,local_30[0]);
    }
    FUN_004169a0(&local_38,param_1 + 0x2d8);
    FUN_01d313e0(*param_2,local_38);
    FUN_01d311c0(*param_2,param_1 + 0x3d8,1);
    FUN_01d311c0(*param_2,param_1 + 0x3da,1);
    FUN_01d311c0(*param_2,param_1 + 0x3db,1);
    FUN_01d311c0(*param_2,param_1 + 0x3d9,1);
    FUN_01d311c0(*param_2,param_1 + 0x3f8,1);
    bVar1 = *(byte *)(*param_2 + 0x78);
    if (bVar1 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_01d311c0(*param_2,param_1 + 0x3dc,1);
      FUN_01d311c0(*param_2,param_1 + 0x3f9,1);
    }
    if (*(char *)(*param_2 + 0x78) == '\0') {
      FUN_01d31630(*param_2,*(undefined8 *)(param_1 + 0x400));
    }
  }
  FUN_00414560(&local_38,2);
  return;
}

