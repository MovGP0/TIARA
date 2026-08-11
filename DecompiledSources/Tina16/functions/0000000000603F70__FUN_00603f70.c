/* Ghidra address: 00603f70 */
/* Ghidra symbol: FUN_00603f70 */


void FUN_00603f70(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = FUN_00410e60(&DAT_00603eb8,1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1 + 0x10;
  }
  FUN_0041b840(local_20,lVar3);
  *(undefined8 **)(lVar1 + 0x18) = param_2;
  if (param_2 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_2;
  }
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x20;
  }
  FUN_00603b30(param_1,uVar2,lVar1);
  FUN_0041b800(local_20);
  return;
}

