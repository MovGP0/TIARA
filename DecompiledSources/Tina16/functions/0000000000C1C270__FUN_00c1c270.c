/* Ghidra address: 00c1c270 */
/* Ghidra symbol: FUN_00c1c270 */


void FUN_00c1c270(undefined8 param_1,uint param_2,uint param_3,byte param_4,undefined1 *param_5,
                 undefined1 *param_6,undefined1 *param_7)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)
          ((ulonglong)((uint)param_4 * 0x1d + (param_3 & 0xff) * 0x96 + (param_2 & 0xff) * 0x4d) /
          0x100);
  *param_5 = uVar1;
  *param_6 = uVar1;
  *param_7 = uVar1;
  return;
}

