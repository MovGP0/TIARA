/* Ghidra address: 006efbb0 */
/* Ghidra symbol: FUN_006efbb0 */


longlong FUN_006efbb0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 local_80 [88];
  
  if (param_2 == 0) {
    param_2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x2c0))(*(longlong **)(param_1 + 8));
  }
  if (param_3 < 0) {
    param_3 = FUN_006efc30(param_1);
  }
  uVar1 = FUN_006efc90(param_1);
  FUN_006f1460(param_1,local_80,param_3,param_2);
  thunk_FUN_041b2403(uVar1,0x104d,0,local_80);
  return param_2;
}

