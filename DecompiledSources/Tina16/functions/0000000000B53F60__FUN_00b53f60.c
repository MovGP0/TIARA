/* Ghidra address: 00b53f60 */
/* Ghidra symbol: FUN_00b53f60 */


void FUN_00b53f60(undefined8 param_1,ulonglong param_2,ushort param_3)

{
  FUN_00b53ca0(param_1,CONCAT62((int6)((param_2 & 0xffffffff) >> 0x10),
                                (short)(param_2 & 0xffffffff) + 1),0xffffffff,
               ((uint)param_2 & 0xffff) + (uint)param_3 + 1,1);
  return;
}

