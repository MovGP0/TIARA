/* Ghidra address: 015cbe30 */
/* Ghidra symbol: FUN_015cbe30 */


bool FUN_015cbe30(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                 undefined2 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 local_16 [11];
  char local_b;
  char local_a;
  
  FUN_004b84c0(param_2,local_16,0xc);
  FUN_015c1020(param_3,param_7,local_16);
  if ((param_4 & 8) == 0) {
    local_a = (char)((uint)param_6 >> 0x18);
  }
  else {
    local_a = (char)((ushort)param_5 >> 8);
  }
  return local_b == local_a;
}

