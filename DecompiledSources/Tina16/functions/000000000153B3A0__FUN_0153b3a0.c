/* Ghidra address: 0153b3a0 */
/* Ghidra symbol: FUN_0153b3a0 */


void FUN_0153b3a0(undefined8 *param_1,undefined8 *param_2,uint *param_3,undefined1 *param_4,
                 longlong param_5)

{
  if (param_5 == 0) {
    *param_1 = *(undefined8 *)(PTR_DAT_02004010 + 0x38d);
    *param_2 = *(undefined8 *)(PTR_DAT_02004010 + 0x395);
    *param_3 = (uint)*(ushort *)(PTR_DAT_02004010 + 0x38b);
    *param_4 = PTR_DAT_02004010[0x39d];
  }
  else {
    *param_1 = *(undefined8 *)(param_5 + 0x81f);
    *param_2 = *(undefined8 *)(param_5 + 0x827);
    *param_3 = (uint)*(ushort *)(param_5 + 0x81d);
    *param_4 = *(undefined1 *)(param_5 + 0x82f);
  }
  return;
}

