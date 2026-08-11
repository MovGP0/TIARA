/* Ghidra address: 006f3ac0 */
/* Ghidra symbol: FUN_006f3ac0 */


undefined4
FUN_006f3ac0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined4 local_1c;
  
  local_1c = 0xffffffff;
  if (*(longlong *)(param_1 + 0x690) != 0) {
    (**(code **)(param_1 + 0x690))
              (*(undefined8 *)(param_1 + 0x698),param_1,param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,&local_1c);
  }
  return local_1c;
}

