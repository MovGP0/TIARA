/* Ghidra address: 01788c20 */
/* Ghidra symbol: FUN_01788c20 */


void FUN_01788c20(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined4 local_2c [3];
  
  local_40[0] = 0;
  local_48 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0xb0))
            (*(longlong **)(param_1 + 0x730),L"Color Dialog Custom Colors",
             *(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0xd8));
  lVar1 = *(longlong *)(param_1 + 0x738);
  uVar6 = param_4 - *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4c0);
  if (*(uint *)(lVar1 + 0x10) <= uVar6) {
    FUN_00594f90();
  }
  plVar2 = *(longlong **)(param_1 + 0x710);
  *(undefined4 *)(plVar2 + 0x1a) =
       *(undefined4 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar6 * 4);
  cVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  if (cVar3 != '\0') {
    local_2c[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x710) + 0xd0);
    FUN_00595250(*(longlong *)(param_1 + 0x738) + 8,local_2c,
                 param_4 - *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4c0));
    lVar1 = *(longlong *)(param_1 + 0x738);
    uVar6 = param_4 - *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4c0);
    if (*(uint *)(lVar1 + 0x10) <= uVar6) {
      FUN_00594f90();
    }
    FUN_00f025d0(*(undefined8 *)(param_1 + 0x6d0),
                 *(undefined4 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar6 * 4));
    iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x710) + 0xd8) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar4 + -1) {
      do {
        FUN_004b3cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0xd8),local_40,iVar5);
        FUN_004b5390(*(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0xd8),&local_48,iVar5);
        (**(code **)(**(longlong **)(param_1 + 0x730) + 0x18))
                  (*(longlong **)(param_1 + 0x730),L"Color Dialog Custom Colors",local_40[0],
                   local_48);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414560(&local_48,2);
  return;
}

