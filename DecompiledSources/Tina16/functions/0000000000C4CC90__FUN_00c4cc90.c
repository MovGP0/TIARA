/* Ghidra address: 00c4cc90 */
/* Ghidra symbol: FUN_00c4cc90 */


undefined4 FUN_00c4cc90(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30[0] = 0;
  FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,&local_58);
  FUN_0043e1a0(&local_50,local_58);
  FUN_00441920(&local_48,local_50);
  FUN_004414c0(local_40,local_48,0);
  FUN_0043e1a0(local_30,local_40[0]);
  iVar2 = FUN_004170c0(&DAT_00c4ce68,local_30[0],1);
  if (iVar2 != 0) {
    iVar2 = FUN_004170c0(&DAT_00c4ce68,local_30[0],1);
    FUN_00416dc0(local_30,local_30[0],1,iVar2 + -1);
  }
  iVar2 = 0;
  pcVar4 = &DAT_01ea4370;
  ppuVar5 = &PTR_u_pcbviewer_tina_01ea4368;
  do {
    if (*pcVar4 == DAT_01ea4364) {
LAB_00c4cdab:
      *(int *)(param_1 + 0x80) = iVar2;
      break;
    }
    if (pcVar4[1] == DAT_01ea4364) {
      iVar3 = FUN_004170c0(local_30[0],*ppuVar5,1);
      if (0 < iVar3) goto LAB_00c4cdab;
    }
    iVar2 = iVar2 + 1;
    ppuVar5 = ppuVar5 + 1;
    pcVar4 = pcVar4 + 2;
  } while (iVar2 != 2);
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  FUN_0043f750(&local_68,uVar1);
  FUN_00416ba0(&local_60,L"FindSMemConnIndex ",local_68);
  FUN_00c4c420(local_60);
  FUN_00414560(&local_68,6);
  FUN_00414480(local_30);
  return uVar1;
}

