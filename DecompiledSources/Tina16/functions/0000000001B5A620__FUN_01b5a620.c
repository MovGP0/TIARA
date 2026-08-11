/* Ghidra address: 01b5a620 */
/* Ghidra symbol: FUN_01b5a620 */


void FUN_01b5a620(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 local_20;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    local_20 = FUN_00b90090(*(undefined8 *)(param_1 + 0xcd8));
    (**(code **)(**(longlong **)(param_1 + 0xd58) + 0x108))
              (*(longlong **)(param_1 + 0xd58),param_1 + 0xd1a,&local_20,0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xcd8),local_20);
  }
  return;
}

