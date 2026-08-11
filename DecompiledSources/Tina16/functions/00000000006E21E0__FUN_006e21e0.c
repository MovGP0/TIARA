/* Ghidra address: 006e21e0 */
/* Ghidra symbol: FUN_006e21e0 */


undefined8 FUN_006e21e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_20;
  
  local_30 = param_2;
  local_2c = param_3;
  uVar1 = FUN_0065b870(param_1);
  lVar2 = thunk_FUN_041b2403(uVar1,0x1111,0,&local_30);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_006df650(*(undefined8 *)(param_1 + 0x550),local_20);
  }
  return uVar1;
}

