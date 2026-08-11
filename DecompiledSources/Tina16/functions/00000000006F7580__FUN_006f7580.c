/* Ghidra address: 006f7580 */
/* Ghidra symbol: FUN_006f7580 */


void FUN_006f7580(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong local_48;
  longlong local_40 [2];
  longlong local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x770) + 0x10) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar2 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),iVar5);
      if (*(longlong *)(lVar2 + 0x38) != 0) {
        lVar2 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),iVar5);
        if (-1 < *(int *)(lVar2 + 0x48)) {
          lVar2 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),iVar5);
          FUN_0043ea00(local_40,*(undefined8 *)(lVar2 + 0x18));
          if (local_40[0] == 0) {
            lVar2 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),iVar5);
            lVar3 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),iVar5);
            FUN_00414ad0(lVar2 + 0x18,*(undefined8 *)(lVar3 + 0x38));
          }
        }
        lVar2 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),iVar5);
        FUN_00414480(lVar2 + 0x38);
      }
      lVar2 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),iVar5);
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        lVar2 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),iVar5);
        if (-1 < *(int *)(lVar2 + 0x48)) {
          lVar2 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),iVar5);
          FUN_0043ea00(&local_48,*(undefined8 *)(lVar2 + 0x30));
          if (local_48 == 0) {
            lVar2 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),iVar5);
            lVar3 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),iVar5);
            FUN_00414ad0(lVar2 + 0x30,*(undefined8 *)(lVar3 + 0x40));
          }
        }
        lVar2 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),iVar5);
        FUN_00414480(lVar2 + 0x40);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  cVar1 = FUN_0065be20();
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x510) == '\0') {
      iVar6 = FUN_006efc30(*(undefined8 *)(param_1 + 0x4e0));
      FUN_00419260(local_30,&DAT_006f7538,1,(longlong)iVar6);
      iVar6 = FUN_006efc30();
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar5);
          *(undefined4 *)(local_30[0] + (longlong)iVar5 * 4) = *(undefined4 *)(lVar2 + 0x48);
          uVar4 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar5);
          FUN_006eeef0(uVar4,0xffffffff);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x770) + 0x10) + 0x10);
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          FUN_006f7910(param_1,iVar5);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = FUN_006efc30();
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          uVar4 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar5);
          FUN_006eeef0(uVar4,*(undefined4 *)(local_30[0] + (longlong)iVar5 * 4));
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x770) + 0x10) + 0x10);
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          FUN_006f7910(param_1,iVar5);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  FUN_00414560(&local_48,2);
  FUN_00419430(local_30,&DAT_006f7538);
  return;
}

