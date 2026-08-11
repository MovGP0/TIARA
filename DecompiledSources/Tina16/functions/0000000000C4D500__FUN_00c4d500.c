/* Ghidra address: 00c4d500 */
/* Ghidra symbol: FUN_00c4d500 */


void FUN_00c4d500(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  if (param_2 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_0043f750(&local_38,uVar2);
    FUN_00416cd0(&local_30,3,L"Processing ",local_38,L" lines");
    FUN_00c4c420(local_30);
    iVar3 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar3 != 0) {
      if (param_1 == DAT_02019ca0) {
        iVar3 = *(int *)(DAT_02019c78 + 0x10);
        uVar4 = 0;
        if (-1 < iVar3 + -1) {
          do {
            if (*(uint *)(DAT_02019c78 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            lVar5 = (longlong)(int)uVar4;
            if (*(longlong *)(*(longlong *)(DAT_02019c78 + 8) + lVar5 * 8) != param_1) {
              if (*(uint *)(DAT_02019c78 + 0x10) <= uVar4) {
                FUN_00594f90();
              }
              cVar1 = FUN_004113d0(*(undefined8 *)(*(longlong *)(DAT_02019c78 + 8) + lVar5 * 8),
                                   &PTR_FUN_00c49930);
              if (cVar1 != '\0') {
                if (*(uint *)(DAT_02019c78 + 0x10) <= uVar4) {
                  FUN_00594f90();
                }
                FUN_00c4d500(*(undefined8 *)(*(longlong *)(DAT_02019c78 + 8) + lVar5 * 8),param_2);
              }
            }
            uVar4 = uVar4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_00c4c420(L"Calling OnExecuteMacro");
        (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0x88),param_1,param_2);
      }
    }
  }
  FUN_00414560(&local_38,2);
  return;
}

