/* Ghidra address: 0081a200 */
/* Ghidra symbol: FUN_0081a200 */


void FUN_0081a200(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00818440(param_1);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    (**(code **)(*(longlong *)param_1[2] + -0x38))((longlong *)param_1[2],param_2);
    (**(code **)(*param_1 + 0x60))(param_1);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

