/* Ghidra address: 019a4770 */
/* Ghidra symbol: FUN_019a4770 */


undefined8 FUN_019a4770(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_2 + 0x1f8))
                        (param_2,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
      **(undefined4 **)(param_1 + 0x70) = uVar2;
      if (**(int **)(param_1 + 0x70) == -1) {
        uVar2 = (**(code **)(*param_2 + 0x200))
                          (param_2,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
        **(undefined4 **)(param_1 + 0x70) = uVar2;
      }
      if (**(int **)(param_1 + 0x70) != -1) {
        if ((undefined **)*param_2 == &PTR_FUN_017c0190) {
          uVar3 = 0;
          if (**(longlong **)(param_1 + 0x68) == 0) {
            **(undefined8 **)(param_1 + 0x68) = param_2;
          }
        }
        else {
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}

