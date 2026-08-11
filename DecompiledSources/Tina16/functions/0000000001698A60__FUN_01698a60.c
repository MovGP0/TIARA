/* Ghidra address: 01698a60 */
/* Ghidra symbol: FUN_01698a60 */


void FUN_01698a60(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_4 == '\0') {
    piVar1 = (int *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                              (*(longlong **)(param_1 + 0x30));
  }
  else {
    piVar1 = (int *)FUN_004095c0(0x10);
    FUN_0040d200(piVar1,0x10,0);
    FUN_00611620(*(undefined8 *)(param_1 + 0x30),piVar1);
  }
  if (*(longlong *)(piVar1 + 2) == 0) {
    *piVar1 = 0;
    piVar1[1] = 10;
    uVar2 = FUN_00409570(0xa0);
    *(undefined8 *)(piVar1 + 2) = uVar2;
  }
  *(undefined8 *)(*(longlong *)(piVar1 + 2) + (longlong)*piVar1 * 0x10) = param_2;
  *(undefined8 *)(*(longlong *)(piVar1 + 2) + 8 + (longlong)*piVar1 * 0x10) = param_3;
  *piVar1 = *piVar1 + 1;
  if (piVar1[1] <= *piVar1) {
    piVar1[1] = piVar1[1] + 10;
    FUN_00409620(piVar1 + 2,(longlong)(piVar1[1] << 4));
  }
  return;
}

