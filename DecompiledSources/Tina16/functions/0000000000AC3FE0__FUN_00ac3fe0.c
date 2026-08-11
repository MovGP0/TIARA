/* Ghidra address: 00ac3fe0 */
/* Ghidra symbol: FUN_00ac3fe0 */


void FUN_00ac3fe0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  if ((((char)param_1[0x1b] == '\0') || (*(char *)((longlong)param_1 + 0xbc) != '\0')) ||
     (*(char *)((longlong)param_1 + 0xbd) != '\0')) {
    FUN_00ac1af0(param_1,param_4,param_5,(int)param_1[0x32],
                 *(undefined4 *)((longlong)param_1 + 0x194),1);
    cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if (cVar1 == '\0') {
      iVar2 = (**(code **)(*param_1 + 200))(param_1);
      if (0 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0xc0))(param_1);
        if (0 < iVar2) {
          plVar5 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
          if (plVar5 != (longlong *)0x0) {
            uVar3 = (**(code **)(*param_1 + 200))(param_1);
            uVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
            (**(code **)(*plVar5 + 400))
                      (plVar5,(int)plVar5[0x12],*(undefined4 *)((longlong)plVar5 + 0x94),uVar3,uVar4
                      );
          }
        }
      }
    }
  }
  return;
}

