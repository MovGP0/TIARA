/* Ghidra address: 01c72920 */
/* Ghidra symbol: FUN_01c72920 */


void FUN_01c72920(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_0198a580(param_2);
    if ((cVar1 == '\x04') && (param_2 != DAT_03566810)) {
      iVar2 = FUN_01d07010(param_2);
      if (*(int *)(param_1 + 0x2c) == iVar2) {
        cVar1 = (**(code **)(*param_2 + 0x2d8))(param_2);
        if (cVar1 != '\0') {
          uVar3 = FUN_0198d430(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x30) + 0x27a8));
          (**(code **)(*(longlong *)param_2[0x33] + 0x38))((longlong *)param_2[0x33],uVar3);
        }
      }
    }
  }
  return;
}

