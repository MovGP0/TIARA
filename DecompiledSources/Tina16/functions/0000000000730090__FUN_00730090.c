/* Ghidra address: 00730090 */
/* Ghidra symbol: FUN_00730090 */


undefined1 FUN_00730090(longlong param_1,undefined8 *param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  (**(code **)(param_1 + 0x20))
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),*param_2,param_2[1],0,
             local_19);
  return local_19[0];
}

