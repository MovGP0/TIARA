/* Ghidra address: 0064e5d0 */
/* Ghidra symbol: FUN_0064e5d0 */


undefined1
FUN_0064e5d0(longlong param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 local_19 [9];
  
  local_19[0] = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    (**(code **)(param_1 + 0x228))
              (*(undefined8 *)(param_1 + 0x230),param_1,param_2,param_3,param_4,param_5,param_6,
               local_19);
  }
  return local_19[0];
}

