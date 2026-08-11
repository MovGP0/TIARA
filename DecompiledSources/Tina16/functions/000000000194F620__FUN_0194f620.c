/* Ghidra address: 0194f620 */
/* Ghidra symbol: FUN_0194f620 */


void FUN_0194f620(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_00411a80(param_1,param_2);
  if (param_1[0x28] != 0) {
    FUN_0197e4f0(param_1[0x28],0);
  }
  param_1[0x28] = 0;
  plVar1 = (longlong *)param_1[0x12];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1);
  }
  (**(code **)(*param_1 + 0xc0))(param_1,0);
  (**(code **)(*param_1 + 0x1b8))(param_1);
  FUN_00452320(param_1 + 0xf);
  FUN_00410f20(param_1[0x10]);
  FUN_00410f20(param_1[0x11]);
  FUN_00452320(param_1 + 0x12);
  cVar2 = FUN_01950830(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0xb8))(param_1,0);
  }
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

