/* Ghidra address: 0104eaa0 */
/* Ghidra symbol: FUN_0104eaa0 */


void FUN_0104eaa0(longlong param_1,undefined1 param_2,undefined8 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00f64920(*(undefined8 *)(param_1 + 0x980),param_2,param_3,param_4,param_5,param_6);
  if (iVar2 == 2) {
    FUN_0104e7b0(param_1);
  }
  cVar1 = FUN_00f629a0(*(undefined8 *)(param_1 + 0x980));
  if (cVar1 != '\0') {
    FUN_01053e80(param_1,1);
  }
  return;
}

