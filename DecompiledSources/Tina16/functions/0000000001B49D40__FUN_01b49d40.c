/* Ghidra address: 01b49d40 */
/* Ghidra symbol: FUN_01b49d40 */


void FUN_01b49d40(void)

{
  DAT_02110d40 = DAT_02110d40 + 1;
  if (DAT_02110d40 == 0) {
    FUN_00417840(&PTR_u_ADC_8_bit_01fd7b78,&DAT_00401390,5);
    FUN_00417840(&PTR_u_DAC_8_bit_01fd7ba0,&DAT_00401390,5);
  }
  return;
}

