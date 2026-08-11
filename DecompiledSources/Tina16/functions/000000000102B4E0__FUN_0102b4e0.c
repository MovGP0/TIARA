/* Ghidra address: 0102b4e0 */
/* Ghidra symbol: FUN_0102b4e0 */


void FUN_0102b4e0(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x90),iVar3);
      if (*(char *)(lVar2 + 0x30) == '\x05') {
        if (*(char *)(lVar2 + 0x125) == '\0') {
          dVar5 = (double)*(int *)(lVar2 + 0x120) / 1000.0;
        }
        else {
          dVar5 = (double)*(int *)(lVar2 + 0x120) / 1000000.0;
        }
        iVar1 = FUN_0040c770(dVar5 / (1.0 / *(double *)(param_1 + 0x78)));
        if (iVar1 == 0) {
          iVar1 = 1;
        }
        if (param_3 == '\0') {
          *(undefined4 *)(param_1 + 0xbe8) = 1;
        }
        else {
          FUN_00416780(&local_48,*(undefined2 *)(param_1 + 0xb0));
          FUN_00416cd0(local_40,4,*(undefined8 *)(lVar2 + 0x100),&DAT_0102b758,local_48,
                       L"; delay block");
          FUN_00f788b0(param_1,param_2,local_40[0]);
          FUN_0043f750(&local_58,*(undefined4 *)(param_1 + 0xbe8));
          FUN_00416cd0(&local_50,3,L"DELAY",local_58,&DAT_0102b758);
          FUN_00f788b0(param_1,param_2,local_50);
          *(int *)(param_1 + 0xbe8) = *(int *)(param_1 + 0xbe8) + 1;
        }
        iVar1 = FUN_0102af90(param_1,param_2,iVar1,param_3);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar1;
        if (param_3 != '\0') {
          *(undefined1 *)(param_1 + 0xbec) = 0;
          FUN_00f787d0(param_1,param_2,L"RET ");
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_58,4);
  FUN_00414480(&local_30);
  return;
}

