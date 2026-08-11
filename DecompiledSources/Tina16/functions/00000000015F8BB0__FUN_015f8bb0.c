/* Ghidra address: 015f8bb0 */
/* Ghidra symbol: FUN_015f8bb0 */


undefined8 FUN_015f8bb0(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_d;
  undefined1 local_c [4];
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = _get_digital_node_value(param_1,param_2,&local_d,local_c,param_3,1);
  }
  return uVar1;
}

