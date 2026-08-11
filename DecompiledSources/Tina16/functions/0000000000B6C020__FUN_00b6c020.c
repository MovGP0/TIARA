/* Ghidra address: 00b6c020 */
/* Ghidra symbol: FUN_00b6c020 */


void FUN_00b6c020(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((char)param_1[0xf] != '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1);
  }
  if (((param_3 != 0) && ((param_3 & 3) == 0)) &&
     (uVar1 = (**(code **)(*param_1 + 0x98))(*param_1), param_3 <= uVar1)) {
    *(undefined1 *)(param_1 + 0xf) = 1;
    return;
  }
  uVar2 = FUN_0044d490(&PTR_FUN_00b6a318,1,L"Invalid key size");
  FUN_004134c0(uVar2);
  return;
}

