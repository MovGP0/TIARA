/* Ghidra address: 0064efd0 */
/* Ghidra symbol: FUN_0064efd0 */


undefined1 FUN_0064efd0(longlong param_1,undefined2 param_2,undefined8 *param_3)

{
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_20[0] = *param_3;
  local_21 = 0;
  if (*(longlong *)(param_1 + 0x268) != 0) {
    (**(code **)(param_1 + 0x268))
              (*(undefined8 *)(param_1 + 0x270),param_1,param_2,local_20,&local_21);
  }
  return local_21;
}

