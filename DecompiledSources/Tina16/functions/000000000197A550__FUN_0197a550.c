/* Ghidra address: 0197a550 */
/* Ghidra symbol: FUN_0197a550 */


longlong FUN_0197a550(longlong *param_1,short *param_2,char param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  short *local_res10 [3];
  longlong local_50;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_50 = 0;
  if (local_res10[0] == (short *)0x0) {
    lVar4 = param_1[0x1c];
  }
  else {
    iVar1 = FUN_005b8d30(param_1[0x12],local_res10[0],1);
    if (iVar1 != 0) {
      iVar1 = FUN_00414cb0(param_1[0x12]);
      uVar2 = FUN_00414cb0(local_res10[0]);
      FUN_00416dc0(local_res10,local_res10[0],iVar1 + 1,uVar2);
    }
    if (param_1[0x1b] != 0) {
      FUN_0197a550(param_1[0x1b],local_res10[0],param_3,param_4);
    }
    if (*local_res10[0] != 0x5c) {
      FUN_00416ba0(local_res10,&LAB_0197a7f4,local_res10[0]);
    }
    iVar1 = FUN_00414cb0(local_res10[0]);
    if ((local_res10[0][(longlong)iVar1 + -1] != 0x5c) && (param_4 == '\0')) {
      FUN_00416ad0(local_res10,&LAB_0197a7f4);
    }
    lVar4 = param_1[0x1c];
    iVar6 = 2;
    iVar1 = FUN_00414cb0(local_res10[0]);
    iVar5 = 2;
    if (1 < iVar1) {
      iVar1 = iVar1 + -1;
      lVar8 = lVar4;
      do {
        if ((local_res10[0][(longlong)iVar5 + -1] == 0x5c) ||
           (iVar3 = FUN_00414cb0(local_res10[0]), lVar4 = lVar8, iVar3 == iVar5)) {
          iVar7 = iVar5 - iVar6;
          iVar3 = FUN_00414cb0(local_res10[0]);
          if (iVar3 == iVar5) {
            iVar7 = iVar7 + 1;
          }
          FUN_00416dc0(local_40,local_res10[0],iVar6,iVar7);
          iVar6 = iVar5 + 1;
          lVar4 = FUN_0197d480(lVar8,local_40[0],0);
          if (lVar4 == 0) {
            lVar4 = local_50;
            if (param_3 == '\0') break;
            lVar4 = FUN_0197d120(lVar8,local_40[0],0);
            iVar3 = FUN_00414cb0(local_res10[0]);
            if ((iVar3 != iVar5) || (param_4 == '\0')) {
              (**(code **)(*param_1 + 0xa0))(param_1,lVar4);
            }
          }
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
        lVar8 = lVar4;
      } while (iVar1 != 0);
    }
  }
  local_50 = lVar4;
  FUN_00414480(local_40);
  FUN_00414480(local_res10);
  return local_50;
}

