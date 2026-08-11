/* Ghidra address: 00af3130 */
/* Ghidra symbol: FUN_00af3130 */


void FUN_00af3130(longlong *param_1,undefined8 param_2,char param_3,ushort param_4,
                 undefined4 param_5,int param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 local_25;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [12];
  
  local_40 = 0;
  FUN_00650920(param_1,param_3,param_4,param_5,param_6);
  (**(code **)(*param_1 + 600))(param_1);
  *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) & 0xffdf;
  if ((*(ushort *)(param_1 + 0x114) & 0x100) != 0) {
    *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) & 0xfeff;
    *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) & 0xffbf;
    uVar2 = FUN_00af6df0(param_1);
    FUN_0064e140(param_1[0xe8],uVar2);
    goto code_r0x00af3404;
  }
  if ((param_3 == '\x02') && ((*(ushort *)((longlong)param_1 + 0x79a) & 0x80) == 0)) {
    *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 0x100;
    *(int *)(param_1 + 0x12a) = param_6;
    FUN_0064e140(param_1[0xe8],0x2777);
    goto code_r0x00af3404;
  }
  if (param_3 != '\0') goto code_r0x00af3404;
  *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 0x80;
  local_30 = 0;
  if ((*(ushort *)((longlong)param_1 + 0x79a) & 0x100) == 0) {
LAB_00af32ad:
    *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 0x200;
  }
  else {
    uVar4 = FUN_00414480(&local_40);
    uVar5 = FUN_00af5250(param_1,param_5,param_6,&local_30,local_38,uVar4);
    if ((uVar5 & 1) == 0) goto LAB_00af32ad;
  }
  FUN_00410f20(local_30);
  lVar1 = param_1[0x116];
  iVar3 = FUN_00a9bd50(lVar1,*(undefined8 *)(param_1[0xe8] + 0x490),param_5,
                       param_6 + *(int *)(lVar1 + 0x94),local_1c,local_24,local_20,&local_25);
  *(int *)(param_1 + 299) = iVar3;
  if (-1 < iVar3) {
    if ((*(int *)(lVar1 + 0x9c) != *(int *)(lVar1 + 0xa0)) || ((param_4 & 1) != 0)) {
      uVar4 = FUN_0065b870(param_1[0xe8]);
      thunk_FUN_03a2fc9d(uVar4,0,0xffffffff);
    }
    if ((param_4 & 1) == 0) {
      *(int *)(lVar1 + 0x9c) = (int)param_1[299];
      *(int *)(lVar1 + 0xa0) = (int)param_1[299];
      FUN_00afe5a0(param_1,(int)param_1[299]);
    }
    else {
      iVar3 = (int)param_1[0x11d];
      if ((int)param_1[299] < iVar3) {
        *(int *)(lVar1 + 0xa0) = iVar3;
        *(int *)(lVar1 + 0x9c) = (int)param_1[299];
      }
      else {
        *(int *)(lVar1 + 0x9c) = iVar3;
        *(int *)(lVar1 + 0xa0) = (int)param_1[299];
      }
    }
  }
  FUN_00aa63b0(lVar1,1);
code_r0x00af3404:
  FUN_00414480(&local_40);
  return;
}

