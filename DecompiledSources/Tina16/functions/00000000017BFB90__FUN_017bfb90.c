/* Ghidra address: 017bfb90 */
/* Ghidra symbol: FUN_017bfb90 */


void FUN_017bfb90(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x508) == 1) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_10);
    if (local_10 == 0) {
      if (*(char *)(param_1 + 0x718) == '\0') {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                          (*(longlong **)(param_1 + 0x6f0));
        if (cVar2 == '\0') {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
          iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
          if (iVar4 == 0) goto LAB_017bfc1c;
        }
      }
      uVar3 = 0;
      goto LAB_017bfc1e;
    }
  }
LAB_017bfc1c:
  uVar3 = 1;
LAB_017bfc1e:
  *param_3 = uVar3;
  FUN_00414480(&local_10);
  return;
}

