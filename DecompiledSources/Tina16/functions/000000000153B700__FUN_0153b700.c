/* Ghidra address: 0153b700 */
/* Ghidra symbol: FUN_0153b700 */


void FUN_0153b700(undefined8 *param_1,undefined8 *param_2,uint *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,uint *param_7,longlong *param_8,
                 longlong param_9)

{
  if (param_9 == 0) {
    if (*(longlong *)(PTR_DAT_02004010 + 0x7ce) != 0) {
      *param_1 = *(undefined8 *)(PTR_DAT_02004010 + 0x262);
      *param_2 = *(undefined8 *)(PTR_DAT_02004010 + 0x26a);
      *param_3 = (uint)*(ushort *)(PTR_DAT_02004010 + 0x260);
      FUN_00414ad0(param_4,*(undefined8 *)(PTR_DAT_02004010 + 0x7ce));
    }
    FUN_00414ad0(param_8,*(undefined8 *)(PTR_DAT_02004010 + 0x7d6));
    if ((*param_8 == 0) || (PTR_DAT_02004010[0x7df] == '\0')) {
      FUN_00414480(param_8);
    }
    else {
      *param_5 = *(undefined8 *)(PTR_DAT_02004010 + 0x274);
      *param_6 = *(undefined8 *)(PTR_DAT_02004010 + 0x27c);
      *param_7 = (uint)*(ushort *)(PTR_DAT_02004010 + 0x272);
    }
  }
  return;
}

