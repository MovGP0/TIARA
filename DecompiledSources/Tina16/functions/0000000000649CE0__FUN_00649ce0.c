/* Ghidra address: 00649ce0 */
/* Ghidra symbol: FUN_00649ce0 */


undefined8
FUN_00649ce0(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  uVar1 = 0;
  if (param_1 != 0) {
    local_28 = *param_5;
    local_10 = DAT_0201232c == '\x02';
    local_20 = param_3;
    local_18 = param_4;
    uVar1 = thunk_FUN_041b2403(param_1,0xb02f,param_2,&local_28);
  }
  return uVar1;
}

