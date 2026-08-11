/* Ghidra address: 0129ede0 */
/* Ghidra symbol: FUN_0129ede0 */


void FUN_0129ede0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  ulonglong in_stack_ffffffffffffffb8;
  undefined8 local_30;
  
  local_30 = 0;
  if (*(char *)(param_1 + 0x4c8) != '\0') {
    in_stack_ffffffffffffffb8 = *(ulonglong *)(param_1 + 0xd0);
    FUN_017ce930(param_1,1,0,0,*(double *)(param_1 + 0x3a8) - 1.0,0,in_stack_ffffffffffffffb8);
  }
  if (0 < *(int *)(*(longlong *)(param_1 + 0x4f8) + 0x10)) {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x4f8) + 0x10);
    uVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x4f8);
        if (*(uint *)(lVar1 + 0x10) <= uVar4) {
          FUN_00594f90();
        }
        plVar2 = *(longlong **)
                  (*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8) + 0x18);
        (**(code **)(*plVar2 + 0x288))(plVar2,&local_30);
        (**(code **)(*plVar3 + 0x80))(plVar3,local_30,1);
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_01cc3330(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 8),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x4f8) + 0x10),plVar3,0,1,0,
                 in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
    FUN_00410f20(plVar3);
  }
  FUN_00414480(&local_30);
  return;
}

