/* Ghidra address: 01992210 */
/* Ghidra symbol: FUN_01992210 */


undefined8 FUN_01992210(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*param_2 + 0x1f8))
                        (param_2,*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
      if (iVar2 != -1) {
        if ((undefined **)*param_2 == &PTR_FUN_017c0190) {
          FUN_00b95340(param_1 + 0x60,param_2);
        }
        else if ((undefined **)*param_2 != &PTR_FUN_017bca38) {
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        }
      }
    }
  }
  return 0;
}

