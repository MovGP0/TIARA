/* Ghidra address: 006dd110 */
/* Ghidra symbol: FUN_006dd110 */


void FUN_006dd110(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    lVar2 = FUN_006dc7a0(param_1);
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
      cVar1 = FUN_006dd100(param_1);
      if (param_2 == cVar1) {
        lVar2 = FUN_006dc7c0(param_1);
        if (*(char *)(lVar2 + 0x560) != '\0') {
          lVar2 = FUN_006dc7c0(param_1);
          if (1 < *(int *)(*(longlong *)(lVar2 + 0x568) + 0x10)) {
            plVar4 = (longlong *)FUN_006dc7c0(param_1);
            (**(code **)(*plVar4 + 0x298))(plVar4,param_1,0);
          }
        }
      }
      else if (param_2 == '\0') {
        cVar1 = FUN_006dd100(param_1);
        if (cVar1 != '\0') {
          uVar3 = FUN_006dc7a0(param_1);
          FUN_00612090(uVar3,0);
        }
      }
      else {
        uVar3 = FUN_006dc7a0(param_1);
        FUN_00612090(uVar3,*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
  return;
}

