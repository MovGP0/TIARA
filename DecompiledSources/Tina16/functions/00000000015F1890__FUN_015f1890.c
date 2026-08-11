/* Ghidra address: 015f1890 */
/* Ghidra symbol: FUN_015f1890 */


undefined8
FUN_015f1890(undefined8 param_1,longlong param_2,int *param_3,undefined4 param_4,undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong local_res10 [3];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00416880(local_40,local_res10[0]);
  iVar3 = FUN_004170c0(&DAT_015f1b14,local_40[0],1);
  lVar1 = local_res10[0];
  iVar6 = -1;
  *param_3 = -1;
  if (iVar3 != 0) {
    iVar4 = 0;
    if (local_res10[0] != 0) {
      iVar4 = *(int *)(local_res10[0] + -4);
    }
    iVar7 = iVar3 + 1;
    iVar5 = -1;
    if (iVar7 <= iVar4) {
      cVar2 = FUN_00c53600(CONCAT22((short)((uint)iVar7 >> 0x10),
                                    (ushort)*(byte *)(local_res10[0] + -1 + (longlong)iVar7)));
      iVar5 = -1;
      if (cVar2 != '\0') {
        FUN_00416760(&local_48,*(undefined1 *)(local_res10[0] + -1 + (longlong)iVar7));
        iVar5 = FUN_0043fc00(local_48);
      }
    }
    iVar4 = 0;
    if (lVar1 != 0) {
      iVar4 = *(int *)(lVar1 + -4);
    }
    iVar7 = iVar3 + 2;
    if (iVar7 <= iVar4) {
      cVar2 = FUN_00c53600(CONCAT22((short)((uint)iVar7 >> 0x10),
                                    (ushort)*(byte *)(local_res10[0] + -1 + (longlong)iVar7)));
      if (cVar2 != '\0') {
        FUN_00416760(&local_50,*(undefined1 *)(local_res10[0] + -1 + (longlong)iVar7));
        iVar6 = FUN_0043fc00(local_50);
      }
    }
    if (iVar6 < 0) {
      *param_3 = iVar5;
    }
    else {
      *param_3 = iVar5 * 10 + iVar6;
    }
    FUN_00415ad0(local_res10,local_res10[0],1,iVar3 + -1);
  }
  FUN_00416880(&local_58,local_res10[0]);
  iVar3 = FUN_004170c0(&LAB_015f1b24,local_58,1);
  if (iVar3 != 0) {
    FUN_00415ad0(local_res10,local_res10[0],1,iVar3 + -1);
  }
  FUN_00416880(&local_60,local_res10[0]);
  FUN_015f0d60(param_1,local_60,param_4,0,param_5);
  FUN_00414560(&local_60,5);
  FUN_004144d0(&local_30);
  FUN_004144d0(local_res10);
  return param_1;
}

