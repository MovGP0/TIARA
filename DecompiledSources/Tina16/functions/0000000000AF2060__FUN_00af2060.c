/* Ghidra address: 00af2060 */
/* Ghidra symbol: FUN_00af2060 */


void FUN_00af2060(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_19 [9];
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_19[0] = '\0';
  if (param_1[0x10e] != 0) {
    (*(code *)param_1[0x10e])(param_1[0x10f],param_1,param_2,local_19);
  }
  if (local_19[0] == '\0') {
    uVar2 = FUN_00414480(&local_28);
    uVar3 = FUN_00414480(&local_30);
    FUN_00a28910(*(undefined8 *)(param_2 + 8),uVar2,uVar3);
    iVar1 = FUN_00416db0(local_28,&DAT_00af21a8);
    if (iVar1 == 0) {
      uVar2 = FUN_00414480(&local_38);
      FUN_00a29560(&local_30,*(undefined8 *)(param_2 + 8),uVar2);
      FUN_00af14e0(param_1,PTR_IMAGE_DOS_HEADER_0200c280,local_30,*(undefined1 *)(param_2 + 0x1c));
    }
    else {
      (**(code **)(*param_1 + 0x4a0))
                (param_1,*(undefined8 *)(param_2 + 8),*(undefined1 *)(param_2 + 0x1c));
    }
  }
  FUN_00414560(&local_38,3);
  return;
}

