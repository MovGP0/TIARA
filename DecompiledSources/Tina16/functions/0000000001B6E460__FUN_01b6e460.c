/* Ghidra address: 01b6e460 */
/* Ghidra symbol: FUN_01b6e460 */


void FUN_01b6e460(longlong param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 local_38 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x98))
                    (*(longlong **)(param_1 + 0x9d8),param_2);
  if (cVar1 != '\0') {
    local_38[0] = 0x537;
    local_30 = 0;
    local_28 = (ulonglong)*param_2;
    FUN_01b6d8c0(param_1,local_38);
    *(undefined1 *)(*(longlong *)(param_1 + 0x9d8) + 0x69) = 1;
    while (((*param_2 != *(byte *)(param_1 + 0x9ca) ||
            (*(char *)(*(longlong *)(param_1 + 0x9d8) + 0x69) == '\0')) &&
           (*(char *)(param_1 + 0x9cc) == '\0'))) {
      FUN_00f835c0(10);
    }
  }
  bVar2 = FUN_01b6e500(param_1);
  *param_2 = bVar2;
  return;
}

