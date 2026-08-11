/* Ghidra address: 00c40790 */
/* Ghidra symbol: FUN_00c40790 */


short FUN_00c40790(longlong param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  short sVar5;
  short sVar6;
  longlong local_res10 [3];
  short local_42;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_42 = -1;
  FUN_00414b50(local_30,L"DEVICES");
  iVar2 = FUN_004170c0(&DAT_00c4098c,local_res10[0],1);
  if (0 < iVar2) {
    iVar2 = FUN_004170c0(&DAT_00c4098c,local_res10[0],1);
    FUN_00416dc0(local_40,local_res10[0],1,iVar2 + -1);
    FUN_0043e130(local_30,local_40[0]);
    iVar2 = FUN_004170c0(&DAT_00c4098c,local_res10[0],1);
    uVar3 = 0;
    if (local_res10[0] != 0) {
      uVar3 = *(undefined4 *)(local_res10[0] + -4);
    }
    FUN_00416dc0(local_res10,local_res10[0],iVar2 + 1,uVar3);
  }
  sVar6 = *(short *)(param_1 + 0x10);
  sVar5 = 0;
  sVar1 = local_42;
  if (-1 < (short)(sVar6 + -1)) {
    do {
      lVar4 = FUN_004aeac0(param_1,(int)sVar5);
      iVar2 = FUN_00416db0(*(undefined8 *)(lVar4 + 0x10),local_res10[0]);
      if (iVar2 == 0) {
        lVar4 = FUN_004aeac0(param_1,(int)sVar5);
        iVar2 = FUN_00416db0(*(undefined8 *)(lVar4 + 0x20),local_30[0]);
        sVar1 = sVar5;
        if (iVar2 == 0) break;
      }
      sVar5 = sVar5 + 1;
      sVar6 = sVar6 + -1;
      sVar1 = local_42;
    } while (sVar6 != 0);
  }
  local_42 = sVar1;
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_42;
}

