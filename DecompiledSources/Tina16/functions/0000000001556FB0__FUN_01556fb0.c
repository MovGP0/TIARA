/* Ghidra address: 01556fb0 */
/* Ghidra symbol: FUN_01556fb0 */


void FUN_01556fb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + 0x750) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_01571ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x750),iVar3);
      if (*(char *)(lVar2 + 0x98) != '\0') {
        if (*(int *)(lVar2 + 0x34) == -1) {
          FUN_00414480(local_30);
        }
        else {
          FUN_01d43440(local_40,*(int *)(lVar2 + 0x34) + -1);
          FUN_00416cd0(local_30,3,L" := \'",local_40[0],&DAT_01557170);
        }
        FUN_01550c40(*(undefined8 *)(param_1 + 0x270),&local_48,lVar2);
        FUN_00416cd0(param_1 + 0x228,4,L" signal ",local_48,L": std_logic",&LAB_015571c4);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
        (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x228));
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return;
}

