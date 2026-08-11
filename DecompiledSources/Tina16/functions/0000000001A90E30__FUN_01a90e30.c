/* Ghidra address: 01a90e30 */
/* Ghidra symbol: FUN_01a90e30 */


undefined4 FUN_01a90e30(undefined4 param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  ushort local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  
  cVar1 = FUN_01a92160(DAT_02110870,param_1,&local_1c);
  if (cVar1 == '\0') {
    uVar2 = FUN_005fbf20(param_1);
    FUN_00635080(uVar2,&local_1e,&local_22,&local_20);
    local_22 = 0xf0 - local_22;
    if ((0x5f < local_22) && (local_22 < 0x91)) {
      if (param_2 == '\0') {
        local_22 = 0x28;
      }
      else {
        local_22 = 0xd2;
      }
    }
    if (local_22 < 0x28) {
      local_22 = 0x3c;
    }
    local_1c = FUN_00635590(local_1e,local_22,local_20);
  }
  return local_1c;
}

