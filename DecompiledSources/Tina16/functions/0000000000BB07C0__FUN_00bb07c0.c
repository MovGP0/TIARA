/* Ghidra address: 00bb07c0 */
/* Ghidra symbol: FUN_00bb07c0 */


void FUN_00bb07c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *local_38;
  undefined8 local_30 [2];
  longlong *local_20 [2];
  
  local_30[0] = 0;
  local_38 = (longlong *)0x0;
  local_20[0] = (longlong *)0x0;
  lVar1 = FUN_00bb3340(*(undefined8 *)(param_1 + 0x18),param_2);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x60;
  }
  FUN_0041b840(local_20,lVar1);
  (**(code **)(*local_20[0] + 0x110))(local_20[0],param_3);
  FUN_00baec20(param_1,&local_38);
  (**(code **)(*local_38 + 0x68))(local_38,local_30,local_20[0]);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  FUN_0041b800(local_20);
  return;
}

