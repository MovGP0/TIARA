/* Ghidra address: 013d3710 */
/* Ghidra symbol: FUN_013d3710 */


void FUN_013d3710(undefined8 param_1,undefined8 param_2)

{
  if ((*(longlong *)PTR_DAT_02001e00 != 0) &&
     (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) != 0)) {
    FUN_01acfe60(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),param_1,param_2);
    FUN_01aceb90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),1);
  }
  return;
}

