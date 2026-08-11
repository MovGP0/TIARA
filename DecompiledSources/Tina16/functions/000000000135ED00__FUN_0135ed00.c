/* Ghidra address: 0135ed00 */
/* Ghidra symbol: FUN_0135ed00 */


void FUN_0135ed00(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x748) == '\0') &&
     (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) != 0)) {
    uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_0135ea90(param_1,uVar1);
    FUN_01ada5a0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),
                 *(longlong *)(param_1 + 0x6b0),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x4a0),uVar1);
    FUN_00410f20(uVar1);
    FUN_01a77f90(*(undefined8 *)PTR_DAT_02001e00,0);
    if (param_2 != '\0') {
      FUN_01add6f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0);
    }
  }
  return;
}

