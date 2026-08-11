/* Ghidra address: 00cadb40 */
/* Ghidra symbol: FUN_00cadb40 */


undefined8
FUN_00cadb40(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,int param_5,
            undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_res18 [2];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0041b910(param_6);
  FUN_00875240(&local_40,param_6,param_1[0x2a],3);
  FUN_0041b840(&param_6,local_40);
  if (param_5 < 0) {
    param_5 = (int)param_1[0x24];
  }
  if (local_res18[0] == 0) {
    FUN_00414b50(local_res18,&LAB_00cadee0);
  }
  FUN_00877e10(&local_30,local_res18[0],param_6);
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12d) = 0;
  iVar1 = -1;
  iVar2 = 0;
  uVar5 = FUN_008751c0();
  do {
    iVar3 = *(int *)(param_1[0x21] + 0x30);
    if (0 < iVar3) {
      if (iVar2 < iVar3) {
        iVar1 = FUN_00c8b6a0(param_1[0x21],local_30,iVar2);
      }
      else {
        iVar1 = -1;
      }
      lVar6 = 0;
      if (local_30 != 0) {
        lVar6 = *(longlong *)(local_30 + -8);
      }
      iVar2 = FUN_008764b0(((longlong)iVar3 + 1) - lVar6,0);
    }
    if ((0 < param_5) && ((param_5 < iVar1 || ((iVar1 == -1 && (param_5 < iVar2)))))) {
      if (*(char *)((longlong)param_1 + 0x11c) == '\0') {
        FUN_0041ddd0(&local_48,PTR_PTR_02002948);
        uVar5 = FUN_0086dfd0(&PTR_FUN_00ca5e78,1,local_48);
        FUN_004134c0(uVar5);
      }
      *(undefined1 *)((longlong)param_1 + 300) = 1;
      FUN_00c8aff0(param_1[0x21],param_2,param_5,param_6);
      goto LAB_00cade2c;
    }
    if (iVar1 == -1) {
      (**(code **)(*param_1 + 0x110))(param_1,1,1);
      iVar3 = FUN_00cae370(param_1,1,param_4,0);
      *(bool *)((longlong)param_1 + 0x12d) = iVar3 == -1;
      if ((*(char *)((longlong)param_1 + 0x12d) == '\0') && (-1 < (int)param_4)) {
        uVar4 = FUN_008751d0(uVar5);
        if (param_4 <= uVar4) {
          *(undefined1 *)((longlong)param_1 + 0x12d) = 1;
        }
      }
      if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
        FUN_00414480(param_2);
        goto LAB_00cade2c;
      }
    }
  } while (iVar1 < 0);
  iVar2 = 0;
  if (local_30 != 0) {
    iVar2 = (int)*(undefined8 *)(local_30 + -8);
  }
  FUN_00c8b100(param_1[0x21],&local_38,iVar1 + iVar2,1,0xffffffff);
  iVar2 = FUN_00416db0(local_res18[0],&LAB_00cadee0);
  if (((iVar2 == 0) && (0 < iVar1)) && (*(char *)(local_38 + (iVar1 + -1)) == '\r')) {
    iVar1 = iVar1 + -1;
  }
  FUN_008785a0(param_2,local_38,0,iVar1,param_6);
LAB_00cade2c:
  FUN_00414480(&local_48);
  FUN_0041b800(&local_40);
  FUN_00417840(&local_38,&DAT_0086e978,2);
  FUN_00414480(local_res18);
  FUN_0041b800(&param_6);
  return param_2;
}

