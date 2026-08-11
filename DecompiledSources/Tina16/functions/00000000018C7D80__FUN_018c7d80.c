/* Ghidra address: 018c7d80 */
/* Ghidra symbol: FUN_018c7d80 */


void FUN_018c7d80(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  iVar3 = *(int *)(*(longlong *)(param_3 + 0x208) + 0x10) + -1;
  if (param_4 <= iVar3) {
    iVar4 = (iVar3 - param_4) + 1;
    iVar3 = param_4;
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_3 + 0x208),iVar3);
      if (param_5 == '\0') {
        *(int *)(lVar1 + 0x228) = *(int *)(lVar1 + 0x228) + 1;
        if (iVar3 < *(int *)(*(longlong *)(param_3 + 0x208) + 0x10) + -1) {
          lVar2 = FUN_004aeac0(*(longlong *)(param_3 + 0x208),iVar3 + 1);
          *(undefined4 *)(lVar2 + 0x228) = 0;
        }
        *(int *)(lVar1 + 0x22c) = *(int *)(lVar1 + 0x22c) + 1;
      }
      else {
        *(undefined4 *)(lVar1 + 0x228) = 1;
        *(undefined4 *)(lVar1 + 0x22c) = 1;
        FUN_018c7b00(param_1,lVar1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_019694e0(param_2,1);
  FUN_018c80c0(param_1,param_2,param_3);
  iVar3 = *(int *)(*(longlong *)(param_3 + 0x208) + 0x10) + -1;
  if (param_4 <= iVar3) {
    iVar3 = (iVar3 - param_4) + 1;
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_3 + 0x208),param_4);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar1 + 0x228);
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(lVar1 + 0x22c);
      FUN_00414ad0(param_1[8] + 0x158,*(undefined8 *)(lVar1 + 0x10));
      FUN_01970cf0(param_1[8],&local_40,*(undefined8 *)(lVar1 + 0x240),0);
      FUN_00461840(lVar1 + 600,&local_40);
      if (*(char *)(lVar1 + 0x254) != '\0') {
        FUN_018cf230(param_1,lVar1,0);
      }
      if (lVar1 != 0) {
        FUN_0197f750(*(undefined8 *)(param_1[7] + 0x48));
      }
      (**(code **)(*param_1 + 0x58))(param_1,lVar1);
      FUN_018cf3c0(param_1,lVar1);
      if (*(char *)(lVar1 + 0x1cc) == '\0') {
        FUN_018cb3b0(param_1,lVar1);
      }
      else {
        FUN_018cb440(param_1,lVar1);
      }
      param_4 = param_4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00460ba0(&local_40);
  return;
}

