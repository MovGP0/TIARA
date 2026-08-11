/* Ghidra address: 0077e650 */
/* Ghidra symbol: FUN_0077e650 */


undefined8 FUN_0077e650(longlong *param_1,byte param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_30 [2];
  
  if (((((char)param_1[0x68] == '\0') && (*(char *)((longlong)param_1 + 0x6a) != '\0')) &&
      (param_2 < 0x20 && 1 << (param_2 & 0x1f) != 0)) &&
     (((0 < param_3 && (param_3 != *(int *)(*(longlong *)PTR_DAT_02005950 + 0x98))) &&
      ((9 < *(int *)PTR_DAT_02001bd8 && (0x3ad6 < *(int *)PTR_DAT_02002b20)))))) {
    if (param_1[(ulonglong)param_2 + 0x3b] == 0) {
      lVar2 = FUN_0078abf0(&PTR_FUN_00762420,1,0);
      param_1[(ulonglong)param_2 + 0x3b] = lVar2;
    }
    cVar1 = FUN_0078b3c0(param_1[(ulonglong)param_2 + 0x3b],param_3,local_30);
    if (cVar1 == '\0') {
      local_30[0] = OpenThemeDataForDpi(0,(&PTR_u_button_01e084b0)[param_2],param_3);
      FUN_0078b160(param_1[(ulonglong)param_2 + 0x3b],param_3,local_30[0]);
    }
  }
  else {
    local_30[0] = (**(code **)(*param_1 + 0xa8))(param_1);
  }
  return local_30[0];
}

