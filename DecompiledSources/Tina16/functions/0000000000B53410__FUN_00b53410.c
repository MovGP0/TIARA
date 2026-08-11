/* Ghidra address: 00b53410 */
/* Ghidra symbol: FUN_00b53410 */


void FUN_00b53410(undefined8 param_1,ulonglong param_2,ushort param_3,undefined8 param_4)

{
  FUN_00b53150(param_1,CONCAT62((int6)((param_2 & 0xffffffff) >> 0x10),
                                (short)(param_2 & 0xffffffff) + 1),
               CONCAT62((int6)((ulonglong)param_4 >> 0x10),0xff) & 0xffffffff,
               ((uint)param_2 & 0xffff) + (uint)param_3 + 1,1);
  return;
}

