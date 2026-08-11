/* Ghidra address: 00420110 */
/* Ghidra symbol: FUN_00420110 */


void FUN_00420110(longlong param_1)

{
  DAT_01dbdcb4 = 0;
  PTR_IMAGE_DOS_HEADER_01dbdce0 = (undefined *)FUN_0041f810(0);
  DAT_01dbdce8 = 0;
  DAT_01dbdcf0 = 0;
  DAT_01dbdd00 = param_1 + 0x10;
  dbkFCallWrapperAddr = __dbk_fcall_wrapper;
  PTR_IMAGE_DOS_HEADER_0200c280 = PTR_IMAGE_DOS_HEADER_01dbdce0;
  FUN_0041f990();
  FUN_00413790(param_1,&DAT_01dbdcd8);
  return;
}

