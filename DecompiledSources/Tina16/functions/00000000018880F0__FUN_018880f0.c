/* Ghidra address: 018880f0 */
/* Ghidra symbol: FUN_018880f0 */


undefined8 FUN_018880f0(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = FUN_01801410(*(undefined8 *)(param_1 + 0x48),param_4,param_2,param_3);
  iVar2 = 100 - (uVar1 & 0xff);
  local_20 = (param_2 * iVar2) / 100;
  uStack_1c = (param_3 * iVar2) / 100;
  if (local_20 == 0) {
    local_20 = param_2;
  }
  if (uStack_1c == 0) {
    uStack_1c = param_3;
  }
  return CONCAT44(uStack_1c,local_20);
}

