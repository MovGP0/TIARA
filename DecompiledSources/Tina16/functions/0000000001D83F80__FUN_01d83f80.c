/* Ghidra address: 01d83f80 */
/* Ghidra symbol: FUN_01d83f80 */


void FUN_01d83f80(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 local_20;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    local_20 = FUN_00b90090(*(undefined8 *)(param_1 + 0xa18));
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0xf8))
              (*(longlong **)(param_1 + 0xa88),param_1 + 0xa63,&local_20,0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xa18),local_20);
    FUN_01d83910(param_1,param_1);
  }
  return;
}

