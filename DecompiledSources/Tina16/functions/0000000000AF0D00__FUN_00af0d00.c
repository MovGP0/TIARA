/* Ghidra address: 00af0d00 */
/* Ghidra symbol: FUN_00af0d00 */


void FUN_00af0d00(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 *local_60;
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_22;
  undefined8 local_20;
  
  local_60 = auStack_98;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  cVar2 = FUN_00af2f30(param_1);
  if (cVar2 != '\0') goto LAB_00af11c6;
  uVar5 = FUN_00414480(&local_38);
  uVar6 = FUN_00414480(&local_30);
  FUN_00a289e0(param_3,uVar5,uVar6);
  if (param_4 == '\x02') {
    uVar5 = FUN_0044d490(&PTR_FUN_00ae7c88,1,
                         L"LoadDocument with DocType = \'ImgType\' not supported.");
    FUN_004134c0(uVar5);
  }
  else if (param_2 == 0) {
    uVar5 = FUN_0044d490(&PTR_FUN_00ae7c88,1,
                         L"LoadDocument requires document to load. Parameter \'Document\' must not be nil."
                        );
    FUN_004134c0(uVar5);
  }
  FUN_00afe640(param_1,1);
  FUN_00414b50(&local_40,param_1[0x117]);
  if ((short)param_1[0x9a] == 0) {
    local_22 = 0;
  }
  else {
    local_22 = *(undefined2 *)(*(longlong *)PTR_DAT_02005950 + 0x9c);
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,(short)param_1[0x9a]);
  }
  *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 2;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  *(undefined4 *)(param_1[0x116] + 0x2b8) = 0x4b;
  FUN_00aff150(param_1);
  lVar1 = param_1[0x116];
  *(undefined1 *)(lVar1 + 0x60) = 0;
  if (param_4 == '\0') {
    if ((char)param_1[0xe5] == '\0') {
      local_20 = FUN_00ad03b0(&DAT_00acfb00,1,param_2);
      uVar3 = FUN_00ad2cc0(local_20);
      *(undefined1 *)(param_1[0x116] + 0x60) = uVar3;
      FUN_00410f20(local_20);
    }
    else if ((char)param_1[0xe5] == '\x02') {
      *(undefined1 *)(lVar1 + 0x60) = 1;
    }
  }
  (**(code **)(*param_1 + 0x498))(param_1);
  FUN_00afe5a0(param_1,0);
  *(undefined4 *)(param_1 + 299) = 0xffffffff;
  if (param_1[0xe3] != 0) {
    local_78 = 1;
    (*(code *)param_1[0xe3])(param_1[0xe4],param_1,0,0);
  }
  if (param_1[0x119] != param_2) {
    local_48 = param_1 + 0x119;
    local_50 = *local_48;
    *local_48 = 0;
    FUN_00410f20(local_50);
  }
  param_1[0x119] = param_2;
  FUN_00414ad0(param_1 + 0x117,local_38);
  *(char *)(param_1 + 0x118) = param_4;
  if (param_1[0xd1] != 0) {
    (*(code *)param_1[0xd1])(param_1[0xd2],param_1,param_1 + 0x119);
  }
  if (param_4 == '\0') {
    FUN_00af05e0(param_1);
  }
  else if (param_4 == '\x03') {
    FUN_00af0480(param_1);
  }
  else {
    FUN_00af0740(param_1);
  }
  FUN_00af2f50(param_1);
  cVar2 = FUN_00af50d0(param_1,local_30);
  if (cVar2 == '\0') {
    if (param_1[0x117] != 0) {
      iVar4 = FUN_00416db0(param_1[0x117],local_40);
      if (iVar4 == 0) goto code_r0x00af10ee;
    }
    FUN_00af26c0(param_1,0);
    FUN_0068e980(param_1[0xea],0);
  }
code_r0x00af10ee:
  (**(code **)(*(longlong *)param_1[0xe8] + 0x180))((longlong *)param_1[0xe8]);
  FUN_00aff1c0(param_1);
  *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) & 0xfffd;
  if ((short)param_1[0x9a] != -1) {
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,local_22);
  }
  FUN_00afe640(param_1,0);
  if (*(char *)((longlong)param_1 + 0xae) != '\0') {
    FUN_00afe260(param_1);
  }
  if ((0 < (int)param_1[0x11a]) && (param_1[0x104] != 0)) {
    (*(code *)param_1[0x104])(param_1[0x105],param_1,(int)param_1[0x11a],param_1[0x11b]);
  }
LAB_00af11c6:
  FUN_00414560(&local_40,3);
  return;
}

