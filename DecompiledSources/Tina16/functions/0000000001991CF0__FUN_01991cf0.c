/* Ghidra address: 01991cf0 */
/* Ghidra symbol: FUN_01991cf0 */


undefined8 FUN_01991cf0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    if ((cVar1 != '\0') && (param_2 != *(longlong **)(param_1 + 0x98))) {
      cVar1 = FUN_0198a580(param_2);
      uVar4 = uVar3;
      if (cVar1 == '\x05') {
        iVar2 = (**(code **)(*param_2 + 0x1f8))
                          (param_2,*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
        if (iVar2 == -1) {
          iVar2 = (**(code **)(*param_2 + 0x200))
                            (param_2,*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8)
                            );
        }
        if (iVar2 != -1) {
          if ((undefined **)*param_2 == &PTR_FUN_017c0190) {
            cVar1 = (**(code **)(*param_2 + 600))(param_2,iVar2);
            if (cVar1 == '\0') {
              if (*(int *)(param_1 + 0x50) < 2) {
                FUN_00b95340(param_1 + 0x40,param_2);
              }
              else {
                uVar4 = 1;
              }
            }
          }
          else {
            uVar4 = 1;
          }
        }
      }
    }
  }
  return uVar4;
}

