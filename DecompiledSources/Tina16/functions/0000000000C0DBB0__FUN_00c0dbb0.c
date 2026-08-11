/* Ghidra address: 00c0dbb0 */
/* Ghidra symbol: FUN_00c0dbb0 */


void FUN_00c0dbb0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 local_19;
  
  if (*(longlong *)(param_1 + 0x750) != 0) {
    local_19 = 0;
    (**(code **)(param_1 + 0x750))
              (*(undefined8 *)(param_1 + 0x758),param_1,param_2,param_3,param_4,&local_19,param_5,
               param_6,param_7);
  }
  return;
}

