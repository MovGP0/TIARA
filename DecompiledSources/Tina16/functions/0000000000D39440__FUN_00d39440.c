/* Ghidra address: 00d39440 */
/* Ghidra symbol: FUN_00d39440 */


undefined8 FUN_00d39440(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  
  FUN_0040d200(&local_68,0x50,0);
  local_68 = 0x50;
  local_64 = 0x10;
  thunk_FUN_0410b804(*(undefined8 *)(param_1 + 0x80),0,0xffffffff,&local_68);
  if (((local_60 & 0x2000) == 0x2000) || (local_60 = local_60 & 0x4000, local_60 == 0x4000)) {
    uVar1 = CONCAT71((uint7)(uint3)(local_60 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

