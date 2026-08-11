/* Ghidra address: 00abbf50 */
/* Ghidra symbol: FUN_00abbf50 */


int FUN_00abbf50(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [44];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  local_38 = *(int *)(param_1 + 0x74);
  iVar4 = local_38 + *(int *)(param_1 + 0x88);
  if ((*(longlong *)(param_1 + 0x20) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0x4c) != '\x03')) {
    local_3c = *(int *)(*(longlong *)(param_1 + 0x18) + 0x94);
  }
  else {
    local_3c = 0;
  }
  if (((0 < *(int *)(param_1 + 0x6c)) &&
      (*(int *)(param_3 + 4) <= (local_38 - local_3c) + *(int *)(param_1 + 0x8c) + 0x28)) &&
     ((local_38 - local_3c) + -0x28 < *(int *)(param_3 + 0xc))) {
    uVar2 = FUN_005ffa40(param_2);
    thunk_FUN_041afa90(uVar2,0x18);
    local_34 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x9c) - *(int *)(param_1 + 0x68);
    local_30 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xa0) - *(int *)(param_1 + 0x68);
    iVar1 = 0;
    iVar5 = *(int *)(*(longlong *)(param_1 + 0xf0) + 0x10);
    if (-1 < iVar5 + -1) {
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x92) == '\0') {
          lVar3 = FUN_00ac5680(*(undefined8 *)(param_1 + 0xf0),iVar1);
          if (((local_38 - local_3c) + *(int *)(lVar3 + 0x1c) + 0x28 < *(int *)(param_3 + 4)) ||
             (*(int *)(param_3 + 0xc) <= (local_38 - local_3c) + -0x28)) {
            local_38 = local_38 +
                       *(int *)(lVar3 + 0x10) + *(int *)(lVar3 + 0x18) + *(int *)(lVar3 + 0x14);
          }
          else {
            FUN_00abbe00(auStack_68,iVar1);
          }
        }
        else {
          lVar3 = FUN_00ac5680(*(undefined8 *)(param_1 + 0xf0),iVar1);
          if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x218) < local_38 + *(int *)(lVar3 + 0x1c)) {
            if ((*(int *)(lVar3 + 0x1c) < *(int *)(param_3 + 0xc) - *(int *)(param_3 + 4)) &&
               (*(char *)(*(longlong *)(param_1 + 0x18) + 0x21c) == '\0')) {
              if ((*(longlong *)(param_1 + 0x20) == 0) ||
                 (*(char *)(*(longlong *)(param_1 + 0x20) + 0x4c) != '\x02')) {
                if (local_38 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x218)) {
                  *(int *)(*(longlong *)(param_1 + 0x18) + 0x218) = local_38;
                }
              }
              else {
                FUN_00abbe00(auStack_68,iVar1);
              }
            }
            else {
              FUN_00abbe00(auStack_68,iVar1);
            }
          }
          else if (*(int *)(param_3 + 4) < (local_38 - local_3c) + *(int *)(lVar3 + 0x1c) + -1) {
            FUN_00abbe00(auStack_68,iVar1);
          }
          else {
            local_38 = local_38 +
                       *(int *)(lVar3 + 0x10) + *(int *)(lVar3 + 0x18) + *(int *)(lVar3 + 0x14);
          }
        }
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return iVar4;
}

