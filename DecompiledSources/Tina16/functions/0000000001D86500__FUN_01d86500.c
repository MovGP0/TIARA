/* Ghidra address: 01d86500 */
/* Ghidra symbol: FUN_01d86500 */


undefined8
FUN_01d86500(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_01138b30(*(undefined8 *)(param_1 + 0x60),param_2,&local_res18,&local_res20,&param_5,&param_6
                );
  }
  return 0;
}

