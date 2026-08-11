/* Ghidra address: 0113dca0 */
/* Ghidra symbol: FUN_0113dca0 */


void FUN_0113dca0(longlong param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x958) + 0x328) != '\0') {
    return;
  }
  sVar1 = *param_3;
  if (sVar1 == 0x25) {
    *param_3 = 0;
    FUN_0113bdc0(param_1,param_1);
    goto LAB_0113dd34;
  }
  if (sVar1 != 0x26) {
    if (sVar1 == 0x27) {
      *param_3 = 0;
      FUN_0113c0e0(param_1,param_1);
      goto LAB_0113dd34;
    }
    if (sVar1 != 0x28) {
      if (*param_3 != 0) {
        FUN_01137540(param_1,1);
      }
      goto LAB_0113dd34;
    }
  }
  FUN_0113d790(param_1,param_1);
  *param_3 = 0;
LAB_0113dd34:
  (**(code **)(**(longlong **)(param_1 + 0x960) + 0x290))
            (*(longlong **)(param_1 + 0x960),*(undefined4 *)(param_1 + 0xa6c));
  (**(code **)(**(longlong **)(param_1 + 0x960) + 0x288))(*(longlong **)(param_1 + 0x960),1);
  return;
}

