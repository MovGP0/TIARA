/* Ghidra address: 009d49f0 */
/* Ghidra symbol: FUN_009d49f0 */


void FUN_009d49f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_10;
  
  local_10 = 0;
  lVar1 = FUN_009d3060(*(undefined8 *)(param_2 + 0x88));
  if (lVar1 == 0) {
    FUN_0041b800(&local_10);
  }
  else {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x58;
    }
    FUN_0041b840(&local_10,lVar1);
  }
  if (DAT_01e403c8 != (code *)0x0) {
    (*DAT_01e403c8)(DAT_01e403d0,local_10,param_3,param_4);
  }
  FUN_0041b800(&local_10);
  return;
}

