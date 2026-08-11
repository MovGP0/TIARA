/* Ghidra address: 01962520 */
/* Ghidra symbol: FUN_01962520 */


void FUN_01962520(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_60 = 0;
  local_68 = 0;
  local_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  local_58 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_00414480(&local_28);
  if (param_1[0x1e] != 0) {
    FUN_00414b50(&local_28,*(undefined8 *)(param_1[0x1e] + 0x10));
  }
  cVar1 = FUN_0195b980(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x348))(param_1,&local_20);
  }
  else {
    lVar4 = FUN_0195f5e0(param_1);
    if (*(char *)(lVar4 + 0x30) == '\0') {
      uVar5 = (**(code **)(*param_1 + 0x118))(param_1);
      FUN_0195a680(param_1,&local_58);
      FUN_00416cd0(&local_50,4,local_58,&DAT_0196285c,param_1[0x35],&LAB_01962870);
      FUN_01970cf0(uVar5,&local_48,local_50,0);
      FUN_0046c3f0(&local_30,&local_48);
      FUN_004168e0(&local_20,local_30);
    }
    else {
      FUN_01963c20(param_1,&local_20,param_1 + 0x69,0);
    }
  }
  iVar3 = FUN_00414cc0(local_20);
  if (1 < iVar3) {
    iVar3 = FUN_00414cc0(local_20);
    if (*(short *)(local_20 + -2 + (longlong)(iVar3 + -1) * 2) == 0xd) {
      iVar3 = FUN_00414cc0(local_20);
      if (*(short *)(local_20 + -2 + (longlong)iVar3 * 2) == 10) {
        iVar3 = FUN_00414cc0(local_20);
        FUN_00416490(&local_20,iVar3 + -1,2);
      }
    }
  }
  if (((*(char *)(param_1[0x52] + 8) == '\0') && ((char)param_1[0x65] == '\0')) || (local_28 == 0))
  {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  iVar3 = FUN_0197f3d0(param_3,local_28,param_1[2],local_20,*(undefined1 *)(param_1[0x52] + 8),
                       param_1,uVar2,0);
  if (iVar3 != -1) {
    FUN_0043f750(&local_60,iVar3);
    FUN_004168e0(&local_68,local_60);
    (**(code **)(*param_1 + 0x358))(param_1,local_68);
  }
  FUN_00414520(&local_68);
  FUN_00414560(&local_60,3);
  FUN_00460ba0(&local_48);
  FUN_00414560(&local_30,2);
  FUN_00414520(&local_20);
  return;
}

