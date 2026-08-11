/* Ghidra address: 008059c0 */
/* Ghidra symbol: FUN_008059c0 */


void FUN_008059c0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)((longlong)param_1 + 0x4d5) != '\0') goto code_r0x00805a54;
  if (*(char *)((longlong)param_1 + 0xa9) == '\0') {
LAB_00805a03:
    if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
      cVar1 = FUN_0065be20(param_1);
      if (cVar1 != '\0') goto LAB_00805a4a;
    }
    FUN_0041ddd0(&local_10,PTR_PTR_02004f50);
    uVar2 = FUN_0044d490(&PTR_FUN_00472870,1,local_10);
    FUN_004134c0(uVar2);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 == '\0') goto LAB_00805a03;
  }
LAB_00805a4a:
  FUN_00802550(param_1);
code_r0x00805a54:
  FUN_00414480(&local_10);
  return;
}

