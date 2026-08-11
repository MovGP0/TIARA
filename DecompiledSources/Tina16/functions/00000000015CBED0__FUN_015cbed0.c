/* Ghidra address: 015cbed0 */
/* Ghidra symbol: FUN_015cbed0 */


bool FUN_015cbed0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int local_10;
  
  local_10 = (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x18))
                       (*(longlong **)(param_1 + 0x1f8),param_2,param_3);
  do {
    if (param_3 <= local_10) break;
    FUN_015c1bf0(*(undefined8 *)(param_1 + 0x130),*(int *)(*(longlong *)(param_1 + 0x130) + 0xc) + 1
                );
    FUN_015d9f40(*(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x250);
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x1f8),0);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x18))
                      (*(longlong **)(param_1 + 0x1f8),param_2 + local_10,param_3 - local_10);
    local_10 = local_10 + iVar1;
    lVar2 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x1f8));
  } while (lVar2 != 0);
  return local_10 == param_3;
}

