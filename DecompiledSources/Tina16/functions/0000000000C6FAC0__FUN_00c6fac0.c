/* Ghidra address: 00c6fac0 */
/* Ghidra symbol: FUN_00c6fac0 */


void FUN_00c6fac0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *local_res18 [2];
  undefined8 local_30 [2];
  undefined1 local_20 [4];
  undefined1 local_1c [12];
  
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 == '\a') {
    thunk_FUN_041a6fb0(0,0,param_2);
  }
  else if (cVar1 == '\t') {
    thunk_FUN_041a6fb0(0,0x11,param_2);
  }
  else if (cVar1 == '\x0e') {
    thunk_FUN_041a6fb0(0,6,param_2);
  }
  else if (cVar1 == '\r') {
    thunk_FUN_041a6fb0(0,5,param_2);
  }
  else if (cVar1 == '\f') {
    thunk_FUN_041a6fb0(0,0x12,param_2);
  }
  else {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      uVar2 = FUN_00418700(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      FUN_00c701e0(local_30,*(undefined8 *)(param_1 + 0x48));
      uVar2 = FUN_00418700(local_30[0]);
    }
    (**(code **)(*local_res18[0] + 0x18))(local_res18[0],0,0,uVar2,local_1c,param_2,local_20);
    thunk_FUN_041b9bbd(uVar2);
  }
  FUN_00414480(local_30);
  FUN_0041b800(local_res18);
  return;
}

