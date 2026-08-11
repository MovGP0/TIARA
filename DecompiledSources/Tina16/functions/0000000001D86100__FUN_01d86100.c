/* Ghidra address: 01d86100 */
/* Ghidra symbol: FUN_01d86100 */


undefined8 FUN_01d86100(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    uVar1 = FUN_010e1810(&PTR_FUN_01d7d808,CONCAT71((int7)((ulonglong)param_4 >> 8),1) & 0xffffffff,
                         *(undefined8 *)PTR_DAT_02004030,1,0,2,1,0,0);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x8d8) = *(undefined8 *)(param_1 + 0x60);
  *PTR_DAT_02003af8 = 1;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  return 0;
}

