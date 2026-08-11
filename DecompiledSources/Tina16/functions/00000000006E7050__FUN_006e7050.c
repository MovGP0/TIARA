/* Ghidra address: 006e7050 */
/* Ghidra symbol: FUN_006e7050 */


undefined4 FUN_006e7050(undefined8 param_1)

{
  undefined1 local_7c [8];
  uint local_74;
  undefined4 local_68;
  
  FUN_006e6ea0(param_1,local_7c);
  if ((local_74 & 0x40000000) != 0) {
    local_68 = 0xff000008;
  }
  return local_68;
}

