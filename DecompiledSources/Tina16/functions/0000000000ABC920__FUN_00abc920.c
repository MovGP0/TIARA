/* Ghidra address: 00abc920 */
/* Ghidra symbol: FUN_00abc920 */


int FUN_00abc920(longlong param_1,undefined8 param_2,int param_3,int param_4,int *param_5,
                int *param_6,undefined4 *param_7,undefined1 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int local_4c;
  undefined1 local_3c [12];
  
  local_4c = -1;
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x7c);
  iVar6 = 0;
  if (iVar1 < param_4) {
    lVar7 = 0;
    while( true ) {
      if (*(int *)(*(longlong *)(param_1 + 0xf0) + 0x10) <= iVar5) break;
      lVar7 = FUN_00ac5680(*(longlong *)(param_1 + 0xf0),iVar5);
      iVar2 = *(int *)(lVar7 + 0x18) + *(int *)(lVar7 + 0x10) + *(int *)(lVar7 + 0x14);
      if (param_4 < iVar1 + iVar2) break;
      iVar1 = iVar1 + iVar2;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + *(int *)(lVar7 + 0x20);
    }
    if (iVar5 < *(int *)(*(longlong *)(param_1 + 0xf0) + 0x10)) {
      iVar5 = *(int *)(lVar7 + 0x2c);
      if ((param_3 <= iVar5 + *(int *)(lVar7 + 0x30)) && (iVar5 + -10 <= param_3)) {
        *param_8 = 1;
        *param_7 = *(undefined4 *)(lVar7 + 0x18);
        *param_6 = iVar1 + *(int *)(lVar7 + 0x10);
        if (param_3 < iVar5) {
          local_4c = iVar6 + *(int *)(param_1 + 0x68);
          *param_8 = 0;
        }
        else {
          if ((*(char *)(param_1 + 0x120) == '\x04') && (0 < *(int *)(lVar7 + 0x38))) {
            uVar4 = FUN_005ffa40(param_2);
            thunk_FUN_04186fad(uVar4,*(undefined4 *)(lVar7 + 0x3c),*(undefined4 *)(lVar7 + 0x38));
          }
          uVar8 = *(uint *)(lVar7 + 0x20);
          iVar1 = FUN_00ab5e00(param_1,param_2,param_3 - iVar5,*(undefined8 *)(lVar7 + 8),uVar8);
          iVar2 = FUN_00ab6950(param_1,param_2,*(undefined8 *)(lVar7 + 8),iVar1,uVar8 & 0xffffff00);
          *param_5 = *(int *)(lVar7 + 0x2c) + iVar2;
          if (iVar1 < *(int *)(lVar7 + 0x20)) {
            uVar4 = FUN_00a94980(*(undefined8 *)(param_1 + 0x118),iVar6 + iVar1,local_3c);
            FUN_00a4df80(uVar4,param_2);
            iVar3 = FUN_00ab6b60(param_1,param_2,*(longlong *)(lVar7 + 8) + (longlong)iVar1 * 2,1);
            if (iVar2 + iVar3 / 2 < param_3 - iVar5) {
              iVar1 = iVar1 + 1;
              *param_5 = *param_5 + iVar3;
            }
          }
          else {
            *param_8 = 0;
          }
          local_4c = iVar1 + iVar6 + *(int *)(param_1 + 0x68);
          if (*(char *)(param_1 + 0x120) == '\x04') {
            uVar4 = FUN_005ffa40(param_2);
            thunk_FUN_04186fad(uVar4,0,0);
          }
        }
      }
    }
  }
  return local_4c;
}

