/* Ghidra address: 01950eb0 */
/* Ghidra symbol: FUN_01950eb0 */


undefined8 FUN_01950eb0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == (longlong *)0x0) {
LAB_01950eff:
    uVar2 = 1;
  }
  else {
    if (param_2 != (longlong *)0x0) {
      cVar1 = (**(code **)(*param_1 + 0x240))(param_1);
      if ((cVar1 != '\0') && (param_2 != param_1)) {
        cVar1 = (**(code **)(*param_2 + 0x238))(param_2,param_1);
        if ((cVar1 != '\0') && ((*(byte *)(param_2 + 0x1a) & 0x10) == 0)) goto LAB_01950eff;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

