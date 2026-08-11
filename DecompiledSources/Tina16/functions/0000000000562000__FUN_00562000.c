/* Ghidra address: 00562000 */
/* Ghidra symbol: FUN_00562000 */


undefined1 FUN_00562000(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_29;
  longlong *local_20;
  
  local_20 = (longlong *)0x0;
  FUN_00520050();
  iVar3 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      if ((*(int *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18) != -1) &&
         (cVar1 = (**(code **)(*local_20 + 0x18))
                            (local_20,*(undefined8 *)
                                       (*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18),
                             param_2), cVar1 != '\0')) {
        local_29 = 1;
        goto LAB_0056209e;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_29 = 0;
LAB_0056209e:
  FUN_0041b800(&local_20);
  return local_29;
}

