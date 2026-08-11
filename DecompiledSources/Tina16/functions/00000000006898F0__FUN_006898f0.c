/* Ghidra address: 006898f0 */
/* Ghidra symbol: FUN_006898f0 */


void FUN_006898f0(undefined8 param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = FUN_00410e60(&DAT_00689820,1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x10;
  }
  FUN_0041b840(local_20,lVar2);
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  if (param_2 == 1) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x20;
    }
    (**(code **)(*param_3 + 0x38))(param_3,lVar1);
  }
  FUN_0041b800(local_20);
  return;
}

