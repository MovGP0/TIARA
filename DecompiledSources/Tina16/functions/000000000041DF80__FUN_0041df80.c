/* Ghidra address: 0041df80 */
/* Ghidra symbol: FUN_0041df80 */


uint * FUN_0041df80(uint *param_1,undefined8 *param_2,char param_3)

{
  *(undefined8 *)param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = param_2[1];
  if (param_3 != '\0') {
    *param_1 = CONCAT22((ushort)*param_1 << 8 | (ushort)*param_1 >> 8,
                        (ushort)((*param_1 >> 0x10 & 0xffff00ff) << 8) | (ushort)(*param_1 >> 0x18))
    ;
    *(ushort *)(param_1 + 1) = (ushort)param_1[1] << 8 | (ushort)param_1[1] >> 8;
    *(ushort *)((longlong)param_1 + 6) =
         *(ushort *)((longlong)param_1 + 6) << 8 | *(ushort *)((longlong)param_1 + 6) >> 8;
  }
  return param_1;
}

