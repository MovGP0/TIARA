/* Ghidra address: 01d86b60 */
/* Ghidra symbol: FUN_01d86b60 */


undefined4 FUN_01d86b60(undefined8 param_1,undefined1 *param_2)

{
  undefined4 unaff_ESI;
  undefined1 local_19;
  
  *param_2 = 1;
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    FUN_01c7e500(*(undefined8 *)PTR_DAT_02004e40,*(undefined8 *)PTR_DAT_02004e40,&local_19);
    *param_2 = local_19;
  }
  return unaff_ESI;
}

