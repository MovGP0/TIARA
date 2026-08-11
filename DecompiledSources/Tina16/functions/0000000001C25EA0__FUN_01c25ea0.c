/* Ghidra address: 01c25ea0 */
/* Ghidra symbol: FUN_01c25ea0 */


void FUN_01c25ea0(longlong *param_1,undefined4 param_2,ushort param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong local_30;
  
  if ((param_3 & 0x10) == 0) {
    local_30 = CONCAT44(param_5,param_4);
    param_1[0xaa] = local_30;
    lVar3 = param_1[0xa8];
    if (lVar3 == 0) {
      iVar5 = 0;
      while( true ) {
        iVar2 = FUN_01c232b0(param_1);
        if ((iVar2 <= iVar5) || (param_1[0xa8] != 0)) break;
        lVar3 = FUN_01c233d0(param_1,iVar5);
        cVar1 = FUN_004231e0(lVar3 + 0x20,&local_30);
        if (cVar1 == '\0') {
          iVar5 = iVar5 + 1;
        }
        else {
          lVar3 = FUN_01c233d0(param_1,iVar5);
          param_1[0xa8] = lVar3;
          lVar3 = FUN_01c233d0(param_1,iVar5);
          *(int *)(param_1 + 0xa9) = param_4 - *(int *)(lVar3 + 0x20);
          lVar3 = FUN_01c233d0(param_1,iVar5);
          *(int *)((longlong)param_1 + 0x54c) = param_5 - *(int *)(lVar3 + 0x24);
          if (*(longlong *)(param_1[0xa8] + 8) == 0) {
            param_1[0xab] = 0;
          }
          else {
            param_1[0xab] = *(longlong *)(param_1[0xa8] + 8);
            FUN_01c235f0(param_1,param_1[0xa8],*(undefined8 *)(param_1[0xa8] + 8));
            uVar4 = FUN_01c233d0(param_1,iVar5);
            iVar2 = FUN_01c23490(param_1,uVar4);
            if (iVar2 < (int)param_1[0xa9]) {
              *(int *)(param_1 + 0xa9) = iVar2 / 2;
            }
            if (0x14 < *(int *)((longlong)param_1 + 0x54c)) {
              *(undefined4 *)((longlong)param_1 + 0x54c) = 10;
            }
          }
        }
      }
      cVar1 = FUN_004231e0((longlong)param_1 + 0x52c,&local_30);
      if (cVar1 == '\0') {
        FUN_004231e0((longlong)param_1 + 0x51c,&local_30);
      }
      else if (param_1[0xa8] == 0) {
        *(undefined1 *)(param_1 + 0xb0) = 1;
        param_1[0xaf] = CONCAT44(param_5,param_4);
        param_1[0xae] = param_1[0xad];
      }
    }
    else {
      if ((char)param_1[0xb9] == '\0') {
        if (*(longlong *)(lVar3 + 0x10) == 0) {
          FUN_01c23570(param_1,lVar3,param_1[0xab]);
        }
        else {
          FUN_01c23570(param_1,lVar3,*(longlong *)(lVar3 + 0x10));
        }
      }
      else {
        FUN_01c23570(param_1,lVar3,*(undefined8 *)(lVar3 + 0x10));
      }
      param_1[0xa8] = 0;
    }
  }
  else {
    param_1[0xb6] = param_1[0xac];
    *(undefined1 *)(param_1 + 0xb4) = 1;
    *(ulonglong *)((longlong)param_1 + 0x5a4) = CONCAT44(param_5,param_4);
  }
  (**(code **)(*param_1 + 600))(param_1);
  (**(code **)(*param_1 + 0x260))(param_1);
  FUN_01c27100(param_1,param_4,param_5);
  FUN_00650920(param_1,param_2,param_3,param_4,param_5);
  return;
}

