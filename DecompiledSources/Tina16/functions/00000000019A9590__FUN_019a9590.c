/* Ghidra address: 019a9590 */
/* Ghidra symbol: FUN_019a9590 */


longlong * FUN_019a9590(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong local_res18 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar5 = 0;
  uVar1 = 0;
  if (local_res18[0] != 0) {
    uVar1 = *(uint *)(local_res18[0] + -4);
  }
  iVar4 = 0;
  if (uVar1 < 0x80000000) {
    iVar2 = uVar1 + 1;
    do {
      if (*(short *)(local_res18[0] + -2 + (longlong)iVar4 * 2) == 0x2e) {
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar4 = 0;
  iVar2 = 0;
  FUN_019a7350(param_1,local_30,param_4);
  if (0 < iVar5) {
    do {
      iVar4 = FUN_004170c0(&DAT_019a9814,local_30[0],iVar4 + 1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar5);
  }
  iVar5 = FUN_004170c0(&DAT_019a9814,local_30[0],iVar4 + 1);
  if (iVar5 < 1) {
    FUN_00414ad0(param_2,local_30[0]);
    iVar5 = FUN_004413f0(&LAB_019a9824,*param_2);
    uVar3 = 0;
    if (*param_2 != 0) {
      uVar3 = *(undefined4 *)(*param_2 + -4);
    }
    FUN_00416dc0(&local_58,*param_2,iVar5 + 1,uVar3);
    FUN_0043ea00(&local_50,local_58);
    FUN_00416910(param_4 + 0x2b0,local_50,0xff);
  }
  else {
    FUN_00416dc0(param_2,local_30[0],1,iVar5 + -1);
    iVar5 = FUN_004413f0(&LAB_019a9824,*param_2);
    uVar3 = 0;
    if (*param_2 != 0) {
      uVar3 = *(undefined4 *)(*param_2 + -4);
    }
    FUN_00416dc0(&local_48,*param_2,iVar5 + 1,uVar3);
    FUN_0043ea00(local_40,local_48);
    FUN_00414ad0(param_2,local_40[0]);
    FUN_00416910(param_4 + 0x2b0,*param_2,0xff);
  }
  FUN_00414560(&local_58,4);
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return param_2;
}

