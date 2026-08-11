/* Ghidra address: 01966d70 */
/* Ghidra symbol: FUN_01966d70 */


void FUN_01966d70(longlong param_1,undefined1 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_3 + 0x40))(param_3);
    if (cVar1 == '\0') {
      (**(code **)(*param_3 + 0x30))
                (param_3,*(undefined8 *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2c0));
    }
    else {
      (**(code **)(*param_3 + 0x38))(param_3,local_20,param_2,*(undefined4 *)(param_1 + 0x2c0));
      FUN_0041b840(param_1 + 0x2d8,local_20[0]);
    }
  }
  FUN_0041b800(local_20);
  return;
}

