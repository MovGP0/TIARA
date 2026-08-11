/* Ghidra address: 00d36e90 */
/* Ghidra symbol: FUN_00d36e90 */


undefined8 FUN_00d36e90(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 local_68;
  undefined4 local_64;
  uint local_5c;
  
  uVar2 = 0;
  if ((param_1 != 0) && (-1 < param_2)) {
    FUN_0040d200(&local_68,0x50,0);
    local_68 = 0x50;
    local_64 = 1;
    thunk_FUN_0410b804(param_1,param_2,0xffffffff,&local_68);
    uVar1 = (ulonglong)local_5c;
    if (((local_5c & 3) == 3) || (((local_5c & 2) == 2 || (uVar1 = 0, (local_5c & 1) == 1)))) {
      uVar2 = CONCAT71((int7)(uVar1 >> 8),1);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

