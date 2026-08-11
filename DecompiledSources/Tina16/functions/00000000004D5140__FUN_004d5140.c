/* Ghidra address: 004d5140 */
/* Ghidra symbol: FUN_004d5140 */


undefined4 FUN_004d5140(longlong param_1,longlong param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_c;
  
  local_20 = auStack_48;
  if (param_2 == 0) {
    local_c = 0x80030009;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                      (*(longlong **)(param_1 + 0x18),param_2,param_3);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar1;
    }
    local_c = 0;
  }
  return local_c;
}

