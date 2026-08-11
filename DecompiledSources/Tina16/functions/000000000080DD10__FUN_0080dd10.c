/* Ghidra address: 0080dd10 */
/* Ghidra symbol: FUN_0080dd10 */


void FUN_0080dd10(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x108) != param_2) {
    *(char *)(param_1 + 0x108) = param_2;
    if (param_2 == '\0') {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x100));
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    else if (PTR_PTR_01e13fa8 != (undefined *)0x0) {
      uVar1 = (**(code **)(PTR_PTR_01e13fa8 + 0x78))(PTR_PTR_01e13fa8,1,param_1);
      *(undefined8 *)(param_1 + 0x100) = uVar1;
      FUN_0064e030(uVar1,*(undefined4 *)(param_1 + 0xd4));
    }
  }
  return;
}

