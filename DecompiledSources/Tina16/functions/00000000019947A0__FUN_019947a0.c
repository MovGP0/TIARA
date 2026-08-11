/* Ghidra address: 019947a0 */
/* Ghidra symbol: FUN_019947a0 */


void FUN_019947a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  if (param_2 != (longlong *)0x0) {
    FUN_0198a680(&local_40,param_2);
    if (local_40 == 0) {
      cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
      if ((cVar1 != '\0') &&
         (((undefined **)*param_2 == &PTR_FUN_017c0190 ||
          ((undefined **)*param_2 == &PTR_FUN_01cf10a8)))) {
        (**(code **)(*param_2 + 0x68))
                  (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x210),&local_38);
        if (*(char *)(param_1 + 0x4f) == '\0') {
          FUN_00b957c0(param_1 + 0x50,&local_38);
        }
        else {
          *(undefined8 *)(param_1 + 0x50) = local_38;
          *(undefined8 *)(param_1 + 0x58) = uStack_30;
          *(undefined1 *)(param_1 + 0x4f) = 0;
        }
        **(int **)(param_1 + 0x88) = **(int **)(param_1 + 0x88) + 1;
      }
    }
  }
  FUN_00414480(&local_40);
  return;
}

