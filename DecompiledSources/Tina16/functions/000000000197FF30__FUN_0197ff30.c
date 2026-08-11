/* Ghidra address: 0197ff30 */
/* Ghidra symbol: FUN_0197ff30 */


int FUN_0197ff30(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  int local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_4 != '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    if ((0 < iVar2) && (*(char *)(param_1 + 0x48) == '\0')) {
      plVar1 = *(longlong **)(param_1 + 8);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x18))(plVar1,local_20,iVar2 + -1);
      iVar2 = FUN_00416420(param_2,local_20[0]);
      if (iVar2 == 0) {
        local_24 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
        local_24 = local_24 + -1;
        goto LAB_0197ffef;
      }
    }
  }
  local_24 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))
                       (*(longlong **)(param_1 + 8),param_2,param_3);
  *(undefined1 *)(param_1 + 0x48) = 0;
LAB_0197ffef:
  FUN_00414520(local_20);
  return local_24;
}

