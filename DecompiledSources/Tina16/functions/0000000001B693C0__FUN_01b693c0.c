/* Ghidra address: 01b693c0 */
/* Ghidra symbol: FUN_01b693c0 */


void FUN_01b693c0(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 local_20;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    local_20 = FUN_00b90090(*(undefined8 *)(param_1 + 0xcd0));
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x108))
              (*(longlong **)(param_1 + 0xda0),param_1 + 0xd6e,&local_20,0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xcd0),local_20);
  }
  return;
}

