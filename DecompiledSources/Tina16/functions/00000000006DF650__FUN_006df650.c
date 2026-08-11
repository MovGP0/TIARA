/* Ghidra address: 006df650 */
/* Ghidra symbol: FUN_006df650 */


undefined8 FUN_006df650(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 local_10;
  
  local_40[0] = 4;
  local_38 = param_2;
  uVar2 = FUN_006decf0();
  iVar1 = thunk_FUN_041b2403(uVar2,0x113e,0,local_40);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  return local_10;
}

