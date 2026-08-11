/* Ghidra address: 01a45430 */
/* Ghidra symbol: FUN_01a45430 */


void FUN_01a45430(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x27c1) == '\0') {
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Transient interactive is not running!");
    FUN_004134c0(uVar1);
  }
  else if ((*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x27c1) != '\0') &&
          (*(longlong *)(param_1 + 0x2b00) != 0)) {
    FUN_01a453b0(param_1);
    FUN_019af200(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x2b00) + 0x198) + 0x30),
                 *(longlong *)(param_1 + 0x2b00));
    FUN_01c88130(*(undefined8 *)PTR_DAT_02004e40,2);
  }
  return;
}

